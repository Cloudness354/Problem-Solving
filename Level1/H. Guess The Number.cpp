/*
https://codeforces.com/group/nm0n1RosrQ/contest/375698/problem/H

H. Guess The Number
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
7oSkaa knows that most of us are in the midterm exams, so he will give you an easy problem for today.

He will play with you a game called guess the number, he will give you two numbers l and r and asked you to guess the number of (Fr−Fl) modulo 109+7.

Fi is the ith Fibonacci number.

F1=0.
F2=1.
Fi=Fi−1+Fi−2.

Input
The first line contains an integer t (1≤t≤105) — the number of games they will play.

In the next t lines, each line consist of two integers l,r (1≤l≤r≤105).

Output
For each game, print (Fr−Fl) modulo 109+7.

Example
inputCopy
5
2 4
5 10
3 9
1 15
20 23
outputCopy
1
31
20
377
13530
*/
#include<bits/stdc++.h>
using namespace std;
void YousefTarek(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
    #endif
}
vector<long long>v;
void solve(){
int l,r;
    cin >> l >> r;
    cout<< (v[r-1]-v[l-1]+int(1e9+7))%int(1e9+7);
}
int main() {
YousefTarek(); 

    long long temp=0,first=0,second=1;
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<100011;i++){
        temp=(first%int(1e9+7)+second%int(1e9+7))%int(1e9+7);
        first = second;
        second = temp;
        v.push_back(temp);
				}

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