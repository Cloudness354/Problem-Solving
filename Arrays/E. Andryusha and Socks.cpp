/*E. Andryusha and Socks
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Andryusha is an orderly boy and likes to keep things in their place.

Today he faced a problem to put his socks in the wardrobe. He has n distinct pairs of socks which are initially in a bag. The pairs are numbered from 1 to n. Andryusha wants to put paired socks together and put them in the wardrobe. He takes the socks one by one from the bag, and for each sock he looks whether the pair of this sock has been already took out of the bag, or not. If not (that means the pair of this sock is still in the bag), he puts the current socks on the table in front of him. Otherwise, he puts both socks from the pair to the wardrobe.

Andryusha remembers the order in which he took the socks from the bag. Can you tell him what is the maximum number of socks that were on the table at the same time?

Input
The first line contains the single integer n (1 ≤ n ≤ 105) — the number of sock pairs.

The second line contains 2n integers x1, x2, ..., x2n (1 ≤ xi ≤ n), which describe the order in which Andryusha took the socks from the bag. More precisely, xi means that the i-th sock Andryusha took out was from pair xi.

It is guaranteed that Andryusha took exactly two socks of each pair.

Output
Print single integer — the maximum number of socks that were on the table at the same time.

Examples
input
1
1 1
output
1
input
3
2 1 1 3 2 3
output
2
Note
In the first example Andryusha took a sock from the first pair and put it on the table. Then he took the next sock which is from the first pair as well, so he immediately puts both socks to the wardrobe. Thus, at most one sock was on the table at the same time.

In the second example Andryusha behaved as follows:

Initially the table was empty, he took out a sock from pair 2 and put it on the table.
Sock (2) was on the table. Andryusha took out a sock from pair 1 and put it on the table.
Socks (1, 2) were on the table. Andryusha took out a sock from pair 1, and put this pair into the wardrobe.
Sock (2) was on the table. Andryusha took out a sock from pair 3 and put it on the table.
Socks (2, 3) were on the table. Andryusha took out a sock from pair 2, and put this pair into the wardrobe.
Sock (3) was on the table. Andryusha took out a sock from pair 3 and put this pair into the wardrobe.
Thus, at most two socks were on the table at the same time.*/
#include<iostream>
//Define is to change name any syntax in c++ and this define will make input and output fast than usual
#define NeedForSpeed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;int pairs[100000];
int main(){
  NeedForSpeed;

  int na,n,table=0,max=0;
  cin>>na;

  for(int i=0;i<na*2;i++){
    cin>>n;
    if(pairs[n]!=1){
      pairs[n]++;
      table++;
    }
    else{
      pairs[n]--;
      table--;}
    if(max<table){
      max=table;

  }}
  cout<<max;
}
