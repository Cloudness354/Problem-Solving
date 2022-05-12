/*B. Say Hello With C++
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

Example
inputCopy
programmer
outputCopy
Hello, programmer
inputCopy
Ahmed
outputCopy
Hello, Ahmed
inputCopy
Abdelaleem
outputCopy
Hello, Abdelaleem
*/
#include <iostream>
using namespace std;
int main() {
 string s;
 cin>>s;
 cout<<"Hello, "<<s;
}
