/*W. Shape3
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".

*/
#include <iostream>
using namespace std;
int main()
{
   int i,j,n;
    cin >> n;
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
    cout<<endl;
   }
   for(i=n-1;i>=0;i--)
   {
     for(j=1;j<=n-i-1;j++)
     cout<<" ";
     for(j=0;j<=2*i;j++)
       cout<<"*";
     cout<<endl;;
   }
}
