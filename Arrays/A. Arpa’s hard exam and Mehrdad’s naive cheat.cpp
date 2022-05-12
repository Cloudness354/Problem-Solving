/*A. Arpa’s hard exam and Mehrdad’s naive cheat
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There exists an island called Arpa’s land, some beautiful girls live there, as ugly ones do.

Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given n, print the last digit of 1378n.


Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.

Input
The single line of input contains one integer n (0  ≤  n  ≤  109).

Output
Print single integer — the last digit of 1378n.

Examples
inputCopy
1
outputCopy
8
inputCopy
2
outputCopy
4
Note
In the first example, last digit of 13781 = 1378 is 8.

In the second example, last digit of 13782 = 1378·1378 = 1898884 is 4.*/
#include <iostream>
using namespace std;
#define ll long long
ll n,p;
int main() {
  cin>>n;
  if(n==0)cout<<"1";
  else if(n>0){
    int units[]={8,4,2,6};
    n=(n-1)%4;
    cout<<units[n];
  }

}
