/*I. house
time limit per test2 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Valera the Horse is going to the party with friends. He has been following the fashion trends for a while, and he knows that it is very popular to wear all horseshoes of different color. Valera has got four horseshoes left from the last year, but maybe some of them have the same color. In this case he needs to go to the store and buy some few more horseshoes, not to lose face in front of his stylish comrades.

Fortunately, the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them. However, in order to save the money, he would like to spend as little money as possible, so you need to help Valera and determine what is the minimum number of horseshoes he needs to buy to wear four horseshoes of different colors to a party.

Input
The first line contains four space-separated integers s1,s2,s3,s4 (1≤s1,s2,s3,s4≤109) — the colors of horseshoes Valera has.

Consider all possible colors indexed with integers.

Output
Print a single integer — the minimum number of horseshoes Valera needs to buy.

Examples
inputCopy
1 7 3 3
outputCopy
1
inputCopy
7 7 7 7
outputCopy
3
*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int shoes(int *sho)
{int i,j,a=1;
    for (i = 1; i < 4; i++) {
        for (j = 0; j < i; j++) {
            if(sho[i] == sho[j]) break;
       }
       if(i == j) a++;
    }return a;
}
int main(){
  VENOM;
  int sho[4];
    int i,a;

    for (i = 0; i < 4; i++) {
        cin >> sho[i];

    }cout<<4-shoes(sho);

}
