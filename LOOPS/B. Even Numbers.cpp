/*B. Even Numbers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
inputCopy
10
outputCopy
2
4
6
8
10
inputCopy
5
outputCopy
2
4
*/

#include <iostream>
using namespace std;
int main() {
  int n,i;
  cin>>n;
  if(n>=2){
    for(i=0;i<=n;i+=2){
      if(i%2==0&&i!=0){
      cout<<i<<"\n";
    }
  }
}else{
  cout<<-1;
}}
