#include <stdio.h>

int main()
{
	int i,j,arr[7] = {9,3,1,4,2,7,5},temp=0;
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if(arr[j]<arr[i])
			{
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]= temp;
			}
		}
	}
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
	