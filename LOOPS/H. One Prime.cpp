/*H. One Prime
time limit per test3 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number X (2 ≤ X ≤ 105).

Output
print "YES" if the number is prime and "NO" otherwise.

Examples


input
7

output
YES

input
15

output
NO

Note
First Example :

7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

Second Example :

15 not is prime because it is divisible by 3 ,5, so the answer is NO.

*/#include <iostream>
using namespace std;
int main() {
  int n,m;bool b=true;
  cin>>n;
  m=n/2;
  for(int i=2;i<=m;i++){
    if(n%i==0)
    {cout<<"NO";b=false;break;}
  }
  if(b){cout<<"YES";}
 }
/*

#include <iostream>
using namespace std;
int main() {
  int n,m;bool b=true;
  cin>>n;
  m=n/2;
  for(int i=2;i<=m/2;i++){
    if(n%i==0)
    {cout<<"NO";b=false;break;}
  }
  if(b){cout<<"YES";}
 }






#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long x,a=0;
	cin>>x;
  if ((x<2||x%2==0 )&& x!=2){cout<<"NO"<<"\n";}
  else{int d;
  for(d=3;d<=sqrt(x);d+=2){if(x%d==0){a=1;break;}}
  if(a==1){cout<<"NO"<<"\n";}
	else {cout<<"YES"<<"\n";} }


}







#include<iostream>

using namespace std;

int main()

{

long long N;

cin>>N;

long long Y=2;

bool z= true;

while(Y*Y<=N){

if(N%Y==0){ z= false;

break;}

Y++;

}

if (z==true){cout<<"YES";

	}

	else{cout<<"NO";}

return 0;

}

*/
