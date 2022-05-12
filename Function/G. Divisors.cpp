/*G. Divisors
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Given a number N. implement a function that prints all the divisors of N in ascending order.

Input
Only one line containing a number N (1≤N≤104).

Output
Print all positive divisors of N, one number per line.

Examples
inputCopy
6
outputCopy
1
2
3
6
inputCopy
7
outputCopy
1
7
inputCopy
4
outputCopy
1
2
4
Note
Divisor of Number is A number that divides the integer exactly (no remainder).

In other words the division works perfectly with no fractions or remainders involved.

Examples:

3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.
a divisor is also a factor of the original integer.

*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void printDivisors(int n,int &x,int *arr)
{x=0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            arr[x]=i;x++;}}
}
int main(){
  VENOM;
  int n,x;cin>>n;int arr[n];
    printDivisors(n,x,arr);
    for(int i=0;i<x;i++){cout<<arr[i]<<"\n";}
    return 0;

}
