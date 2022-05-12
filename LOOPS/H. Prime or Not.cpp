/*H. Prime Or Not
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print 2 lines that contain the following respectively:

Print N in a reversed order and not leading zeroes.
If N is a palindrome number print "YES" otherwise, print "NO.
Note:

A palindrome number is a number that reads the same forward or backward.

For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

A leading zero is any 0 digit that comes before the first nonzero digit in a number for example : numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .

Input
Only one line containing a number N (1≤N≤107).

Output
Print the answer required above.

Examples

input
12121
output
12121
YES


input
160
output
61
NO*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
    #endif
	long long t,x,a=0;
  cin>>t;
while(t--){
   a=0;
	cin>>x;
  if ((x<2||x%2==0 )&& x!=2){cout<<"Not"<<"\n";}
  else{int d;
  for(d=3;d<=sqrt(x);d+=2){
    if(x%d==0){
      a=1;break;
      }}
  if(a==1){cout<<"Not"<<"\n";}
	else {cout<<"Prime"<<"\n";} }


}}
