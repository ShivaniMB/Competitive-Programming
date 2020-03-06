// The trip

#include<stdio.h>
#include<conio.h>
int main()
{
	float exp[10],spend[10],no1[10];
	int n,i,no[10],mode[10];
	float total=0.0,avg=0.0,exch;

	clrscr();
	printf("\nenter no of students=");
	scanf("%d",&n);
	printf("\nenter their expenses=");

	for(i=0;i<n;i++)
	{
		scanf("%f",&exp[i]);
	}
	for(i=0;i<n;i++)
	{
		total=total+exp[i];
	}
	avg=total/n;
	for(i=0;i<n;i++)
	{
		spend[i]=exp[i]-avg;
	}
	for(i=0;i<n;i++)
	{
		 spend[i]=spend[i]*100;
		 no[i]=spend[i];
		 no1[i]=no[i];
		 spend[i]=no1[i]/100;
	}
	for(i=0;i<n;i++)
	{
		if(spend[i]>0)
		{
			exch=exch+spend[i];
		}
	}
	printf("\nthe money which should be exchanged is %2f",exch);
	getch();
	return 0;
}

/*

***OUTPUT***

enter no of students=4
enter their expenses=15.00
15.01
3.00
3.01
the money which should be exchanged is 11.990000

enter no of students=3
enter their expenses=10.00
20.00
30.00
the money which should be exchanged is 10.000000

*/


