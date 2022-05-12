/*B. Lowest Number
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
inputCopy
3
1 2 3
outputCopy
1 1
inputCopy
5
5 6 2 3 2
outputCopy
2 3
*/
#include<iostream>
using namespace std;

int main(){
	int n,min=0,p=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
	}
		min=arr[0];
   for(int i=0;i<n;i++){
    if(min>arr[i]){
			min=arr[i];p=i+1;
		}
    else if(arr[0]==min){
			p=1;
		}
  }
  cout<<min<<" "<<p;
}
