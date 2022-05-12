/*A. Timon and Pumbaa
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Timon has a candies and his friend, Pumbaa, has b candies, so Pumbaa asked Timon to tell him the value of a−b. However, Timon will tell him the value of a−b if the value is ≥0; otherwise, he will lie and say 0. Since it was a hard task for Timon, he's asking for your help.

Given two numbers a and b, find the answer.

Input
Only one line containing two numbers a,b (1≤a,b≤109).

Output
Print the answer as specified in the statement.

Examples
input
9 1
output
8
input
1 9
output
0*/#include <iostream>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  if((a-b)>=0){
    cout<<a-b;
  }else{cout<<0;}
  
}