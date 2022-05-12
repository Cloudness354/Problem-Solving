/*E. Area of a Circle
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.

Example
input
2.00
output
12.566370612
Note
* Use the data type double for this problem.

** Use setprecision(9) to print 9 digits after decimal point.

*** you can use function setprecision that are in #include<iomanip> library for Example :

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     // your code.
}
*/

#include <iostream>
using namespace std;
int main() {
  //Declaring Variables
  double p=3.141592653, r;
  //input
  cin>>r;
  //output
  cout<<setprecision(12)<<p*pow(r,2);

}
