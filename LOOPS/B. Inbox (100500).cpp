/*B. Inbox (100500)
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Over time, Alexey's mail box got littered with too many letters. Some of them are read, while others are unread.

Alexey's mail program can either show a list of all letters or show the content of a single letter. As soon as the program shows the content of an unread letter, it becomes read letter (if the program shows the content of a read letter nothing happens). In one click he can do any of the following operations:

Move from the list of letters to the content of any single letter.
Return to the list of letters from single letter viewing mode.
In single letter viewing mode, move to the next or to the previous letter in the list. You cannot move from the first letter to the previous one or from the last letter to the next one.
The program cannot delete the letters from the list or rearrange them.

Alexey wants to read all the unread letters and go watch football. Now he is viewing the list of all letters and for each letter he can see if it is read or unread. What minimum number of operations does Alexey need to perform to read all unread letters?

Input
The first line contains a single integer n (1 ≤ n ≤ 1000) — the number of letters in the mailbox.

The second line contains n space-separated integers (zeros and ones) — the state of the letter list. The i-th number equals either 1, if the i-th number is unread, or 0, if the i-th letter is read.

Output
Print a single number — the minimum number of operations needed to make all the letters read.

Examples
inputCopy
5
0 1 0 1 0
outputCopy
3
inputCopy
5
1 1 0 0 1
outputCopy
4
inputCopy
2
0 0
outputCopy
0
Note
In the first sample Alexey needs three operations to cope with the task: open the second letter, move to the third one, move to the fourth one.

In the second sample the action plan: open the first letter, move to the second letter, return to the list, open the fifth letter.

In the third sample all letters are already read.

*/
#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
    bool f = false;
    int n,temp = 0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            ans++;
            ans += temp;
            temp = 0;
            f = true;
            continue;
        }
        if(f){
            temp = 1;
            f = false;
        }
    }
    cout << ans << endl;
    return 0;
}
