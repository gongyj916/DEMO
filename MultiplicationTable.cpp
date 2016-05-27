/*
purpose:使用一个变量打印99乘法表
*/

#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	printf("99 multiplication-table:\n");
	for (int i = 0; i < 81; ++i)
	{
		int tmpa= i%9;
		int tmpb = i/9;
		if (tmpa > tmpb) continue;

		printf("%dx%d=%2d  ", (i%9 + 1), (i/9 + 1), (i%9 + 1) * (i/9 + 1));
        if((i % 9) == (i / 9)) printf("\n");
	}
	system("pause");
	return 0;
}
