/*O. Calculator
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a mathematical expression. The expression will be one of the following expressions: A+B, A−B, A∗B and A/B.

Print the result of the mathematical expression.

Input
Only one line contains A,S and B (1≤A,B≤104), S is either (+,−,∗,/).

Output
Print the result of the mathematical expression.

Examples
inputCopy
7+54
outputCopy
61
inputCopy
17*10
outputCopy
170
Note
For the dividing operation you should print the division without any fractions.


*/
#include<iostream>
using namespace std;
int main(){
 char s;
 long long a,b;
 cin>>a>>s>>b;
 if(s=='+'){
   cout<<a+b;}
 else if(s=='-'){
   cout<<a-b;}
 else if(s=='*'){
   cout<<a*b;}
 else {
   cout<<a/b;}

}
