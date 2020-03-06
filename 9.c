// Vito's Family

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,r,dist[5],med=0,temp,diff[5],sum[5],t=0,T;

	clrscr();
	printf("\nenter no of testcases=");
	scanf("%d",&T);

	for(i=0;i<T;i++)
		sum[i]=0;
	while(t<T)
	{
		printf("\nenter no of relatives for testcase %d=",t+1);
		scanf("%d",&r);
		printf("\nenter distances of relatives from vito=");

		for(i=0;i<r;i++)
		{
			scanf("%d",&dist[i]);
		}
		for(i=0;i<r;i++)
		{
			for(j=i+1;j<r;j++)
			{
				if(dist[i]>dist[j])
				{
					temp=dist[i];
					dist[i]=dist[j];
					dist[j]=temp;
				}
			}
		}
		if(r%2!=0)
			med=dist[r/2];
		else
		{
			for(i=0;i<r;i++)
				med=med+dist[i];
			med=med/r;
		}

		for(i=0;i<r;i++)
		{
			diff[i]=abs(med-dist[i]);
		}
		for(i=0;i<r;i++)
		{
			sum[t]=sum[t]+diff[i];
		}
		t++;
	}
	printf("\nMinimal distance:");
	for(i=0;i<T;i++)
		printf("\nfor testcase %d=%d",i+1,sum[i]);

	getch();
	return 0;
}
/*
***OUTPUT***

enter no of testcases=2

enter no of relatives for testcase 1=2
enter distances of relatives from vito=2 4

enter no of relatives for testcase 2=3
enter distances of relatives from vito=2 4 6

Minimal distance:
for testcase 1=2
for testcase 2=4

*/


