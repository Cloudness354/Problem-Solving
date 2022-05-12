/*F. Matrix
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
inputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
outputCopy
22*/
#include<iostream>
#include <cmath>
using namespace std;

int main(){
	int n,sumn=0,summ=0;
  cin>>n;
  int mat[n][n];
  for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			cin>>mat[i][k];
		}}

  for(int i=0;i<n;i++){
    summ+=mat[i][i];
  }
  for(int i=n-1;i>=0;i--){
		sumn+=mat[i][(n-1)-i];
	}
  cout<<abs(summ-sumn);
}
