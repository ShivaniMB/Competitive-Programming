// 3n+1 problem

#include<stdio.h>
#include<conio.h>
int count(int n);
int main()
{
	int i,max[150],j,len,n1,n2;

	clrscr();
	printf("\nenter two nos=");
	scanf("%d%d",&n1,&n2);
	j=0;
	for(i=n1;i<=n2;i++)
	{
	       max[j]=count(i);
	       j++;

	}
	len=max[0];
	for(i=0;i<=(n2-n1);i++)
	{
		if(max[i]>len)
		{
			len=max[i];
		}
	}
	printf("\n %d %d %d",n1,n2,len);
	getch();
	return 0;
}
int count(int n)
{
	int j=1;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=3*n+1;
		}
		j++;
	}
	return j;
}

/*
***OUTPUT***

enter two nos=1 10
 1 10 20
enter two nos=100 200
 100 200 125
enter two nos=201 210
 201 210 89
enter two 900 1000
 900 1000 174
*/