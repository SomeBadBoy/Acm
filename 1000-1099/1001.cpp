#include <cstdio>
#include <iostream>
using namespace std;
int calc(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int max;
	while(cin>>max) {
		cout<<calc(max)<<endl<<endl;
	}
	return 0;
}
