/*J. Danny and Math
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Danny Phantom centers on the life and adventures of Daniel "Danny" Fenton, a 14-year-old boy living in the small town of Amity Park. He lives with his ghost-hunting parents, Maddie and Jack, and his overprotective but caring 16-year-old sister, Jasmine ("Jazz" for short). Upon pressure from his two best friends, Samantha "Sam" Manson and Tucker Foley, Danny decides to explore the Ghost Portal created by his parents in their attempt to bridge the real world and the Ghost Zone (the parallel universe in which ghosts reside), that when plugged in, failed to work. Once inside, he inadvertently presses the "On" button (which his parents naively failed to do), thus activating the Portal and infusing his DNA with ectoplasm, transforming him into a half-ghost.


Danny, who calls himself "Danny Phantom" in ghost form, develops the ability to fly, to become invisible, to become intangible, and to "overshadow" (possess and control) people after first learning how to switch back and forth at will between his ghost and human forms. Over time, he develops much stronger abilities, such as his Ghost Ray (a concentrated blast of energy he fires from his hand), his Ghostly Wail (an intensely powerful scream with sonic capabilities that knocks back anything caught in its path), and even cryokinesis. Danny is initially frightened by his new abilities and has little control over them, but he soon learns to use them to protect his town from malevolent ghosts. Danny turns to the life of a superhero, using his powers to rid his hometown from the various ghosts who plague it and are almost always brought into the world thanks to the sporadic activation of the Fentons' Ghost Portal. Sam, Tucker, and Jazz are Danny's primary allies in his ghost-fighting activities.

On the day Danny was busy fighting the ghost and had a school duty must be delivered to him and unfortunately, he is busy fighting the ghost and does not want to be punished not to solve his school duty so asked Moamen to solve it, but Moamen could not solve Can you help him to resolve his duty School?

Can you help him to solve that equation and find the minimum value of A that achieves the equation?


Input
One line contains three integers B, C and D where ( 0 < B,C ≤ 1018 ), ( 0 ≤ D ≤ 1017).

Output
Print one positive integer A and if there no solution print "-1".

Example
inputCopy
1 3 2
outputCopy
1

Input
4165341654 65410 2146
Output
34702

Input
34265352 6 5
Output
5

Input
1000000000000000000 10000 100000000000000
Output
-1

Input
1000000000000000000 1000000000000000000 100000000000000000
Answer
100000000000000000

Input
54156341 5674564 5454
Output
2594753

Input
54156341 5674564 5454
output
2594753
*/
#include <bits/stdc++.h>
using namespace std ;
int main () {
long long b, c, d;
	cin >> b >> c >> d;
	if (d >= c)cout << "-1";
	else if (b % c < d)cout << d - (b % c);
	else if (b % c > d)cout << c - (b % c) + d;
	else cout << c;

}
