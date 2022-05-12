/*N. Char
time limit per test0.25 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
inputCopy
a
outputCopy
A
inputCopy
A
outputCopy
a
*/
#include<iostream>
using namespace std;
int main(){
 char s;
 cin>>s;
 if(s<=90){
   cout<<char(s+32);}
 else
  cout<<char(s-32);
}//Capit   65  to 90      Smal     97  to  122
