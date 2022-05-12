/*J. Primes from 1 to n
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print all prime numbers between 1 and N inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number N (2≤N≤103).

Output
Print all prime numbers between 1 and N (inclusive) separated by a space.

Example
input
10
output
2 3 5 7 */
#include <iostream>
using namespace std;
int main() {
  int n,noPrime;
  cin>>n;
  for(int i = 2; i <= n; i++){
        noPrime = 0;
        for(int j = 2; j <= i/2; j++){
             if(i % j == 0){
                 noPrime = 1;
                 break;
             }
        }
        if(noPrime==0 && n!= 1)
            cout << i << " ";

 }}
