#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int addAndCalc(int result, int addOne) {
	int tmp = result + addOne;
	while(tmp >= 10) {
		int d1 = tmp / 10;
		int d2 = tmp % 10;
		tmp = d1 + d2;
	}
	return tmp;
}
int digitRoot(char input[100001]) {
	int len = strlen(input), result = 0;
	while(len--) {
		result = addAndCalc(result, input[len]-'0');
	}
	return result;
}
int main(int argc, char const *argv[])
{
	char input[100001] = {'0'};
	while(cin>>input) {
		int result = digitRoot(input);
		if(!result) break;
		cout<<digitRoot(input)<<endl;
		memset(&input[0], 0, sizeof(input));
	}
}