/*G. Summation from 1 to N
time limit per test0.25 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

.∑i=1Ni
Input
Only one line containing a number N (1≤N≤109)
Output
Print the summation of the numbers that are between 1 and N (inclusive).

Examples
inputCopy
3
outputCopy
6
inputCopy
10
outputCopy
55
Note
First Example :

the numbers between 1 and 3 are 1,2,3 .

So the answer is: (1 + 2 + 3 = 6)

Second Example :

the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)

*/
#include <iostream>
using namespace std;
int main() {
  //variables
  long long l,n=0;
//input
  cin>>l;
//For loop to sum from 1 to n
  for(int i=1;i<=l;i++){n+=i;}
//output
  cout<<n;
}
