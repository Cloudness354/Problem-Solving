/*
https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A

A. Palindromes Replace
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
As it is known Saeed loves palindrome too much. A palindrome is a string that reads the same forwards as backwards.

One day his best friend Mina gave him a string and told him that this string was a palindrome.

When Saeed arrived home he found that some letters are missing and replaced them with '?' letter and now he wonders if there is a way to replace all the '?' with lowercase letters so that the final string is a palindrome.

If there are multiple such strings, choose the lexicographically smallest one.

Input
The input consists of a single line containing the string S (1≤|S|≤100).

|S| means the length of the string.

It is guaranteed that S consists of lowercase letters ('a'–'z') and '?'.

Output
Output -1 if it is impossible to get a palindrome by replacing all the '?'.

Otherwise, print the lexicographically smallest palindrome string you can get after replacing all the '?' with lowercase letters.

Examples
inputCopy
a?z?
outputCopy
azza
inputCopy
aba
outputCopy
aba

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
    string s;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if((s[i]=='?'&&s[s.size()-1-i]!='?')){
				s[i]=s[s.size()-1-i];
			}
			else if((s[i]!='?'&&s[s.size()-1-i]=='?')){
				s[s.size()-1-i]=s[i];
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i]=='?')s[i]='a';
		}
		string s1=s;
		reverse(s1.begin(),s1.end());
		if(s==s1){
			cout<<s;
		}else {
			cout<<-1;
		}
}

/*
void solve(){
	
}
*/