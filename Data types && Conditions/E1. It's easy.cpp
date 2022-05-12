/*E1. It's easy
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Shady has an integer number N and he wants from you to determine if he likes this number or not.

You should know that Shady hates all odd numbers except for the smallest positive one.

Your task to print "YES" if Shady likes number N, otherwise print "NO".

Input
Only one line contains an integer number N (0≤N≤1014).

Output
Print the answer.

Examples
inputCopy
8
outputCopy
YES
inputCopy
7
outputCopy
NO
inputCopy
1
outputCopy
YES

*/
#include <iostream>
using namespace std;
int main() {
 long long m;
 cin>>m;
 if(m%2==0||m==1){
   cout<<"YES";
 }
 else{
   cout<<"NO";
 }
}
