/*A. The Contest
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pasha is participating in a contest on one well-known website. This time he wants to win the contest and will do anything to get to the first place!

This contest consists of n problems, and Pasha solves ith problem in ai time units (his solutions are always correct). At any moment of time he can be thinking about a solution to only one of the problems (that is, he cannot be solving two problems at the same time). The time Pasha spends to send his solutions is negligible. Pasha can send any number of solutions at the same moment.

Unfortunately, there are too many participants, and the website is not always working. Pasha received the information that the website will be working only during m time periods, jth period is represented by its starting moment lj and ending moment rj. Of course, Pasha can send his solution only when the website is working. In other words, Pasha can send his solution at some moment T iff there exists a period x such that lx ≤ T ≤ rx.

Pasha wants to know his best possible result. We need to tell him the minimal moment of time by which he is able to have solutions to all problems submitted, if he acts optimally, or say that it's impossible no matter how Pasha solves the problems.

Input
The first line contains one integer n (1 ≤ n ≤ 1000) — the number of problems. The second line contains n integers ai (1 ≤ ai ≤ 105) — the time Pasha needs to solve ith problem.

The third line contains one integer m (0 ≤ m ≤ 1000) — the number of periods of time when the website is working. Next m lines represent these periods. jth line contains two numbers lj and rj (1 ≤ lj < rj ≤ 105) — the starting and the ending moment of jth period.

It is guaranteed that the periods are not intersecting and are given in chronological order, so for every j > 1 the condition lj > rj - 1 is met.

Output
If Pasha can solve and submit all the problems before the end of the contest, print the minimal moment of time by which he can have all the solutions submitted.

Otherwise print "-1" (without brackets).

Examples
inputCopy
2
3 4
2
1 4
7 9
outputCopy
7
inputCopy
1
5
1
1 4
outputCopy
-1
inputCopy
1
5
1
1 5
outputCopy
5
Note
In the first example Pasha can act like this: he solves the second problem in 4 units of time and sends it immediately. Then he spends 3 time units to solve the first problem and sends it 7 time units after the contest starts, because at this moment the website starts working again.

In the second example Pasha invents the solution only after the website stops working for the last time.

In the third example Pasha sends the solution exactly at the end of the first period.

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,r,a,l,sum=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a;
sum+=a;
}
cin>>m;
for(int i=0;i<m;i++){
cin>>l>>r;
if(sum>=l&&sum<=r){
cout<<sum;
return 0;
}
else if(l>=sum){
cout<<l;
return 0;
}
}
cout<<-1;}
