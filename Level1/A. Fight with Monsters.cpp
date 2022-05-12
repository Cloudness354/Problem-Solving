/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/A

A. Fight with Monsters
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
We have a hero who fights with the monsters, in one strike, he can kill all monsters whose health is equal to the power of the strike.

If we have 9 monsters with health equal to [1,2,2,4,6,8,1,2,5], and the hero makes a strike with power equal to 2 he will kill the 2nd,3rd,8th monsters.

We want you to help us find the minimum number of strikes that hero will make to kill the monsters.

Input
The first line contains an integer n (1≤n≤105)− denotes the number of monsters.

The second line contains n integers (1≤Hi≤105)−Hi denotes the health of the ith monster.

Output
The minimum number of strikes that hero will make to kill the monsters.

Examples
inputCopy
10
1 2 2 3 5 4 3 6 2 9
outputCopy
7
inputCopy
5
1 2 3 4 5
outputCopy
5

*/




#include<bits/stdc++.h>
using namespace std;

void solve(){
int n ,strikes=0;
	cin >> n ;
	vector <int> monsters(n) , freq(1e5+11);
	for ( auto &imonster : monsters ) {
		cin >> imonster ;
		freq[imonster]++ ;
	}
	for ( auto &ifreq : freq ) {
		if(ifreq>0){
			strikes++ ;
		}
	}
	cout << strikes ;
}
int main() {
    int tt = 1 ;
		//cin >> tt ;
		while(tt--){
			solve();
			cout << "\n";
		}
}
/*
void solve(){
	int n , monsters ;
	set <int> s ;
	cin >> n;
	while ( n-- ) {
	cin >> monsters ;
	s . emplace ( monsters ) ;
	}
	cout << s.size() ;
}
*/