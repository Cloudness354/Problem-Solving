/*
https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E

E. George and Accommodation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
George has recently entered the BSUCP (Berland State University for Cool Programmers). George has a friend Alex who has also entered the university. Now they are moving into a dormitory.

George and Alex want to live in the same room. The dormitory has n rooms in total. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both George and Alex.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of rooms.

The i-th of the next n lines contains two integers pi and qi (0 ≤ pi ≤ qi ≤ 100) — the number of people who already live in the i-th room and the room's capacity.

Output
Print a single integer — the number of rooms where George and Alex can move in.

Examples
inputCopy
3
1 1
2 2
3 3
outputCopy
0
inputCopy
3
1 10
0 10
10 10
outputCopy
2
*/
#include<bits/stdc++.h>
using namespace std;
void YousefTarek(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout); 
    #endif
}


int main() {
YousefTarek(); 
    long long sum1=0,sum2=0,n,m=0;
		cin>>n;bool ans=false;
		while(n--){
			cin>>sum1>>sum2;
			if(sum2-sum1>=2){m++;}
		}
		cout<<m;
}

/*
void solve(){
	
}
*/