// Multiplication Game

#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	unsigned long long int p=1,stan,ollie,no;

	clrscr();
	printf("\nenter no=");
	scanf("%llu",&no);

	while(p<=no)
	{
		p=p*9;
		stan=p;
		if(stan>=no)
		{
			printf("\nstan wins");
			break;
		}

		p=p*2;
		ollie=p;
		if(ollie>=no)
			printf("\nollie wins");
	}
	getch();
	return 0;
}

/*
***OUTPUT***

enter no=162
stan wins

enter no=17
ollie wins

enter no=34012226
stan wins

*/