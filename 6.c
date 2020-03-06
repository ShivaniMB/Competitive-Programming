// Hartals

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,a,t=1,T,no,days,H[5],found,day[150];

	clrscr();
	printf("\nenter total no of testcases=");
	scanf("%d",&T);

	while(t<=T)
	{
		found=0;
		printf("\nenter days for test %d=",t);
		scanf("%d",&days);

		for(a=0;a<days;a++)
			day[a]=0;

		printf("\nenter no of parties=");
		scanf("%d",&no);
		printf("\nenter days on which hartal will occur=");

		for(j=0;j<no;j++)
		{
			scanf("%d",&H[j]);
		}
		for(j=0;j<no;j++)
		{
			for(k=1;k<=days;k++)
			{
				if(k%7==6 || k%7==0)
				{
					continue;
				}
				else
				{
					if(k%H[j]==0)
					{
						day[k-1]=1;
					}
				}
			}
		}
		for(i=0;i<days;i++)
		{
			if(day[i]==1)
			{
				found++;
			}
		}
		printf("\nNon working days=%d",found);
		t++;
	}
	getch();
	return 0;
}

/*
***OUTPUT***

enter total no of testcases=2

enter days for test 1=14
enter no of parties=3
enter days on which hartal will occur=3 4 8
Non working days=5

enter days for test 2=100
enter no of parties=4
enter days on which hartal will occur=12 15 25 40
Non working days=15

*/










