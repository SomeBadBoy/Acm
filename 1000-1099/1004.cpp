#include "cstdio"
#include "iostream"
#include "math.h"
using namespace std;

char input[1001][16] = {0};
int balloon[1001] = {0};
int main(int argc, char const *argv[])
{
	int size;
	while((cin>>size) && size) {
		int len = 0;
		while(--size >= 0) {
			char tmp[16] = {0};
			int flag = 1;
			cin>>tmp;
			for(int i = 0; i < len; ++i) {
				if(strcmp(input[i], tmp) == 0) {
					balloon[i] += 1;
					flag = 0;
				}
			}
			if(flag) {
				strcpy(input[len], tmp);
				++len;
			}
		}
		int max = 0, index = 0;
		for(int i = 0; i < len; ++i) {
			index = balloon[i] > max ? i : index;
			max = balloon[i] > max ? balloon[i] : max;
		}
		cout<<input[index]<<endl;
		memset(&balloon[0], 0, sizeof(balloon));
	}
	return 0;
}