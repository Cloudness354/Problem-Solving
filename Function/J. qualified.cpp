/*J. qualified?
time limit per test3 s.
memory limit per test256 MB
inputstandard input
outputstandard output
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n≥k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1≤k≤n≤50) separated by a single space.

The second line contains n space-separated integers a1,a2,…,an (0≤ai≤100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n−1 the following condition is fulfilled: ai≥ai+1).

Output
Output the number of participants who advance to the next round.

Examples
inputCopy
8 5
10 9 8 7 7 7 5 5
outputCopy
6
inputCopy
4 2
0 0 0 0
outputCopy
0
Note
In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

In the second example nobody got a positive score.*/

#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
/*wrong answer
int parti(int *arr,int n,int k)
{int cont=0;if(k==0){for(int i=0;i<n;i++)if(arr[i]>0)cont++;return cont;}else{
 if(arr[k-1]>k){
  for(int i=k-1;i<n;i++){
    if(arr[i]==arr[i+1])cont++;
    else break;}return k+cont;}

  else{
    for(int i=k-1;i>0;i--){
      if(arr[i]>k)cont++;}return cont;
}}
}*/

int patri(int n,int k,int *a){
int sum=0;
		for(int i=0;i<n;i++){
			if(a[i]==0)continue;
			if(a[i]>=a[k-1]){
				sum++;
			}
		}return sum;
}
int main(){
  VENOM;
	long n,k=0,m;
  cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		cout<<patri(n,k,a);
	}
