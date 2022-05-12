/*
https://codeforces.com/contest/1678/problem/B2

B2. Tokitsukaze and Good 01-String (hard version)
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is the hard version of the problem. The only difference between the two versions is that the harder version asks additionally for a minimum number of subsegments.

Tokitsukaze has a binary string s of length n, consisting only of zeros and ones, n is even.

Now Tokitsukaze divides s into the minimum number of contiguous subsegments, and for each subsegment, all bits in each subsegment are the same. After that, s is considered good if the lengths of all subsegments are even.

For example, if s is "11001111", it will be divided into "11", "00" and "1111". Their lengths are 2, 2, 4 respectively, which are all even numbers, so "11001111" is good. Another example, if s is "1110011000", it will be divided into "111", "00", "11" and "000", and their lengths are 3, 2, 2, 3. Obviously, "1110011000" is not good.

Tokitsukaze wants to make s good by changing the values of some positions in s. Specifically, she can perform the operation any number of times: change the value of si to '0' or '1' (1≤i≤n). Can you tell her the minimum number of operations to make s good? Meanwhile, she also wants to know the minimum number of subsegments that s can be divided into among all solutions with the minimum number of operations.

Input
The first contains a single positive integer t (1≤t≤10000) — the number of test cases.

For each test case, the first line contains a single integer n (2≤n≤2⋅105) — the length of s, it is guaranteed that n is even.

The second line contains a binary string s of length n, consisting only of zeros and ones.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print a single line with two integers — the minimum number of operations to make s good, and the minimum number of subsegments that s can be divided into among all solutions with the minimum number of operations.

Example
inputCopy
5
10
1110011000
8
11001111
2
00
2
11
6
100110
outputCopy
3 2
0 3
0 1
0 1
3 1
Note
In the first test case, one of the ways to make s good is the following.

Change s3, s6 and s7 to '0', after that s becomes "1100000000", it can be divided into "11" and "00000000", which lengths are 2 and 8 respectively, the number of subsegments of it is 2. There are other ways to operate 3 times to make s good, such as "1111110000", "1100001100", "1111001100", the number of subsegments of them are 2, 4, 4 respectively. It's easy to find that the minimum number of subsegments among all solutions with the minimum number of operations is 2.

In the second, third and fourth test cases, s is good initially, so no operation is required.
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
int sub=0,a=22,n ,mx=0;string s;
cin >> n >> s; 
for(int i=0 ; i<n;i+=2){
	if(s[i]!=s[i+1]){
		mx++;
		}
	else {
		if(s[i]!=a){
			sub++;
		}
		a=s[i];
	}
}

cout << mx <<" "<< max(sub,1);
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