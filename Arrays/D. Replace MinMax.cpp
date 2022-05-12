/*D. Replace MinMax
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
inputCopy
5
4 1 3 10 8
outputCopy
4 10 3 1 8
*/
#include<iostream>
using namespace std;

int main(){
	int n,max=0,min=0,pm=0,pn=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	for(int i=0;i<n;i++){
    if(max<arr[i]){
			max=arr[i];
			pm=i;
		}
    else if(min>arr[i]){
			min=arr[i];
			pn=i;
		}
  }arr[pm]=min;
	arr[pn]=max;
  for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
