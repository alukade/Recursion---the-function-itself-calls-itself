/*�ݹ����Ҫ�н����������������������*/
#include<stdio.h>

void recursion(void);

void recursion(void)
{
	static int count = 10;
    printf("Hi!\n");

	if (--count)//ÿִ��һ��count��һ������0Ϊfalse��ִ�У�ѭ������
	{
		recursion();
	}
}

int main(void)
{
	recursion();

	return 0;
}