// Jolly jumper

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int seq[3000],diff[2999],i,j,n,found=0;

	clrscr();
	printf("\nenter no of integers=");
	scanf("%d",&n);
	printf("\nenter sequence=");

	for(i=0;i<n;i++)
	{
		scanf("%d",&seq[i]);
	}
	for(i=0;i<n;i++)
	{
		j=i+1;
		if(j==n)
			break;
		diff[i]=seq[j]-seq[i];
		diff[i]=abs(diff[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==diff[j])
			{
				found++;
				break;
			}
		}
	}
	if(found==n-1)
	{
		printf("\nJolly");
	}
	else
	{
		printf("\nNot jolly");
	}
	getch();
	return 0;
}

/*
***OUTPUT***

enter no of integers=4
enter sequence=1 4 2 3
Jolly

enter no of integers=5
enter sequence=1 4 2 -1 6
Not jolly
*/


