/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/F

F. Is It Good for Binary Search ?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
7oSkaa loves binary search so much, he solved a lot of problems with it, and it was one of the main reasons for qualifying to ACPC 2021, so 7oSkaa faced a problem and wants you to help him.

He has an array, but he can't know if he can make a binary search on it or not.

So he asked you to help him to determine if the subarray Al,Al+1,…,Ar−1,Ar is good for binary search or not?

He will give you q queries and array A, each query consisting of l and r. Can you help him to determine if the subarray A[l,r] is good to make a binary search on it or not.

How to make binary search on element in a sequence.
Input
The first line contains two integers n,q (1≤n,q≤105) — the size of the array and the number of queries.

The second line contains n integers (1≤Ai≤109) — Ai denotes the ith element of the array.

The next q lines, each line contains two integers l,r (1≤l≤r≤n).

Output
For each query, print "YES" if the subarray is good to make a binary search on it, otherwise print "NO".

You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answers).

Example
inputCopy
5 3
5 1 2 3 1
1 3
2 4
3 5
outputCopy
NO
YES
NO

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
int n , q ;
cin >> n >> q ;
vector <int> v(n),from_right(n),from_left(n);
for( int i = 0 ; i < n ; i++ ){
	cin >> v[i] ;
}

int t=1;
for( int i = 1 ; i < n ; i++){
	if(v[i]>=v[i-1]){
		from_right[i-1]=from_right[i]=t;
	}
	else {
		t++;
	}
}
 t=1;
for( int i = 1 ; i < n ; i++){
	if(v[i]<=v[i-1]){
		from_left[i-1]=from_left[i]=t;
	}
	else {
		t++;
	}
}

while(q--){
int l , r;
cin >> l >> r;
if(
	(from_right[l-1]==from_right[r-1]&&
	from_right[l-1]!=0&&from_right[r-1]!=0)||
	 (from_left[l-1]==from_left[r-1]&&
	 from_left[r-1]!=0&&
	 from_left[l-1]!=0)
){
	cout<<"YES\n";
}
else { 
	cout<<"NO\n";
}
}



}
int main() {
// YousefTarek();
    int tt = 1 ;
		// cin >> tt ;
		while(tt--){
			solve();
			cout << "\n";
		}
}
/*
void solve(){
	
}
*/