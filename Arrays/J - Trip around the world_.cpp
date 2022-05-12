/*J. Trip around the world
time limit per test4.0 s
memory limit per test256 megabytes
inputstandard input
outputstandard output
Now after Ragaey successfully hacked the bank. He thought he had enough money to make a trip around the world.

So he started searching on the internet for the tickets prices to the countries he wishes to visit.

But he found out there is too many countries he wants to visit and he doesn't know if he has enough money in his bank account to visit all of them so he decided to visit as many countries as he can so he asked you to create a program for him that

Reads how much money he has in his bank account.
Reads how many countries he wishes to visit.
Reads how much the ticket to each country costs.
Prints the maximum number of countries he can visit (possibly zero).
Input
The first line contains a single integer X (0<=X<=1015) represents the amount of money in his bank account.

The second line contains a single integer N (1<=N<=105) represents how many countries on Ragaey's list.

The next N lines each line will contain an integer Ti (1<=Ti<=1015) each represents a price of a ticket for some country.

Output
Print a single integer the maximum number of countries Ragaey can visit.

Examples
inputCopy
10000
4
7000
1000
3200
3800
outputCopy
3
inputCopy
1000
6
1400
200
300
350
500
150
outputCopy
4
Note
In the first example:

Ragaey should buy 3 tickets with prices 1000 , 3200 , 3800.

Int the second example:

Ragaey should buy 4 tickets with prices 200, 300 , 350 , 150.*/
#include <iostream>

using namespace std;
int main()
{
    long long X=0,q=0,pos=0,counter=0,z=0,sum=0,w=0,onetwo=0,imin=0;
    q=0;
    counter=0;
    long long N;
    cin>>X>>N;
    long long A[N];
    for (int i =0;i<N;i++){
            cin>>A[i];
    }
    for(int i = 0; i<N-1; i++) {
      imin = i;
      for(int j = i+1; j<N; j++)
         if(A[j] > A[imin])
            imin = j;
         swap(A[i], A[imin]);
   }
    for (int i=0;i<N;i++){
            sum+=A[i];
    }
q=sum;
    for(int i=0;i<N;i++){
             pos=i;
             if(q>X){
                 q=q-A[pos];
                 counter++;
             }
             }
cout<<N-counter<< endl;
    return 0;
}
/*Another solution
#include <bits/stdc++.h>//this includes all libraries in c++
using namespace std;

int main() {

	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
   //fast input and output
	long long n, x, i, j, count = 0;

	cin >> n;
	cin >> x;
	long long arr[x];
	for (long long i = 0; i < x; i++) {
		cin >> arr[i];
	}

	for (i = 0; i < x-1; i++) {
		for (j = i + 1; j < x; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}

	for (long long i = 1; i <= x; i++) {

		n = n - arr[i - 1];
		if (n >= 0) {
			count++;
		} else {
			break;
		}
	}

	cout << count;
	return 0;
}










*/
