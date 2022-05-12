/*B. Unusual Team
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
A lion, a mouse, and a beaver are one of the best teams at Animal University, and they have qualified to the ACM Arabella 2017 contest!

They want to choose their team name, and after many suggestions, they have reduced their options to two names: "FunkyMonkeys" and "WeWillEatYou".

They then created a poll on Facebook to help them with their final decision.

The results of the poll are now with Dr. Samer, and he will use the name with the highest votes to register the team. Can you help Dr. Samer to know which team name they will register with?

Input
The first line of input is T – the number of test cases.

The first line of each test case contains two integers a, b (1 ≤ a, b ≤ 100) - the number of votes for "FunkyMonkeys" and "WeWillEatYou" respectively.

Output
For each test case, output a single line containing "FunkyMonkeys" (without quotes), if that name received more points or tied with “WeWillEatYou”, otherwise output “WeWillEatYou”.

Example
inputCopy
2
15 20
70 70
outputCopy
WeWillEatYou
FunkyMonkeys
*/
#include <iostream>
using namespace std;
int main() {
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a >= b)cout << "FunkyMonkeys" << endl;
		else if (b > a)cout << "WeWillEatYou" << endl;
	}
}
