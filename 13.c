//Reverse & Add

#include<stdio.h>
#include<conio.h>
long long int reverse(long long int n)
{
	long long int temp=0;
	while(n!=0)
	{
		temp=temp*10+(n%10);
		n=n/10;
	}
	return temp;
}
int main()
{
	int i,no,count[5];
	long long int P[5],temp;
	clrscr();
	printf("\nenter testcases=");
	scanf("%d",&no);
	printf("\nenter all nums\n");

	for(i=0;i<no;i++)
		scanf("%lld",&P[i]);

	i=0;
	while(i<no)
	{
		count[i]=0;
		while(reverse(P[i])!=P[i])
		{
			temp=reverse(P[i]);
			P[i]=temp+P[i];
			if(count[i]>1000 && P[i]>4294967295)
				break;
			count[i]++;
		}
		i++;
	}
	for(i=0;i<no;i++)
		printf("\n%d %lld",count[i],P[i]);

	getch();
	return 0;
}
/*
***OUTPUT***

enter testcases=3
enter all nums
195 265 750

4 9339
5 45254
3 6666

*/
