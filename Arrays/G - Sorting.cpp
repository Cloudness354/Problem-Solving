/*G. Sorting
time limit per test1 s.
memory limit per test64 MB
inputstandard input
outputstandard output
Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:

Don't use built-in-functions.
try to solve it with bubble sort algorithm or Selection Sort.
for more information watch - (Selection Sort) : https://youtu.be/EnodMqJuQEo.
for more information watch - (Bubble Sort) : https://youtu.be/pIEGHDZHOCk.
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
2 3 5 7 */
#include<iostream>
using namespace std;
int main ()
{
   int i,n, j,temp;
   cin>>n;
   int a[n];
   for(i = 0; i<n; i++) {
      cin>>a[i];
   }
for(i = 0; i<n; i++) {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
for(i = 0; i<n; i++) {
   cout <<a[i]<<" ";
}
return 0;
}
