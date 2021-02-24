/*this lab shows how to use strings*/
#define CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void load(char *f, char *l)
{
	printf("Enter first name\n");
	gets(f);
	printf("Enter last name\n");
	gets(l);
	}

void main()
{
	char first[15], last [15];
	load(first, last);
	printf("%s %s\n", first, last);
	system("PAUSE");
}

/*Enter first name
marco
Enter last name
chavez
marco chavez
Press any key to continue . . .*/