/*K. Sort Numbers
time limit per test0.25 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
inputCopy
3 -2 1
outputCopy
-2
1
3

3
-2
1
inputCopy
-2 10 0
outputCopy
-2
0
10

-2
10
0
*/

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int n,m,c,p;cin>>n>>m>>c;
  if((n>=m&&n<=c)||(n>=c&&n<=m)){p=n;}
  else if((m>=n&&m<=c)||(m>=c&&m<=n))
          {p=m;}
  else if((c>=n&&c<=m)||(c>=m&&c<=n))
          {p=c;}
  cout<<min(min(n,m),c)
  <<"\n"<<p<<"\n"
  <<max(max(n,m),c)
  <<"\n"<<"\n";
  cout<<n<<"\n"<<m<<"\n"<<c;

}
