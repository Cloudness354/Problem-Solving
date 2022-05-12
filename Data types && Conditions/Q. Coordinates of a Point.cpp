/*Q. Coordinates of a Point
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.

Input
Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

Output
Print the answer to problem above.

Examples
inputCopy
4.5 -2.2
outputCopy
Q4
inputCopy
0.1 0.1
outputCopy
Q1
*/
#include <iostream>
using namespace std;
int main() {
  double n,m;
  cin>>n>>m;
  if(n==0&&m!=0){
    cout<<"Eixo Y";
  }
else if(n!=0&&m==0){
  cout<<"Eixo X";
}
else if(n>0&&m>0){
  cout<<"Q1";
}
else if(n>0&&m<0){
  cout<<"Q4";
}
else if(n<0&&m>0){
  cout<<"Q2";
}
else if(n<0&&m<0){
  cout<<"Q3";
}
else{
  cout<<"Origem";
}
}
