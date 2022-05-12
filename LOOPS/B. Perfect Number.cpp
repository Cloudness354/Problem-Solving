/*B. Perfect Number
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
We consider a positive integer perfect, if and only if the sum of its digits is exactly 10. Given a positive integer k, your task is to find the k-th smallest perfect positive integer.

Input
A single line with a positive integer k (1≤k≤10000).

Output
A single number, denoting the k-th smallest perfect integer.

Examples
inputCopy
1
outputCopy
19
inputCopy
2
outputCopy
28
Note
The first perfect integer is 19 and the second one is 28.

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	cin >> k;
	int sum = 0;
	for (int i = 19; ; i++)
	{
		int j = i;
		while (j)
		{
			sum += j % 10;
			j = j / 10;
		}

		if (sum == 10)
		{
			k--;
		}
		if (k == 0)
		{
			cout << i << endl;
			break;
		}
		sum = 0;

	}

}
