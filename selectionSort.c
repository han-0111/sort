#include<stdio.h>
// 简单选择排序 
main()
{
	int demoList[10], min, temp;
	int i, j;
	for(i = 0; i < 10; i++)
		scanf("%d", &demoList[i]);
	for(i = 0; i < 9; i++)
	{
		min = i;
		for(j = i+1; j <= 9; j++)
		{
			if(demoList[j] < demoList[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = demoList[i];
			demoList[i] = demoList[min];
			demoList[min] = temp;
		}
	}
	for(i = 0; i <= 9; i++)
		printf("%-5d", demoList[i]); 
}
