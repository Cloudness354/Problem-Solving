/*C. Prime Function
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Given a number X. Implement a function that determines if the number is prime or not.

print prime or not in main function

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself. The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.

Input
First line contains a number T (1≤T≤100) number of test cases.

Next T lines will contain a number X (0≤X≤106).

Output
For each test case print a single line contains "Prime" or "Not" according to the required above.

Example
inputCopy
3
8
51
7
outputCopy
Not
Not
Prime
*/

#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int primo(int x){
 	int a=0;


  if ((x<2||x%2==0 )&& x!=2){return 0;}
  else{int d;
  for(d=3;d<=sqrt(x);d+=2){if(x%d==0){a=1;break;}}
  if(a==1){return 0;}
	else return 1; }

}
int main(){
  VENOM;
  int n,y;
  cin>>n;
  while(n--){
    cin>>y;
    if(primo(y))cout<<"Prime\n";
    else cout<<"Not\n";

  }
}
