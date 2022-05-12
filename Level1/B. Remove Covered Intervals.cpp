/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/B

B. Remove Covered Intervals
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an array intervals where intervalsi=[li,ri] represent the interval [li,ri), remove all intervals that are covered by another interval in the list.

The interval [a,b) is covered by the interval [c,d) if and only if c≤a and b≤d.

Print the number of remaining intervals.

Input
The first line contains an integer n (1≤n≤105) — the number of intervals

The next n lines contains 2 two integers for each line li,ri (1≤li≤ri≤109).
Output
The number of remaining intervals.

Examples
inputCopy
3
1 4
3 6
2 8
outputCopy
2
inputCopy
2
1 4
2 3
outputCopy
1

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
int n,x=0;
cin >> n;
vector < pair<int,int> > v(n);
for ( int i = 0 ; i < n ; i++ ){
	cin >> v[i].first >> v[i].second ;
}
sort( v.begin() , v.end() );
for(int i = 1 ; i<n ; i++){
	if( v[i].first == v[i-1].first ){
		x++;
	}
	else if( v[i].second <= v[i-1].second ){
		x++;
		v[i].first = v[i-1].first ;
		v[i].second = v[i-1].second ;	
	}
}
	cout<< n-x;
}
int main() {
// YousefTarek();
    int tt = 1 ;
		//cin >> tt ;
		while(tt--){
			solve();
			cout << "\n";
		}
}
/*
void solve(){
	
}
*/