#include <cstdio>
#include <iostream>
using namespace std;
long calc(int now, int start) {
	if(start > now) {
		return (start - now) * 4 + 5;
	} else if(start < now) {
		return (now - start) * 6 + 5;
	} else 
		return 5;
}
int main(int argc, char const *argv[])
{
	int times;
	while(cin>>times && times) {
		long result = 0;
		int start = 0;
		while(times--) {
			int now;
			cin>>now;
			result += calc(now, start);
			start = now;
		}
		cout<<result<<endl;
	}
	return 0;
}
