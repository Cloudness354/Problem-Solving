/*P. First digit !
time limit per test0.25 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
inputCopy
4569
outputCopy
EVEN
inputCopy
3569
outputCopy
ODD
Note
Second Example :

In 3569 the first digit is 3 and its ODD.*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  cout<<(((n/1000)%2==0) ?"EVEN":"ODD");//Instead of IF Condition search about it
}
