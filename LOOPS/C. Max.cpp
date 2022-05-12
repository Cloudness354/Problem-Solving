/*E. Max
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.


input:=
5
1 8 5 7 5


output
8
*/

#include <iostream>
using namespace std;
int main() {
  long long l,n=0,c=0;
  cin>>l;
  for(int i=1;i<=l;i++){cin>>n;
  if(n>=c){c=n;}}
  cout<<c;

}

/*#include <iostream>
using namespace std;
int main()
{
    int s=0,t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++){
      cin>>n[i];
    }s=n[0];
    for(int i=0;i<t;i++){
      s=max(n[i],s);
    }cout<<s;
}*/
