#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int input[100000] = {0};
/**
cases:
7 0 8 -1 1 -6 6 -5
6 8 -1 1 -6 6 -5
6 8 -1 1 -6 6 1
1 1
2 -5 -3
*/
int main(int argc, char const *argv[])
{
	int max, now = 0;
	cin>>max;
	memset(&input[0], 0, sizeof(input));
	while(--max >= 0) {
		int size;
		cin>>size;
		for(int i = 0; i < size; ++i) {
			cin>>input[i];
		}
		long max = 0x8000000000000000, value = 0, start = 0, maxStart = 0, maxEnd = 0;
		for(int i = 0; i < size; ++i) {
			if(value >= 0) {
				value += input[i];
			} else {
				value = input[i];
				start = i;
			}
			if(value > max) {
				maxEnd = i;
				maxStart = start;
				max = value;
			}
		}
		cout<<"Case "<<++now<<":"<<endl;
		cout<<max<<" "<<maxStart+1<<" "<<maxEnd+1<<endl;
		memset(&input[0], 0, sizeof(input));
		if(max) cout<<endl;
	}
	return 0;
}