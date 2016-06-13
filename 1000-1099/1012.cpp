#include <cstdio>
#include <iostream>
using namespace std;
int factorial(int n) {
	if(n == 0) {
		return 1;
	}
	int last = 1;
	for(int i = 1; i <= n; ++i) {
		last *= i;
	}
	return last;
}
void printResult(int n, double result) {
	printf("%d %.10g\n", n, result);
}
double func(int n) {
	double result = 0;
	for(int i = 0; i <= n; ++i) {
		result += 1/(double)(factorial(i));
	}
	return result;
}
int main(int argc, char const *argv[])
{
	cout<<"n e"<<endl<<"- -----------"<<endl;
	for(int i = 0; i < 10; ++i) {
		printResult(i, func(i));
	}
	return 0;
}