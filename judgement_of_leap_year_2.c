3.判断1000年—2000年之间的闰年
分析：符合年份是闰年需要满足其中任意两个条件（1）能被4整除但不能被100整除，（2）能被400整除。
解二：
    #include<stdio.h>
    int main()
    {
    	int count = 0;
    	int year = 0;
    	for (year = 1000; year <= 2000; year++)
    	{
    		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    		{
    				printf("%d ", year);
    				count++;
    		}
    	}
    	printf("\n1000~2000之间闰年的个数为： %d\n", count);
    	return 0;
    }
