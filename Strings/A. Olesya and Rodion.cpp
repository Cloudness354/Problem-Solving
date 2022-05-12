/*A. Olesya and Rodion
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t. Find some number that satisfies both of them.

Your task is: given the n and t print an integer strictly larger than zero consisting of n digits that is divisible by t. If such number doesn't exist, print  - 1.

Input
The single line contains two numbers, n and t (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) — the length of the number and the number it should be divisible by.

Output
Print one such positive number without leading zeroes, — the answer to the problem, or  - 1, if such number doesn't exist. If there are multiple possible answers, you are allowed to print any of them.

Examples
inputCopy
3 2
outputCopy
712
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,t;
string s;
cin>>n>>t;
if(t==10&&n<2)
  cout<<-1;
else if(t==10&&n>=2){
  for(int i=0;i<n-1;i++)
    s+=1+'0';
  s+=0+'0';
  cout<<s;
  }
  else{
    for(int i=0;i<n;i++)
      s+= t+'0';
    cout<<s;
    }
    return 0;}
