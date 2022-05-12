/*E. Number of matches
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
The fans of the Liverpool team know that Mohamed Salah played N matches, in each match he can score and he may not score.

For each match, you will be given an integer number X representing the goals Salah scored in it.

Your task is to print the maximum number of consecutive matches in which Salah scored goals, if he did not score in all N matches print "Bad Luck".

Input
Only two lines.

First line contains an integer number N (1≤N≤105) number of matches.

Second line contains N Lines each line contains an integer X (0≤X≤5) number of goals.

Output
Print the maximum number of consecutive matches in which Salah scored goals, if he did not score in all N matches print "Bad Luck".

Example
inputCopy
3
4
1
2
outputCopy
3
*/
#include <iostream>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
  int q=0,max=0,a=0,s,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s==0){
      a=0;q++;
    }
    else{a++;
    if(a>max){
      max=a;
    }
    }

  }
  if(q==n)cout<<"Bad Luck";
  else{cout<<max;}
}
/*#include <iostream>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
  int q=0,max=0,a=0,s,n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    a++;
    if(s==0){a=0;q++;}

    if(a>max)max=a;

  }
  if(q==n)cout<<"Bad Luck";
  else{cout<<max;}
}*/
