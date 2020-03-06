// Shoemaker's Problem

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,job,seq[5],q,k;
	float days[5],fine[5],avg[5],temp,avg1[5];

	clrscr();
	printf("\nenter no of jobs=");
	scanf("%d",&job);
	printf("\nenter no of days each job required and its fine per day\n");

	for(i=0;i<job;i++)
	{
		scanf("%f%f",&days[i],&fine[i]);
	}
	for(i=0;i<job;i++)
	{
		avg[i]=days[i]/fine[i];
	}
	for(i=0;i<job;i++)
		avg1[i]=avg[i];
	for(i=0;i<job;i++)
	{
		for(j=i+1;j<job;j++)
		{
			if(avg[i]>avg[j])
			{
				temp=avg[i];
				avg[i]=avg[j];
				avg[j]=temp;
			}
		}
	}
	q=0;
	for(i=0;i<job;i++)
	{
		seq[i]=0;
		for(j=0;j<job;j++)
		{
			if(avg[j]==avg1[i])
			{
				for(k=0;k<i;k++)
				{
					if(avg1[k]==avg1[i])
						q++;
				}
				if(q>0)
				{
					seq[i]=j+1+q;
					q=0;
					break;
				}
				else
				{
					seq[i]=j+1;
					break;
				}
			}
		}
	}
	printf("\n");
	for(i=0;i<job;i++)
		printf(" %d",seq[i]);

	getch();
	return 0;
}
/*
***OUTPUT***

enter no of jobs=4
enter no of days each job required and its fine per day
3 4
1 1000
2 2
5 5

 2 1 3 4

*/