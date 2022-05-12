/*B. Some Operations
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
You are given two integers X and Y.

Print the result of X+Y then print the result of X / Y. as integer division ( 5 / 2 = 2 not 2.5 ).

Input
Only one line contains two intdgers X and Y (1≤X,Y≤4∗109)
Output
Print the result of X+Y then print the result of X / Y.

Example
inputCopy
20 10
outputCopy
30
2
*/
#include <iostream>
using namespace std;
int main() {
 long long n,m;
cin>>n>>m;
cout<<n+m<<"\n"<<n/m;
}
