/*B. Spreadsheets
time limit per test10 seconds
memory limit per test64 megabytes
inputstandard input
outputstandard output
In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. The first column has number A, the second — number B, etc. till column 26 that is marked by Z. Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.

The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. For example, BC23 is the name for the cell that is in column 55, row 23.

Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. For instance, R23C55 is the cell from the previous example.

Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to the rules of another numeration system.

Input
The first line of the input contains integer number n (1 ≤ n ≤ 105), the number of coordinates in the test. Then there follow n lines, each of them contains coordinates. All the coordinates are correct, there are no cells with the column and/or the row numbers larger than 106 .

Output
Write n lines, each line should contain a cell coordinates in the other numeration system.

Examples
inputCopy
2
R23C55
BC23
outputCopy
BC23
R23C55
*/
#include <iostream>
#include <ctype.h>

using namespace std;

string Convert(string x);

int N;
string strInput;

int main()
{
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		cin >> strInput;
		cout << Convert(strInput) << endl;
	}
	return 0;
}

string Convert(string x)
{
	string strRet = "";
	int nTmp = 0;
	bool bTmp = false;
	for(int i = 0; i < x.size(); i++)
	{
		if(isdigit(x[i]) && !bTmp) { bTmp = true; nTmp++; }
		if(!isdigit(x[i])) { bTmp = false; }
	}
	if(nTmp == 1)
	{
		string R, C;
		int nC = 0, nHex = 1;
		for(int i = 0; i < x.size(); i++)
		{
			if(isalpha(x[i])) { C += x[i]; }
			else { R += x[i]; }
		}
		for(int i = 0; i < C.size(); i++)
		{
			nC += (C[C.size() - i - 1] - 'A' + 1) * nHex;
			nHex *= 26;
		}
		strRet += "R" + R + "C";
		string strTmp = "";
		while(nC)
		{
			strTmp = (char)(nC % 10 + 48) + strTmp;
			nC /= 10;
		}
		strRet += strTmp;
	}
	else
	{
		int C = 0;
		int nPos = x.find('C');
		for(int i = nPos + 1; i < x.size(); i++)
		{
			C *= 10;
			C += (x[i] - '0');
		}
		string strTmp = "";
		while(C)
		{
			if(C % 26 == 0) { strTmp = 'Z' + strTmp; C /= 26; C--; continue; }
			strTmp = (char)((C % 26) + 'A' - 1) + strTmp;
			C /= 26;
		}
		strRet = strTmp + x.substr(1, nPos - 1);
	}
	return strRet;
}
