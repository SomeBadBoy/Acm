#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
long max(long a, long b) {
	return a > b ? a : b;
}
int compare(int i[3], int j[3]) {
	
}
long input[31][3] = {0};
long result[31] = {0};
int main(int argc, char const *argv[]) {
	int n = 0;
	while(cin>>n && n) {
		for(int i = 1; i <= n; ++i) {
			cin>>input[i][0]>>input[i][1]>>input[i][2];
		}
		for(int i = 0; i < n; ++i) {
			for(int j = i + 1; j <= n; ++j) {
				if(input[j] > input[i]) {
					long tmp = input[j] + result[i];
					result[j] = max(tmp, result[j]);
				}
			}
		}
		long maxValue = input[0];
		for(int i = 0; i <= n; ++i) {
			maxValue = max(result[i], maxValue);
		}
		cout<<maxValue<<endl;
		memset(&input[0], 0, sizeof(input));
		memset(&result[0], 0, sizeof(result));
	}
	return 0;
}