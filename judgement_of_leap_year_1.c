3.判断1000年—2000年之间的闰年
分析：符合年份是闰年需要满足其中任意两个条件（1）能被4整除但不能被100整除，（2）能被400整除。

 解一：
    #include<stdio.h>
    int main()
    {
    	int year=0;
    	int count=0;
    	for(year=1000;year<=2000;year++)
    	{
    		//判断闰年
    		 if(year%4==0) 
    		 {
    		 	if(year%100!=0)
    		 	{
    		 		count++;
    		 		printf("%d ",year);
    			 }
    		 }
    		  if(year%400==0)	//*************************此处一定要去掉else， 
    		 {
    		 	count++;
    		 	printf("%d ",year);
    		 }
    	}
    	printf("\n1000~2000之间闰年的个数为：%d\n",count);
     } 
