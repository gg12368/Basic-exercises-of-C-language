2.输出乘法口诀表
/*
11=1
21=2 22=4
31=3 32=6 33=9
……
*/

  #include<stdio.h>
    int main()
    {
    	int i=0;
    	for(i=1;i<=9;i++)
    	{
    		int j=0;
    		for(j=1;j<=i;j++)
    		{
    			printf("%d*%d=%-3d",i,j,i*j);
    			// %3d 控制宽度为三个字符，且右对齐；如果改为 %-3d 则为左对齐
    		}
    		printf("\n");
    	}
    	return 0;
     } 
