/*D. Difference
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
input
1 2 3 4
output
Difference = -10
input
2 3 4 5
output
Difference = -14
input
4 5 2 3
output
Difference = 14*/

#include <iostream>
using namespace std;
int main() {
//Declaring Variables
 long long a,b,c,d;
 //input
 cin>>a>>b>>c>>d;
 //Output
 cout<<"Difference = "<<(a*b)-(c*d);

}
