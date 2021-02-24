/* This is HW2 program set 3
Written by Marco Chavez
Student ID 913519
CS 36 (Sat) */

#define CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	char grade;
	float pts;

	printf("Enter a grade {A,B,C,D,F}: ");
	scanf("%c", & grade);

	switch(grade)
	{
	case 'a': case 'A':
		pts=4.0;
		break;
	case 'b': case 'B':
		pts= 3.0;
		break;
	case 'c': case 'C':
		pts= 2.0;
		break;
	case 'd': case 'D':
		pts= 1.0;
		break;
	case 'f': case 'F':
		pts= 0.0;
		break;
	}
	printf("The score for the grade %c is %.2f\n", grade, pts);
	
	system("PAUSE");
}
/*
Output
Enter a grade {A,B,C,D,F}: A
The score for the grade A is 4.00
Press any key to continue . . .*/