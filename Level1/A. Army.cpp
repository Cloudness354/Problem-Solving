/*A. Army
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The Berland Armed Forces System consists of n ranks that are numbered using natural numbers from 1 to n, where 1 is the lowest rank and n is the highest rank.

One needs exactly di years to rise from rank i to rank i + 1. Reaching a certain rank i having not reached all the previous i - 1 ranks is impossible.

Vasya has just reached a new rank of a, but he dreams of holding the rank of b. Find for how many more years Vasya should serve in the army until he can finally realize his dream.

Input
The first input line contains an integer n (2 ≤ n ≤ 100). The second line contains n - 1 integers di (1 ≤ di ≤ 100). The third input line contains two integers a and b (1 ≤ a < b ≤ n). The numbers on the lines are space-separated.

Output
Print the single number which is the number of years that Vasya needs to rise from rank a to rank b.

Examples
inputCopy
3
5 6
1 2
outputCopy
5
inputCopy
3
5 6
1 3
outputCopy
11
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,sum=0;
cin>>n;
vector<int>d(n-1);
for(int i=0;i<n-1;i++)
  cin>>d[i];
cin>>a>>b;
if(a==b-1){
cout<<d[a-1];
return 0;
}
else{
for(int i=a-1;i<b-1;i++)
  sum+=d[i];
  }
  cout<<sum;}
/*#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,sum=0;
cin>>n;
vector<int>d(n-1);
for(int i=0;i<n-1;i++)
  cin>>d[i];
cin>>a>>b;
if(a==b-1){
cout<<d[a-1];
return 0;
}
else{
for(;a<b;a++)
  sum+=d[a-1];
}
cout<<sum;}
  */
