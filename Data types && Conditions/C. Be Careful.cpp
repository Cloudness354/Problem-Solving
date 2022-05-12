/*C. Be Careful
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
We all know the Egyptian star, Mohamed Salah, the best player in the world right now.

He scored N goals at a rate of at most two goals per match.

Can you determine the minimum number of matches he played to score these goals?



Input
Only one line contains an integer number N (1≤N≤103).

Output
Print the minimum number of matches Mohamed Salah played.

Examples
inputCopy
4
outputCopy
2
inputCopy
5
outputCopy
3
*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
  int n;
  cin>>n;
  if(n%2==0){
  cout<<n/2;
  }
  else{
  cout<<((n)/2)+1;
  }
}
/*
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
  int n;
  cin>>n;
  if(n%2==0){cout<<n/2;}
  else{cout<<ceil(double(n)/2);}
}
*/
