/*D. Weather
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Shady.scof live in Germany, and he is very afraid of the temperature while going to work .. can you tell him what is the status of the weather is going to be in the next day to avoid being sick.

if it is under 0 that's mean it will be a cold day.

if it is greater than or equal to 0 and under 25 it will be a cool day...

otherwise, it will be a hot day

can you determine the status of the weather for him?

Input
Only one line contains an integer number N (−100≤N≤100), the weather temperature.

Output
the status of the next day.

Examples
inputCopy
-68
outputCopy
cold day
inputCopy
1
outputCopy
cool day
inputCopy
28
outputCopy
hot day
*/

#include <iostream>
using namespace std;
int main() {
 int m;
 cin>>m;
 if(m<0){
   cout<<"cold day";
 }
 else if(m>=0&&m<25){
   cout<<"cool day";
 }
  else{
    cout<<"hot day";
  }
}
