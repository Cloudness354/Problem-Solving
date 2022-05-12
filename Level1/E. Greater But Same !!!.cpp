/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/E

E. Greater But Same !!!
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
7oSkaa's friend has a positive integer n and challenged 7oSkaa to get a number greater than his number but consisting of the same digits.

7oSkaa likes competitions, so he accepted his friend's challenge, but he added one more condition to make the challenge hard because he found that the challenge is so easy, he said that he will get the smallest number that is greater than n and consist of the same digits.

7oSkaa is now in trouble, he found that he made the challenge so hard, so he asked you to help him to win the challenge.

     Can you help me
Input
The first line contains the number of test cases t (1≤t≤100) — the number of test cases.

The next t lines contains for each line an integer n (1≤n≤10100000,1≤|n|≤105) — |n| denotes the number of digits in n.

It's guaranteed that summation of |n| overall test cases doesn't exceed 2×105⟶∑t1|n|≤2×105 .

Output
Print the smallest number that is greater than n and consists of the same digits if you can get it otherwise, print "Impossible".

Example
inputCopy
3
152
12
21
outputCopy
215
21
Impossible

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
string s;
		int idx = -1;
		cin >> s;
 
		for (int i = s.size() - 1; i > 0 && idx == -1; i--)
			if (s[i] > s[i - 1])
				idx = i - 1;
		//151362222221
		//   *
		//151632222221
		//    <-------
		//151612222223
 
		if (idx != -1) {
			int idx1;
			for (int i = idx; i < s.size(); i++)
				if (s[idx ] < s[i])
					idx1 = i;
 
			swap(s[idx ], s[idx1]);
 
			sort(s.begin() + idx + 1, s.end());
		}
				cout << (idx == -1 ? "Impossible" : s);
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
	string n ;
cin >> n ;
if(next_permutation( n.begin() , n.end() )){
	cout<<n;
}
else{

	cout<<"Impossible";
}
}
*/