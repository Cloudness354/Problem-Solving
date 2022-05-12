/*B. Geometry
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Geometry is a very important field in mathematics. Circles, rectangles and triangles are fundamental forms of geometry, The figure below shows a rectangle with two circles of equal area and a right angled triangle.


If you have the width and height of the rectangle, can you calculate the area with the red color?

Knowing that π = 3.14159265359
Input
Only one line containing 2 integer numbers B,A (1 ≤ A,B ≤ 100) the width and the height of the rectangle.

Note that (B=2A)

Output
Print the area with red color.

The answer will be accepted if the difference between it and the jury's answer is ≤10−6.

It is recommended that you print more than 6 digits after the decimal point to avoid getting "Wrong Answer" verdict due to rounding.

Examples
inputCopy
6 3
outputCopy
1.931417
inputCopy
16 8
outputCopy
13.734518
*/
#include<iostream>
using namespace std;
int main()
{
cout <<fixed<<setprecision(6);
double pi= 3.14159265359;
double x=0.034154944;
int a,b;
cin>>a>>b;
cout<<a*b*x*pi;
}
/*#include<iostream>
#include<cmath>
#include<iomanip>
#define NeedForSpeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
  NeedForSpeed;
  double p=3.14159265359,b,a;
  cin>>b>>a;
  cout<<fixed<<setprecision(6)<<
  (a*b)/2-(p*((b/4)*(b/4)));


}*/
