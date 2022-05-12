/*F. Max element Function
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Give a number N, and N numbers To function and return the maximum number in these N numbers.

Input
First line contains a number N (1≤N≤103).

Second line contains N numbers Xi (0≤Xi≤109).

Output
Print the maximum number.

Example
inputCopy
5
1 8 5 7 5
outputCopy
8*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int mxn(int y,int &mx){
  if(y>mx){mx=y;}
  return mx;
}
int main(){
  VENOM;
  int n,y,mx=0;
  cin>>n;
  while(n--){
    cin>>y;mxn(y,mx);
  }cout<<mx;
}
