// Self Describing Sequence

#include<stdio.h>
#include<conio.h>
int main()
{
	unsigned long long int i,arr[15000],n,j,no;

	clrscr();
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=4;
	arr[4]=6;

	printf("\nenter no=");
	while(scanf("%llu",&no))
	{
		if(no==0)
			break;

		for(i=5;i<15000;i++)
		{
			for(j=1;j<i;j++)
			{
				if(arr[j]<i)
					continue;
				else
				{
					j--;
					arr[i]=j+arr[i-1];
					break;
				}
			}
		}
		for(i=0;i<15000;i++)
		{
			if(no>arr[i])
				continue;
			if(no==arr[i])
				break;
			if(no<arr[i])
			{
				i--;
				break;
			}
		}
		printf(" %llu",i);
		printf("\nenter no=");
	}
	getch();
	return 0;
}
/*

***OUTPUT***

enter no=100
21
enter no=9999
356
enter no=123456
1684
enter no=0

*/