/*E. Round the mean
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two numbers A and B. Print the average of numbers from A to B inclusive rounded up to the nearest integer.

Input
Only one line containing two numbers A, B (1 ≤ A, B ≤ 100)

Output
Print the average rounded up to the nearest integer.

Examples
inputCopy
1 3
outputCopy
2
inputCopy
7 4
outputCopy
6
Note
First example:

The average of 1 and 3 is 2.0, and it will be rounded up to the nearest integer 2.

Second example:

The average of 7 and 4 is 5.5, and it will be rounded up to the nearest integer 6.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  cout<<round((double)(n+m)/2);
}
