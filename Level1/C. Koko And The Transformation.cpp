/*
https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C

C. Koko And The Transformation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
koko has two arrays a and b, he wants to know if he can transform a to b in a finite number of steps. In each step he can perform one of two operations:

Pick two values from a and merge them into one value equal to their sum.
Pick value from a and split it into two values such that their sum are equal to the initial value.
koko needs your help, can you find out if he can transform a to b in a finite number of steps?

Input
The first line of input contains two numbers n and m (1≤n,m≤105) – the number of elements in arrays a and b respectively.

The next line contains n integers, the elements in array a (0≤ai≤104).

The next line contains m integers, the elements in array b (0≤bi≤104).

Output
Print "Yes" if koko can transform a to b in a finite number of steps, else, print "No".

Example
inputCopy
3 5
6 15 6
5 12 0 3 7
outputCopy
Yes
Note
- One solution to the sample case is: split 15 to 12 and 3, split 6 to 1 and 5, merge 1 and 6 to 7. split 7 to 7 and 0.

- Note that: the order of the numbers in a or b is not important.
*/
#include<bits/stdc++.h>
using namespace std;
void YousefTarek(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
    #endif
}


int main() {
YousefTarek(); 
    long long sum1=0,sum2=0,n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum2+=x;
		}
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			sum1+=x;
		}
		if(sum1==sum2)cout<<"Yes";
		else cout<<"No";
}

/*
void solve(){
	
}
*/