#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int input[100001] = {0};
int main(int argc, char const *argv[])
{
	int cases, now = 0;
	cin>>cases;
	memset(&input[0], 0, sizeof(input));
	while(--cases >= 0) {
		int size;
		cin>>size;
		for(int i = 0; i < size; ++i) {
			cin>>input[i];
		}
		long max = 1 << 31, value = 0, start = 0, maxStart = 0, maxEnd = 0;
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
		if(cases) cout<<endl;
	}
	return 0;
}