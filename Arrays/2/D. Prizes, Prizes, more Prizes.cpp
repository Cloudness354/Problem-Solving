/*D. Prizes, Prizes, more Prizes
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya, like many others, likes to participate in a variety of sweepstakes and lotteries. Now he collects wrappings from a famous chocolate bar "Jupiter". According to the sweepstake rules, each wrapping has an integer written on it — the number of points that the participant adds to his score as he buys the bar. After a participant earns a certain number of points, he can come to the prize distribution center and exchange the points for prizes. When somebody takes a prize, the prize's cost is simply subtracted from the number of his points.

Vasya didn't only bought the bars, he also kept a record of how many points each wrapping cost. Also, he remembers that he always stucks to the greedy strategy — as soon as he could take at least one prize, he went to the prize distribution centre and exchanged the points for prizes. Moreover, if he could choose between multiple prizes, he chose the most expensive one. If after an exchange Vasya had enough points left to get at least one more prize, then he continued to exchange points.

The sweepstake has the following prizes (the prizes are sorted by increasing of their cost):

a mug (costs a points),
a towel (costs b points),
a bag (costs c points),
a bicycle (costs d points),
a car (costs e points).
Now Vasya wants to recollect what prizes he has received. You know sequence p1, p2, ..., pn, where pi is the number of points Vasya got for the i-th bar. The sequence of points is given in the chronological order. You also know numbers a, b, c, d, e. Your task is to find, how many prizes Vasya received, what prizes they are and how many points he's got left after all operations are completed.

Input
The first line contains a single integer n (1 ≤ n ≤ 50) — the number of chocolate bar wrappings that brought points to Vasya. The second line contains space-separated integers p1, p2, ..., pn (1 ≤ pi ≤ 109). The third line contains 5 integers a, b, c, d, e (1 ≤ a < b < c < d < e ≤ 109) — the prizes' costs.

Output
Print on the first line 5 integers, separated by a space — the number of mugs, towels, bags, bicycles and cars that Vasya has got, respectively. On the second line print a single integer — the number of points Vasya will have left after all operations of exchange are completed.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.

Examples
inputCopy
3
3 10 4
2 4 10 15 20
outputCopy
1 1 1 0 0
1
inputCopy
4
10 4 39 2
3 5 10 11 12
outputCopy
3 0 1 0 3
0
Note
In the first sample Vasya gets 3 points after eating the first chocolate bar. Then he exchanges 2 points and gets a mug. Vasya wins a bag after eating the second chocolate bar. Then he wins a towel after eating the third chocolate bar. After all chocolate bars 3 - 2 + 10 - 10 + 4 - 4 = 1 points remains.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;
cin>>n;
int a[50];
for(int i=0;i<n;i++)
  cin>>a[i];
int b[5];
for(int i=0;i<5;i++)
  cin>>b[i];
ll c[5];
for(int i=0;i<5;i++)
  c[i]=0;
ll score=0;
for(int i=0;i<n;i++){
  score += a[i];
  for(int k=4;k>=0;k--){
  ll x=score/b[k];
  c[k]+=x;
  score-=x*b[k];
  }}
  for(int i=0;i<5;i++){
  if(i>0)
    cout<<" ";cout<<c[i];
  }
  cout<<endl<<score;}
