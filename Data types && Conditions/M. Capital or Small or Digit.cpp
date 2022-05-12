/*M. Capital or Small or Digit
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

Examples
inputCopy
A
outputCopy
ALPHA
IS CAPITAL
inputCopy
9
outputCopy
IS DIGIT
inputCopy
a
outputCopy
ALPHA
IS SMALL
Note
** recommended to read this to know more about ASCII Code https://www.javatpoint.com/ascii.

*/
#include<iostream>
using namespace std;
int main(){
 char s;
 cin>>s;
 if(s>=65&&s<=90){
   cout<<"ALPHA\n"
       <<"IS CAPITAL";}
 else if(s>=97&&s<=122){
   cout<<"ALPHA\n"<<"IS SMALL";}
 else {
   cout<<"IS DIGIT";}
}//Capit   65  to 90      Smal     97  to  122
