/*R. Age in Days
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.

Examples
inputCopy
400
outputCopy
1 years
1 months
5 days
inputCopy
800
outputCopy
2 years
2 months
10 days
inputCopy
30
outputCopy
0 years
1 months
0 days
*/
#include <iostream>
using namespace std;
int main() {
  long n,y,m,d;
  cin>>n;
  y=n/365;//getting the years
  n=n%365;//Removing the number of days that makes a year
  m=n/30;//getting the months
  d=n%30;//getting the days
  cout<<y<<" years\n"
      <<m<<" months\n"
      <<d<<" days\n";
}
