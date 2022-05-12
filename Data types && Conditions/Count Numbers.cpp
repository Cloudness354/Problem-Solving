/*E2. Count Numbers
time limit per test0.25 s.
memory limit per test256 MB
inputstandard input
outputstandard output
In the last time, you knew that Shady hated all odd numbers except for the smallest positive one.

This time AhmadAmin will give you an integer number N and wants you to tell him how many numbers he likes it from 1 to N.

the explanation of the first case : from 1 to N he hates this Numbers {3,5} and he loves this number {1,2,4} then the answer is 3.

Help AhmadAmin to solve this problem.

Don't use a loop to solve this problem [TLE], think about formula or something like that

Input
Only one line contains an integer number N (1≤N≤109).

Output
Print the number of numbers which Shady likes.

Examples
inputCopy
5
outputCopy
3
inputCopy
1
outputCopy
1
inputCopy
2
outputCopy
2*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
double s,x;
cin>>n;
x=(n/2.0);
s=((n/2.0)+1);
if (n%2!=0){
    cout<<(long long)(ceil (x));
}else if (n%2==0){
    cout<<((long long)s);
}
    return 0;
}
