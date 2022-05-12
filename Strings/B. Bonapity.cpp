/*B. Bonapity
time limit per test2 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
A group of junior programmers are attending an advanced programming camp, where they learn very difficult algorithms and programming techniques! Near the center in which the camp is held, is a professional bakery which makes tasty pastries and pizza. It is called 'Bonabity'... or 'Ponapety'... or 'Ponabity'... Actually no one knows how to spell this name in English, even the bakery owner doesn't, and the legends say that Arabs always confuse between 'b' and 'p', and also between 'i' and 'e', so 'b' for them is just the same as 'p', and 'i' for them is just the same as 'e', they also don't care about letters' cases (uppercase and lowercase for a certain letter are similar). For example, the words 'Ponabity' and 'bonabety' are considered the same. You are given two words including only upper case and lower case English letters, and you have to determine whether the two words are similar in Arabic.

Input
The input consists of several test cases. The first line of the input contains a single integer T, the number of the test cases. Each of the following T lines represents a test case and contains two space-separated strings (each one consists of only upper case and lower case English letters and its length will not exceed 100 characters).

Output
For each test case print a single line: 'Yes' if the words are similar in Arabic and 'No' otherwise.

Example
inputCopy
4
Ponabity bonabety
barbie barpee
abcabc apcap
abc apcd
outputCopy
Yes
Yes
No
No
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	string str1, str2;
	int t;
	cin >> t;
	while (t--) {
		cin >> str1 >> str2;
		if (str1.size() != str2.size())
      cout << "No" << endl;
		else {
			bool similar = true;
			for (int i = 0; i < str1.size() && similar; i++) {
				if (!(tolower(str1[i]) == tolower(str2[i]) || tolower(str1[i]) == 'p' && tolower(str2[i]) == 'b' || tolower(str1[i]) == 'b' && tolower(str2[i]) == 'p' || tolower(str1[i]) == 'i' && tolower(str2[i]) == 'e' || tolower(str1[i]) == 'e' && tolower(str2[i]) == 'i'))
          similar = false;
			}
			cout << ( (similar) ? "Yes" : "No") << endl;
		}

	}
}
