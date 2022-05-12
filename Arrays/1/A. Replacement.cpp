/*A. Replacement
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2≤N≤1000) number of elements.

Second line contains N numbers (-105 ≤ Ai ≤ 105).

Output
Print the array after the replacement and it's values separated by space.

Example
inputCopy
5
1 -2 0 3 4
outputCopy
1 2 0 1 1
inputCopy
9
-1 -5 2 3 100 -100 100000 0 -100000
outputCopy
2 2 1 1 1 2 1 0 2
*/
#include<iostream>
using namespace std;

int main(){
	int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>0){
			arr[i]=1;
		}
    else if(arr[i]<0){
			arr[i]=2;
		}
    cout<<arr[i]<<" ";
  }
}/*Anouther Solution
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    long long A[N];
    for (int i =0;i<N;i++){
            if (N>=2&&N<=1000){
            cin>>A[N];
            if (A[N]>0){
                    A[N]=1;
            }else if (A[N]<0){
                A[N]=2;
            }else if (A[N]==0){
                A[N]=0;
            }
            cout<<A[N]<<" ";
    }
    }
    return 0;
}*/
