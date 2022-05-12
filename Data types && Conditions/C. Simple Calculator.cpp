/*C. Simple Calculator
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Example
input
5 10
output
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
Note
Be careful with spaces.*/
#include<iostream>
using namespace std;
int main(){
//Declaring variables
 long long a,b;
//input
 cin>>a>>b;
//output
 cout<<a<<" + "<<b<<" = "<<a+b//sum
     <<"\n"//newline
     <<a<<" * "<<b<<" = "<<a*b//multiplication
     <<"\n"//newline
     <<a<<" - "<<b<<" = "<<a-b;//Difference

}
