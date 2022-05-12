/*A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order*/
#include <iostream>
using namespace std;

int main(){
    string first;  getline(cin, first);
    string second; getline(cin, second);
    int comparison = 0;
    for(int k = 0; k < first.size() ; ++k){
        if(tolower(first[k]) < tolower(second[k])){comparison = -1;break;}
        if(tolower(first[k]) > tolower(second[k])){comparison =  1;break;}
    }
    cout<<comparison<<"\n";
    return 0;
}

/*
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  string str1,str2;
  cin>>str1>>str2;
  for(int i=0;i<str1.size();i++)
   { str1[i]=towlower(str1[i]);str2[i]=towlower(str2[i]);}
  if(str1 < str2)cout<<-1;
  else if(str1>str2)cout<<1;
  else if(str1==str2)cout<<0;
}
  */
