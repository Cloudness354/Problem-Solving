/*J. The Best
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given 4 numbers A, B, C and D. Determine which number is the smallest one then print its symbol.

Note: If there are more than an answer print "Equal"

Input
Only one line containing 4 numbers A, B, C and D (0 ≤ A, B, C, D ≤ 1018)

Output
output the name of the winner "A", "B", "C" or "D", if there is more than an answer print "Equal" without quotes.

Examples
inputCopy
1 2 3 4
outputCopy
A
inputCopy
1 1 1 1
outputCopy
Equal
inputCopy
4 3 2 1
outputCopy
D
*/
#include <iostream>
#include <algorithm>


using namespace std;
int main() {
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a==min(min(b,d),c)||
  b==min(min(a,d),c)||
  c==min(min(b,d),a)||
  d==min(min(b,a),c)){cout<<"Equal";}
  else if(a==min(min(min(a,b),d),c)){cout<<"A";}
  else if(b==min(min(min(a,b),d),c)){cout<<"B";}
  else if(c==min(min(min(a,b),d),c)){cout<<"C";}
  else if(d==min(min(min(a,b),d),c)){cout<<"D";}

}
