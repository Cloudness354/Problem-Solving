/*A. Lucky Ticket
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers very much. Everybody knows that lucky numbers are positive integers whose decimal record contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya loves tickets very much. As we know, each ticket has a number that is a positive integer. Its length equals n (n is always even). Petya calls a ticket lucky if the ticket's number is a lucky number and the sum of digits in the first half (the sum of the first n / 2 digits) equals the sum of digits in the second half (the sum of the last n / 2 digits). Check if the given ticket is lucky.

Input
The first line contains an even integer n (2 ≤ n ≤ 50) — the length of the ticket number that needs to be checked. The second line contains an integer whose length equals exactly n — the ticket number. The number may contain leading zeros.

Output
On the first line print "YES" if the given ticket number is lucky. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
2
47
outputCopy
NO
inputCopy
4
4738
outputCopy
NO
inputCopy
4
4774
outputCopy
YES
Note
In the first sample the sum of digits in the first half does not equal the sum of digits in the second half (4 ≠ 7).

In the second sample the ticket number is not the lucky number.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,sum1=0,sum2=0;
cin>>n;
vector<char>s(n);
for(int i=0;i<n;i++)
  cin>>s[i];
for(int i=0;i<n;i++){
if(s[i]!='4'&&s[i]!='7'){
cout<<"NO";
return 0;
}
else{
 if(i<n/2)
  sum1+=(int)s[i];
else if(i>=n/2)
  sum2+=(int)s[i];
  }}
if(sum1==sum2)
  cout<<"YES";
else cout<<"NO";
}
