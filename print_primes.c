1.打印100~200之间的素数
素数：一个大于1的自然数，除了1和它本身外，不能被其他自然数整除，换句话说就是该数除了1和它本身以外不再有其他的因数。

#include<stdio.h>
    int main()
    {
    	int i=0;
    	int count=0;	//计数器 
    	for(i=100;i<=200;i++)
    	{
    		int j=0;
    		for(j=2;j<i;j++)
    		{
    			if(i%j==0)
    			break;	//若存在一个数j可以被i整除，则这个数不是素数，直接跳出循环
    			//else 
    			//printf("%d",i);
    		}
    		if(j==i)	//进行内层循环，直到j=i，这一层循环结束 
    		{
    			printf("100~200之间的素数为：%d\n",i); 
    			count++;
    		}
    	//printf("100~200之间的素数的个数为%d",count);
    	}
    	printf("100~200之间的素数的个数为%d",count);
    	return 0;
     } 
