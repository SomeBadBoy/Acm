#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	long times;
	while(cin>>times && times) {
		long result = 0;
		while(times--) {
			long a;
			cin>>a;
			result += a;
		}
		cout<<result<<endl;
	}
	return 0;
}