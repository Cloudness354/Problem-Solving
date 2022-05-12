/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/D

D. Collect Coins
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n coins placed on a number line, the ith coin is placed on coordinate xi.

Initially, no coins are collected. 7oSkaa decides to collect k of the n coins.

Now, he is at coordinate 0. He can move left and right along the line with speed 1. He can also collect a coin when he is at the same position as the coin, in negligible time.

Find the minimum time required to collect k coins.

First test case example.
Input
The first line contains two integers n,k (1≤k≤n≤105) — n denotes the number of coins, k denotes the number of coins 7oSkaa decides to collect.

The second line contains n placed on coordinate X (−108≤xi≤108) — xi denotes the coordinate of the ith coin.

Output
Find the minimum time required to collect k coins.

Examples
inputCopy
5 3
-30 -10 10 20 50
outputCopy
40
inputCopy
3 2
10 20 30
outputCopy
20
inputCopy
8 5
-9 -7 -4 -3 1 2 3 4
outputCopy
10
Note
The first test case:

- He collected the coin on the coordinate −10, so total time needed is 10.

- after that collected coin on the coordinate 10, so total time need becomes 30.

- after that collected coin on the coordinate 20, so total time need becomes 40.

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
int n , k ;
cin >> n >> k ;
vector <int> v(n) ;
for( int i = 0 ; i < n ; i++){
	cin >> v[i];
}
    sort( v.begin() , v.end() );

int i = 0 , j = k-1 , mx=1e9+11;
while( j < n ){
	int mn = min( abs(v[i]) , abs(v[j]) ) ,
	absdiff= v[j] - v[i] ;
	
mx = min( absdiff + mn , mx) ;
j++,i++;
}
cout << mx ;
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