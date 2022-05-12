/*A. Fibonacci Function
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Implement a function that takes one number and returns the n-th Fibonacci number.

Given a number N. Print the n-th Fibonacci number using function.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1≤N≤50).

Output
Print the Fibonacci number of N.

Examples
inputCopy
1
outputCopy
0
inputCopy
5
outputCopy
3
Note
For more information visit Fibonacci: https://www.mathsisfun.com/numbers/fibonacci-sequence.html.

*/

#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

long long fib(int n)
{
    long double ratio=1.61803398875
;
    long long fb=0;
    fb=(pow(ratio,n)-pow((1-ratio),n))/sqrt(5);
    return fb;
}



int main()
{
  VENOM;
int n;cin>>n;
  cout<<fib(n-1);
}
