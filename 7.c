// WERTYU

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,len;
	char input[20];
	char line1[47]={'`','1','2','3','4','5','6','7','8','9','0','-',
	'=','Q','W','E','R','T','Y','U','I','O','P','[',']','A','S','D','F',
	'G','H','J','K','L',';','\n','Z','X','C','V','B','N','M',',','.','/',
	' '};
	char line2[47]={' ','`','1','2','3','4','5','6','7','8','9','0',
	'-',' ','Q','W','E','R','T','Y','U','I','O','P','[',' ','A','S','D',
	'F','G','H','J','K','L',';',' ','Z','X','C','V','B','N','M',',','.',
	' '};

	clrscr();
	printf("\nenter your input\n");
	gets(input);
	for(i=0;input[i]!='\0';i++);
	len=i;
	for(i=0;i<len;i++)
	{
		for(j=0;j<47;j++)
		{
			if(input[i]==line1[j])
			{
				input[i]=line2[j];
			}
		}
	}
	printf("\nDecrypted line=\n");
	for(i=0;input[i]!='\0';i++)
	{
		printf("%c",input[i]);
	}
	getch();
	return 0;
}

/*
***OUTPUT***
enter your input
O S, GOMR YPFSU/

Decrypted line=
I AM FINE TODAY.

*/














