/*
CSES Problem Set
Static Range Sum Queries


Time limit: 1.00 s
Memory limit: 512 MB

Given an array of n integers, your task is to process q queries of the form: what is the sum of values in range [a,b]?
Input
The first input line has two integers n and q: the number of values and queries.
The second line has n integers x_1,x_2,\dots,x_n: the array values.
Finally, there are q lines describing the queries. Each line has two integers a and b: what is the sum of values in range [a,b]?
Output
Print the result of each query.
Constraints

1 \le n,q \le 2 \cdot 10^5
1 \le x_i \le 10^9
1 \le a \le b \le n

Example
Input:
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3

Output:
11
2
24
4
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 
int main(){

   ios::sync_with_stdio(NULL); 
   cin.tie(NULL) ;
   
   vector <int> arr ;
   int n  , q ;
   cin >> n >> q  ;
   int val ; 
   for(int st =  0 ;  st  <= n - 1  ;  st += 1)
   {
    cin >> val  ;
    arr.push_back(val) ;
   }
   vector <long long> pre(n + 1 , 0) ;
   for(int st =  1  ; st <= n ; st += 1)
   {
    pre[st] =  pre[st  - 1] + arr[st - 1] ; 
   }
   for(auto ele : pre) cout << ele << " " ;
   cout << "Done\n" ;
   int q1 , q2 ;
   // Prefix sum done processing all the queries
   for(int st  = 0  ;  st <= q  - 1  ; st += 1)
   {
    cin >> q1 >> q2; 
    cout << pre[q2] - pre[q1 - 1] << endl ;
   }
   return 0 ; 
}


