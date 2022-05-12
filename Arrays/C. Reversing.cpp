/*C. Reversing
time limit per test1 second
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
inputCopy
4
5 1 3 2
outputCopy
2 3 1 5
inputCopy
5
1 2 3 4 5
outputCopy
5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main(){
	int n,min=0,p=0;
  cin>>n;
  int arr[n],arr2[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
		arr2[(n-1)-i]=arr[i];
	}
    for(int i=0;i<n;i++){
      cout<<arr2[i]<<" ";
    }

}
