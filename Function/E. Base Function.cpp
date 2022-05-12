/*E. Base Function
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Given a number N. Print the binary equivalent of the number N reversed.

Input
First line contains a number T number of test cases where (1≤T≤100).

Next T lines will contain a number N (0≤N≤107).

Output
For each test case print a single line contains the reversed binary equivalent of the given number.

Example
inputCopy
5
2
5
10
7
14
outputCopy
01
101
0101
111
0111
*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void converter(int &n,int &i,int *binaryNum){
  binaryNum[32]={0};
    i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;//+1;
    }
}
 int main(){
  VENOM;
  int n,t,i;cin>>t;
  int binaryNum[32];
  while(t--){
    cin>>n;
    converter(n,i,binaryNum);

  for (int j = 0; j <= i - 1; j++)
        cout << binaryNum[j];
  cout<<"\n";
}}
