/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/G

G. First Miss
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
We will enter the problem directly.


You have given an integer n and a sequence A of n integers, your task is to find the sequence B of n integers.

Bi= the minimum non-negative integer that doesn't exist in the subarray A1,…,Ai
Print the sequence B.

Input
The first line contains an integer n (1≤n≤105) — the number of elements in the sequence.

The second line contains n integers (0≤Ai≤105) — Ai denotes the ith element in the sequence A.

Output
Print the sequence B.

Bi= the minimum non-negative integer that doesn't exist in the subarray A1,…,Ai
Example
inputCopy
4
1 1 0 2
outputCopy
0 0 2 3 
Note
- The minimum non-negative integer that is not equal to A1=1 is 0, B1=0.

- The minimum non-negative integer that is not equal to A1=1,A2=1 is 0, B2=0.

- The minimum non-negative integer that is not equal to A1=1,A2=1,A3=0 is 2, B2=2.

- The minimum non-negative integer that is not equal to A1=1,A2=1,A3=0,A4=2 is 3, B2=3.

B=[0,0,2,3].

*/
#include<bits/stdc++.h>
using namespace std;
void YousefTarek(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
    #endif
}
void solve(){
int n,q;
cin >> n;
vector<int>v(n),v3,v2(1e5+11);
for(auto &i:v){
    cin>>i;
    v2[i]++;
    for(int k=0;k<1e5+11;k++){
        if(v2[k]==0){
					v3.push_back(k);
					break;
				}
    }
    }
for(auto& i:v3)
	cout<<i<<" ";



}
int main() {
YousefTarek(); 
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