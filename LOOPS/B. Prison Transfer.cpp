/*B. Prison Transfer
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The prison of your city has n prisoners. As the prison can't accommodate all of them, the city mayor has decided to transfer c of the prisoners to a prison located in another city.

For this reason, he made the n prisoners to stand in a line, with a number written on their chests. The number is the severity of the crime he/she has committed. The greater the number, the more severe his/her crime was.

Then, the mayor told you to choose the c prisoners, who will be transferred to the other prison. He also imposed two conditions. They are,

The chosen c prisoners has to form a contiguous segment of prisoners.
Any of the chosen prisoner's crime level should not be greater then t. Because, that will make the prisoner a severe criminal and the mayor doesn't want to take the risk of his running away during the transfer.
Find the number of ways you can choose the c prisoners.

Input
The first line of input will contain three space separated integers n (1 ≤ n ≤ 2·105), t (0 ≤ t ≤ 109) and c (1 ≤ c ≤ n). The next line will contain n space separated integers, the ith integer is the severity ith prisoner's crime. The value of crime severities will be non-negative and will not exceed 109.

Output
Print a single integer — the number of ways you can choose the c prisoners.

Examples
inputCopy
4 3 3
2 3 1 1
outputCopy
2
inputCopy
1 1 1
2
outputCopy
0
inputCopy
11 4 2
2 2 0 7 3 2 2 4 9 1 4
outputCopy
6
*/
#include <bits/stdc++.h>
using namespace std;
int main(){int n,c,t,i,d=0,b=0;
cin>>n>>c>>t;
while(n--){
cin>>i;
i<=c?d++:d=0;
if(d>=t)b++;
}
cout<<b;
}
