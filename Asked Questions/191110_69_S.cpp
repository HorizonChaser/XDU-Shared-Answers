#include<stdio.h>
int main()
{
	int i,j,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for(i = 0;i < m;i++)                   //先输入矩阵
	{
		for(j = 0;j < n;j++)
			scanf("%d",&a[i][j]); 
	}
	for(i = 0;i < m;i++)              
	{
		int count = 0,max = 0,location = 0,sign = 0;    //注意这些初始化的位置
		for(j = 0;j < n;j++)
		{
			if(a[i][j] == 1)
			{
				count++;
				sign = 1;         //标记变量，有1就是sign = 1
				if( a[i][j+1] == 0)        //下一个为0 即连续停止
				{
					if(count > max)     //需比较是否为最长
					{
						max = count;
						location = j;
						count = 0;              //因为1的连续结束了，所以count重赋值为0
					}
				}
			}
		} 
		if(sign)
		{
			printf("%d %d\n",location - max + 1,location);
		}
		else
			puts("-1 -1");
	}
	return 0;
}

