/*H. Game
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

Rules of the game are very simple: at first number of rounds n is defined. In every round each of the players throws a cubical dice with distinct numbers from 1 to 6 written on its faces. Player, whose value after throwing the dice is greater, wins the round. In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, the result of the game is draw.

Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. implement a function that determines who will win.

Input
The first line of the input contains single integer n n (1≤n≤100) — the number of game rounds.

The next n lines contains rounds description. i-th of them contains pair of integers mi and ci (1≤mi,ci≤6) — values on dice upper face after Mishka's and Chris' throws in i-th round respectively.

Output
If Mishka is the winner of the game, print "Mishka" (without quotes) in the only line.

If Chris is the winner of the game, print "Chris" (without quotes) in the only line.

If the result of the game is draw, print "Friendship is magic!^^" (without quotes) in the only line.

Examples
inputCopy
3
3 5
2 1
4 2
outputCopy
Mishka
inputCopy
2
6 1
1 6
outputCopy
Friendship is magic!^^
inputCopy
3
1 5
3 3
2 2
outputCopy
Chris
Note
In the first sample case Mishka loses the first round, but wins second and third rounds and thus she is the winner of the game.

In the second sample case Mishka wins the first round, Chris wins the second round, and the game ends with draw with score 1:1.

In the third sample case Chris wins the first round, but there is no winner of the next two rounds. The winner of the game is Chris.

*/
#include <iostream>
#include <cmath>
#define VENOM ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void match(int a,int b,int &contM,int &contC)
{
  if(a>b){contM++;}else if(a<b){contC++;}
}
string Winner(int contM,int contC){
  if(contM>contC)return "Mishka";else if(contM<contC)return "Chris";
  else return "Friendship is magic!^^";
}
int main(){
  VENOM;
  int contC=0,contM=0,n,Chris,Mishka;
  cin>>n;
  while(n--){
  cin>>Mishka>>Chris;
  match(Mishka,Chris,contM,contC);}
 cout<<Winner(contM,contC);
}
