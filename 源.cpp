/*递归必须要有结束条件，否则程序会崩溃！*/
#include<stdio.h>

void recursion(void);

void recursion(void)
{
	static int count = 10;
    printf("Hi!\n");

	if (--count)//每执行一次count减一，减到0为false不执行，循环结束
	{
		recursion();
	}
}

int main(void)
{
	recursion();

	return 0;
}