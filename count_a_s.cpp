/*
Codeforces


H. count a's
time limit per test
2 seconds
memory limit per test
256 megabytes

given string s
, and you need to answer q queries. each query need to print occurrences of 'a' from index L to index R

.
Input

the first line contains string s
, and q number of queries, (1≤|s|,q≤105)

.

the next q
lines contains L,R(1≤L≤R≤n)

.
Output

For every Query print occurrences of 'a' in this range. 

Input : 
abcaabc
6
1 3
2 4
1 6
3 5
4 7
1 7

Output: 
1
1
3
2
2
3
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main()
{

    string s; 
    getline(cin  , s) ;
    int n  ;
    cin >> n ;
    int count = 0  ; 
    vector <int> a_count(s.length() + 1 , 0)  ;
    for(int st =  1  ; st  <= s.length()  ; st += 1)
    {
        if(s[st - 1] == 'a')
        {
            a_count[st] = a_count[st - 1] +  1 ; 
        }
        else
        {
            a_count[st] = a_count[st - 1]  ; 
        }
        
    }
    //for(auto ele : a_count) cout << ele << " " ;
    while(n-- > 0)
    {
        int q1 , q2 ;
        cin >> q1 >> q2 ;
        cout << a_count[q2]  - a_count[q1 - 1] << endl ;       
    }
    return 0  ;
}