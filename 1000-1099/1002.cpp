#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
char FIRST[1001];
char SECOND[1001];
char RESULT[1001];
// ascii: 48:0, 57:9
int plusTwo(char one, char two, char * result, int last) {
	int a = one - '0';
	int b = two - '0';
	int sum = a+b + last;
	*result = (char) ( (sum % 10) + 48);
	return sum / 10;
}
char check(int pos, char arr[]) {
	if(pos <= 0) {
		return '0';
	}
	return arr[pos-1];
}
/**
 * 这里反正是为了方便，实际上是bad practise
 */
void bigIntPlus() {
	int lenA=strlen(FIRST), lenB=strlen(SECOND);
	int max = lenA > lenB ? lenA : lenB;
	int last = 0;
	for (; lenA >= 0 || lenB >= 0; --lenA, --lenB, --max){
		int f = check(lenA, FIRST);
		int s = check(lenB, SECOND);
		last = plusTwo(f, s, &RESULT[max-1], last);
	}
}
void removeZero(char arr[]) {
	int length = strlen(arr);
	int i = 0;
	for(i = 0; i < length - 1; ++i) {
		if(arr[i] != '0') {
			break;
		}
	}
	for(int j = 0; i <= length; ++i, ++j) {
		arr[j] = arr[i];
	}
}
void printResult(int c) {
	cout<<"Case "<<c<<":"<<endl;
	cout<<FIRST<<" + "<<SECOND<<" = "<<RESULT<<endl;
}
int main(int argc, char const *argv[])
{
	int max;
	cin>>max;
	for(int i = 1; i <= max; ++i) {
		scanf("%s %s", FIRST, SECOND);
		bigIntPlus();
		removeZero(RESULT);
		removeZero(FIRST);
		removeZero(SECOND);
		printResult(i);
		if(i != max) cout<<endl;
		memset(&RESULT[0], 0, sizeof(RESULT));
	}
	return 0;
}
