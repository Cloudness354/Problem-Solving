/*A. Freelancer Work
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Abdelaleem works as a Front-End developer on Freelancer website. He gets N projects. Each project has a price P.

The site gets 20% of the price of each project, He completed the N projects and wanted to know the total profit he got, Can you help him with that?

Note that your answer must be an integer value

Input
Only one line containing two integer numbers N,P,(1 ≤ N ≤ 100, 1 ≤ P ≤ 5*104) the number of projects and the price of any project respectively.

Output
Print the total profit he got.

Examples
inputCopy
5 20
outputCopy
80
inputCopy
12 15
outputCopy
144
*/
#include <iostream>
using namespace std;
int main() {
  int n,p;
  cin>>n>>p;
  cout<<(n*p)*0.8;
}
