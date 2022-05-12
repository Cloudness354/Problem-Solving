/*B. Regular Bracket Sequence
time limit per test5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A bracket sequence is called regular if it is possible to obtain correct arithmetic expression by inserting characters «+» and «1» into this sequence. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

One day Johnny got bracket sequence. He decided to remove some of the brackets from it in order to obtain a regular bracket sequence. What is the maximum length of a regular bracket sequence which can be obtained?

Input
Input consists of a single line with non-empty string of «(» and «)» characters. Its length does not exceed 106.

Output
Output the maximum possible length of a regular bracket sequence.

Examples
inputCopy
(()))(
outputCopy
4
inputCopy
((()())
outputCopy
6
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	int b=0, c=0;
	cin >> a;
	b = a.size();
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '(') {
			c++;
		} else if (a[i] == ')') {
			c--;
			if (c < 0) {
				b--;
				c = 0;
			}
		}
	}
	cout << b - c;
}
