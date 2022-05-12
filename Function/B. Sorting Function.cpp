/*B. Sorting Function
time limit per test1 s.
memory limit per test64 MB
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Implement a function that takes the size of the array and its elements and returns the sorted array

Note:

Don't use built-in-functions.
try to solve it with bubble sort algorithm or Selection Sort.
for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
Input
First line contains a number N (0 < N < 103) number of elements.

Second line contains N numbers (−100≤Ai≤100).

Output
Print the numbers after sorting them.

Examples
inputCopy
3
3 1 2
outputCopy
1 2 3
inputCopy
4
5 2 7 3
outputCopy
2 3 5 7
*/

#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int *YousefSort(int n,int *arr){
 int swp,i,j;
  for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(arr[j] < arr[i]) {
         swp = arr[i];
         arr[i] = arr[j];
         arr[j] = swp;
      }
   }
}
  return arr;
}
int main()
{
  VENOM;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  YousefSort(n,arr);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
