/*A. An abandoned sentiment from past
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A few years ago, Hitagi encountered a giant crab, who stole the whole of her body weight. Ever since, she tried to avoid contact with others, for fear that this secret might be noticed.

To get rid of the oddity and recover her weight, a special integer sequence is needed. Hitagi's sequence has been broken for a long time, but now Kaiki provides an opportunity.

Hitagi's sequence a has a length of n. Lost elements in it are denoted by zeros. Kaiki provides another sequence b, whose length k equals the number of lost elements in a (i.e. the number of zeros). Hitagi is to replace each zero in a with an element from b so that each element in b should be used exactly once. Hitagi knows, however, that, apart from 0, no integer occurs in a and b more than once in total.

If the resulting sequence is not an increasing sequence, then it has the power to recover Hitagi from the oddity. You are to determine whether this is possible, or Kaiki's sequence is just another fake. In other words, you should detect whether it is possible to replace each zero in a with an integer from b so that each integer from b is used exactly once, and the resulting sequence is not increasing.

Input
The first line of input contains two space-separated positive integers n (2 ≤ n ≤ 100) and k (1 ≤ k ≤ n) — the lengths of sequence a and b respectively.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 200) — Hitagi's broken sequence with exactly k zero elements.

The third line contains k space-separated integers b1, b2, ..., bk (1 ≤ bi ≤ 200) — the elements to fill into Hitagi's sequence.

Input guarantees that apart from 0, no integer occurs in a and b more than once in total.

Output
Output "Yes" if it's possible to replace zeros in a with elements in b and make the resulting sequence not increasing, and "No" otherwise.

Examples
inputCopy
4 2
11 0 0 14
5 4
outputCopy
Yes
inputCopy
6 1
2 3 0 8 9 10
5
outputCopy
No
inputCopy
4 1
8 94 0 4
89
outputCopy
Yes
inputCopy
7 7
0 0 0 0 0 0 0
1 2 3 4 5 6 7
outputCopy
Yes
Note
In the first sample:

Sequence a is 11, 0, 0, 14.
Two of the elements are lost, and the candidates in b are 5 and 4.
There are two possible resulting sequences: 11, 5, 4, 14 and 11, 4, 5, 14, both of which fulfill the requirements. Thus the answer is "Yes".
In the second sample, the only possible resulting sequence is 2, 3, 5, 8, 9, 10, which is an increasing sequence and therefore invalid.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int *a=new int[n],*b=new int[k];
for(int i=0;i<n;i++)
  cin>>a[i];
for(int i=0;i<k;i++)
  cin>>b[i];
sort(b,b+k);
k--;
for(int i=0;i<n;i++){
	if(a[i]==0)
    a[i]=b[k--];
}
string s="No";
for(int i=0;i<n-1;i++){
	if(a[i]>=a[i+1]){
  s="Yes";break;}
}
cout<<s;
a=NULL;b=NULL;
delete [] a;
delete [] b;
}
