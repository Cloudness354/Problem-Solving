/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/C

C. Maximum Value
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Today's Problem will be an easy one, You are given an integer n and a sequence of n elements.

Your task is to find the maximum value of the expression a×b+a−b, where a=Ai,b=Aj and i≠j.

Input
The first line contains an integer t (1≤t≤100) — denotes the number of test cases.

Each test case of the test cases consist of two lines:

The first line contains an integer n (2≤n≤104) — the number of elements in the sequence
The second line contains n integers (−109≤ai≤109) — ai denotes the ith element.
the summation of n overall test cases doesn't exceed 5×105
Output
The maximum value of the expression a×b+a−b, where a,b must be distinct elements of the sequence.

Example
inputCopy
2
2
2 2
3
5 3 2
outputCopy
4
17
*/

#include<bits/stdc++.h>
using namespace std;
// void YousefTarek(){
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     #ifndef ONLINE_JUDGE
//         freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
//     #endif
// }
void solve(){
int n;
cin >> n ;
vector <long long>v(n);
for( int i = 0 ; i<n ;i++){
	cin >> v[i] ;
}
sort(v.begin(),v.end());
long long mx,min;
mx = ( v[n-1] * v[n-2] ) + ( v[n-1] - v[n-2] );
min = ( v[0] * v[1] ) + ( v[1] - v[0] );
cout << max( mx , min );
}
int main() {
// YousefTarek();
    int tt = 1 ;
		cin >> tt ;
		while(tt--){
			solve();
			cout << "\n";
		}
}
/*
void solve(){
	
}
*/