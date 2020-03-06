// Minesweeper

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c;
	char mat[10][10],sol[10][10];

	clrscr();
	printf("\nenter no of rows=");
	scanf("%d",&r);
	printf("\nenter no of columns=");
	scanf("%d",&c);
	printf("\nenter your matrix\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat[i][j]='0';
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %c",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sol[i][j]='0';
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]=='*')
			{
				sol[i-1][j-1]++;
				sol[i-1][j]++;
				sol[i-1][j+1]++;
				sol[i][j-1]++;
				sol[i][j+1]++;
				sol[i+1][j-1]++;
				sol[i+1][j]++;
				sol[i+1][j+1]++;
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]=='*')
			{
				sol[i][j]='*';
			}
		}
	}
	printf("\nthe solution matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %c",sol[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}

/*

***OUTPUT***

enter no of rows=4
enter no of columns=4
enter your matrix
 *...
 ....
 .*..
 ....

the solution matrix is
 * 1 0 0
 2 2 1 0
 1 * 1 0
 1 1 1 0

enter no of rows=3
enter no of columns=5
enter your matrix
 **...
 .....
 .*...

the solution matrix is
 * * 1 0 0
 3 3 2 0 0
 1 * 1 0 0

 */