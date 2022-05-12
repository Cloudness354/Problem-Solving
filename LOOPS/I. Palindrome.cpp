/*I. Palindrome
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

#include <iostream>
using namespace std;
int main() {
  int m,n,reverse=0,remainder;
  cin>>n;
  m=n;
  while(n!=0){
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
  }
  cout<<reverse<<"\n";
  if(reverse==m){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
 }
