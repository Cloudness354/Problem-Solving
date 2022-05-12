/*I. The Month
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N. Print the the month associated to that number.

Note: Only the first letter should be capital letter.

Input
Only One line containing a number N (1 ≤ N ≤ 12)

Output
Print the the month associated to that number N.

Example
inputCopy
1
outputCopy
January
*/
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;cin>>n;
  if(n==1){cout<<"January";}
  else if(n==2){cout<<"February";}
  else if(n==3){cout<<"March";}
  else if(n==4){cout<<"April";}
  else if(n==5){cout<<"May";}
  else if(n==6){cout<<"June";}
  else if(n==7){cout<<"July";}
  else if(n==8){cout<<"August";}
  else if(n==9){cout<<"September";}
  else if(n==10){cout<<"October";}
  else if(n==11){cout<<"November";}
  else if(n==12){cout<<"December";}
}
