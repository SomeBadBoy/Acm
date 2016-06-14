#include "cstdio"
#include "iostream"
#include "math.h"
using namespace std;

int stdFn(int a, int b, int n) {
	int fn[3] = {1, 1, 0};
	for(int i = 1; i <= n/3; ++i) {
		fn[2] = (a * fn[1] + b * fn[0]) % 7;
		fn[0] = (a * fn[2] + b * fn[1]) % 7;
		fn[1] = (a * fn[0] + b * fn[2]) % 7;
	}
	return fn[(n+2)%3];
}

int main(int argc, char const *argv[])
{
	int a, b, n;
	int remainder[101] = {0};
	while(cin>>a>>b>>n && a != 0 && b != 0 && n != 0) {
		count<<"std result = "<<stdFn(a, b, n)<<endl;

	}
	return 0;
}