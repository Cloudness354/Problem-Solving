/*D. implement it or not !
time limit per test2 s.
memory limit per test256 MB
inputstandard input
outputstandard output
One day three best friends Shady, Youssef and abdo decided to form a team and take part in ECPC programming contests. They have many several problems during the contests. before the contest, they decided that they will implement the code of a problem if at least two of them are agree to implement the solution. Otherwise, they won't write the problem's solution.

there are N problems for the participants. Help the friends find the number of problems for which they will implement a solution.

Input
The first input line contains a single integer n (1≤n≤1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Shady is sure about the problem's solution, otherwise he isn't sure. The second number shows Youssef's view on the solution, the third number shows abdo 's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples
inputCopy
3
1 1 0
1 1 1
1 0 0
outputCopy
2
inputCopy
2
1 0 0
0 1 1
outputCopy
1
Note
In the first sample Shady and Youssef are sure that they know how to solve the first problem and all three of them know how to solve the second problem. That means that they will write solutions for these problems. Only Shady is sure about the solution for the third problem, but that isn't enough, so the friends won't take it.

In the second sample the friends will only implement the second problem, as Youssef and abdo are sure about the solution.

*/

#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int problems(int *y,int n){
 	int a;
   a=0;
  for(int i=0;i<n;i++){
  if(y[i]==1)a++;}
  if(a>1)return 1;else return 0;}
int main(){
  VENOM;
  int m,n,poor=0;
  cin>>n;
  m=3;
 int y[n];
  while(n--){
    for(int i=0;i<m;i++){cin>>y[i];}
  if(problems(y,m)){poor++;}
}cout<<poor;}
