/*H. Table
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N that is the code number for a book. Then, print the destination according to the following table:

61 -> Art of computer programming

71 -> Introduction to algorithm

11 -> Competitive programming

29 -> Programming challenges

Note: If the number isn't found in the above table, Print: Not found

Input
Only one line containing a number N (1 ≤ N ≤ 100)

Output
Print the book name corresponding to the number N, but if it doesn't exist print "Not found"

Examples
inputCopy
11
outputCopy
Competitive programming
inputCopy
23
outputCopy
Not found*/
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  if(n==61){
    cout<<"Art of computer programming";
  }
  else if(n==71){
    cout<<"Introduction to algorithm";
  }
  else if(n==11){
    cout<<"Competitive programming";}
  else if(n==29){cout<<"Programming challenges";
}
  else{
    cout<<"Not found";
  };

}
