/*
https://codeforces.com/contest/1678/problem/A

A. Tokitsukaze and All Zero Sequence
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Tokitsukaze has a sequence a of length n. For each operation, she selects two numbers ai and aj (i≠j; 1≤i,j≤n).

If ai=aj, change one of them to 0.
Otherwise change both of them to min(ai,aj).
Tokitsukaze wants to know the minimum number of operations to change all numbers in the sequence to 0. It can be proved that the answer always exists.

Input
The first line contains a single positive integer t (1≤t≤1000) — the number of test cases.

For each test case, the first line contains a single integer n (2≤n≤100) — the length of the sequence a.

The second line contains n integers a1,a2,…,an (0≤ai≤100) — the sequence a.

Output
For each test case, print a single integer — the minimum number of operations to change all numbers in the sequence to 0.

Example
inputCopy
3
3
1 2 3
3
1 2 2
3
1 2 0
outputCopy
4
3
2
Note
In the first test case, one of the possible ways to change all numbers in the sequence to 0:

In the 1-st operation, a1<a2, after the operation, a2=a1=1. Now the sequence a is [1,1,3].

In the 2-nd operation, a1=a2=1, after the operation, a1=0. Now the sequence a is [0,1,3].

In the 3-rd operation, a1<a2, after the operation, a2=0. Now the sequence a is [0,0,3].

In the 4-th operation, a2<a3, after the operation, a3=0. Now the sequence a is [0,0,0].

So the minimum number of operations is 4.
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
int a,b,c,x,y;
bool ans=true;
cin>>x;
vector<int>v(x),v2(1e3);
for(auto &i:v){
	cin>>i;
	v2[i]++;
	}

if(v2[0]>0)
	cout<<x-v2[0];
else {
	for (int i=0;i<1e3;i++){
		if(v2[i]>1){
		cout<<x;
		ans=false;
		break;
		}
		}
if(ans)cout<<x+1;	
}
}
int main() {
YousefTarek(); 
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