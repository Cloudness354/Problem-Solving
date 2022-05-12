/*F. Digits Summation
time limit per test0.25 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.

Example
input
13 12
output
5
Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)

*/

#include <iostream>
using namespace std;
int main() {
  //variables
  long long n,m;
  //input
  cin>>n>>m;
//output
  cout<<(n%10)+(m%10);
}
