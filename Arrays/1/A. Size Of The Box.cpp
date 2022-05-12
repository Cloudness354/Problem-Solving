/*A. Size Of The Box
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Coach Hussein has many boxes placed next to each others. Each box has a fixed size. Coach Hussein asked AbuOkail to tell him the size of the 3rd box from the right. You will be given the sizes as one positive number N, each digit in the number represents the ith box size.

Could you help him to determine the size of 3rd box from the right.

For more clarification please read the notes below.

Input
Only one line contains an integer number N where (111≤N≤1012−1), Each digit of this number is considered as a box size.

It's guarantee that each digit of number N is greater than 0.

Output
Print the size of the third box from the right.

Examples
inputCopy
12345
outputCopy
3
inputCopy
778899
outputCopy
8
Note
In the first example:

The size of the first box = 5,

The size of the second box = 4,

The Size of the third box = 3,

The Size of the fourth box = 2,

The size of the fifth box = 1.

So the answer is 3*/

#include <iostream>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
  long long n;
  cin>>n;
  long long arr[3];
  for(int i=0;i<3;i++){
    arr[i]=n%10;
    n=n/10;

  }
  cout<<arr[2];
}
/*Another Solution
#include <iostream>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  VENOM;
long long n;
  cin>>n;
  cout<<(((n/10)/10)%10);
}
  */
