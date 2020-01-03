给定两个整形变量的值，将两个值的内容进行交换。
#include<stdio.h>
#include<windows.h>
int main()
{
	int num1 = 6;
	int num2 = 8;
	int temp = 0;
	scanf_s("%d %d", &num1, &num2);
	printf("%d %d\n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}
