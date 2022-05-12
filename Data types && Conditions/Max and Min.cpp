/*K. Max and Min
time limit per test0.25 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
inputCopy
1 2 3
outputCopy
1 3
inputCopy
-1 -2 -3
outputCopy
-3 -1
inputCopy
10 20 -5
outputCopy
-5 20*/
#include<iostream>
using namespace std;
int main()
{
int A ,B,C ;
cin>>A>>B>>C;

    if (A<B && A<C)
    {
        cout<< A<<" " ;
    }
    else if ( A==B &&A<C &&B<C)
    {
        cout<<A <<" ";
    }

 if (B<A && B<C)
    cout<< B<<" " ;
     else if ( B==C &&B<A &&C<A)
    {
        cout<<B <<" ";
    }

 if (C<A && C<B)
    cout<< C <<" ";
     else if ( A==C &&A<B &&C<B)
    {
        cout<<C <<" ";
    }
 if (B>A && B>C)
    cout<< B;
        else if ( B==C &&B>A &&C>A)
    {
        cout<<B ;
    }
 if (C>A && C>B)
    cout<< C ;
     else if ( A==C &&A>B &&C>B)
    {
        cout<<C;
    }
 if (A>B && A>C)
    cout<< A ;
    else if ( A==B &&A>C &&B>C)
    {
        cout<<A;
    }

  else if(A==B && A==C && B==C)
 {cout <<A<<" "<<B ;}
            return 0;
    }
/*Another Solution

#include <iostream>
using namespace std;
int main() {
  long n,m,o;
  cin>>n>>m>>o;
  cout<<min(min(n,m),o)
      <<" "
      <<max(max(n,m),o);

}*/
