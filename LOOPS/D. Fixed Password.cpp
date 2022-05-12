/*D. Fixed Password
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.

Input
The input contains several passwords.

Each line contains a number X (103 ≤ X ≤ 104 - 1).

Output
Print "Wrong" if the password is typed wrong otherwise, print "Correct" if the password is typed correctly.

input
2200
1020
1999
1000
9999

output
Wrong
Wrong
Correct*/


#include <iostream>
using namespace std;
int main() {
  int pass;
  while(pass!=1999){
  cin>>pass;
  if(pass!=1999){
    cout<<"Wrong"<<"\n";
  }
  else{
    cout<<"Correct";
    break;}}
 }

 /*#include <iostream>
using namespace std;
int main()
{int x;
  while(true) {
        cin >> x;
        if (x == 1999) {
            cout << "Correct"; break;
        }
        else {
            cout << "Wrong"<<"\n";

        }
    }*/
