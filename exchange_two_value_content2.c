不允许创建临时变量，交换两个数的内容
// 不允许创建临时变量，交换两个数的内容（附加题）
//算法：利用基本赋值语句完成交换操作

#include<stdio.h>
#include<windows.h>
int main()
{
	int num1 = 6;
	int num2 = 8;
	int temp = 0;
	printf("请输入两个数：");
	scanf_s("%d %d", &num1, &num2);
	printf("您输入的两个数为：%d %d\n", num1, num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1= num1 - num2;
	printf("交换后的两个数为：%d %d\n", num1, num2);
	system("pause");
	return 0;
}
