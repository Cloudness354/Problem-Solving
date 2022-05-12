/*
https://codeforces.com/contest/1669/problem/C

C. Odd/Even Increments
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given an array a=[a1,a2,…,an] of n positive integers, you can do operations of two types on it:

Add 1 to every element with an odd index. In other words change the array as follows: a1:=a1+1,a3:=a3+1,a5:=a5+1,….
Add 1 to every element with an even index. In other words change the array as follows: a2:=a2+1,a4:=a4+1,a6:=a6+1,….
Determine if after any number of operations it is possible to make the final array contain only even numbers or only odd numbers. In other words, determine if you can make all elements of the array have the same parity after any number of operations.

Note that you can do operations of both types any number of times (even none). Operations of different types can be performed a different number of times.

Input
The first line contains an integer t (1≤t≤100) — the number of test cases.

The first line of each test case contains an integer n (2≤n≤50) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤103) — the elements of the array.

Note that after the performed operations the elements in the array can become greater than 103.

Output
Output t lines, each of which contains the answer to the corresponding test case. As an answer, output "YES" if after any number of operations it is possible to make the final array contain only even numbers or only odd numbers, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
4
3
1 2 1
4
2 2 2 3
4
2 2 2 2
5
1000 1 1000 1 1000
outputCopy
YES
NO
YES
YES
Note
For the first test case, we can increment the elements with an even index, obtaining the array [1,3,1], which contains only odd numbers, so the answer is "YES".

For the second test case, we can show that after performing any number of operations we won't be able to make all elements have the same parity, so the answer is "NO".

For the third test case, all elements already have the same parity so the answer is "YES".

For the fourth test case, we can perform one operation and increase all elements at odd positions by 1, thus obtaining the array [1001,1,1001,1,1001], and all elements become odd so the answer is "YES".


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
int n , x , even = 0 ,odd=0, even1 = 0 ,odd1=0;
cin >> n ;
for (size_t i = 0; i < n; i++)
{
	cin >> x ;
	if( (i&1) == 0){
		if( (x&1) == 0){
			even1++;
		}
		else {
			odd1++;
		}
	}
	if( (i&1) == 1){
		if( (x&1) == 0){
			even++;
		}
		else {
			odd++;
		}
	}
}
if ((even&&odd) || (even1&&odd1))
cout<<"No";
else{
	cout<<"Yes";
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