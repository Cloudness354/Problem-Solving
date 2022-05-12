/*L. Snack
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number X which donates a code and a real number Y which donates the amount of an item. According to the following table, Print the total price of buying Y amount of the product that has X code.

Code       Specification        price
1         Cachorro Quente       R$ 4.00
2          X-Salada             R$ 4.50
3          X-Bacon              R$ 5.00
4         Torrada Simples       R$ 2.00
5          Refrigerante         R$ 1.00

Input
Only one line containing X, Y (1 ≤ X ≤ 5, 1.0 ≤ Y ≤ 100.0)

Output
Print "Total: R " followed by the answer to the problem above, with 2 digits after the decimal point.

Examples
inputCopy
3 2.00
outputCopy
Total: R 10.00
inputCopy
2 3.00
outputCopy
Total: R 13.50
*/
#include <iostream>


using namespace std;
int main() {
  int x;
  double y,p;cin>>x>>y;
  if(x==1){p=4.00;}
  else if(x==2){p=4.50;}
  else if(x==3){p=5.00;}
  else if(x==4){p=2.00;}
  else if(x==5){p=1.50;}

  cout<<fixed<<setprecision(2)<<"Total: R "<<p*y;
}
