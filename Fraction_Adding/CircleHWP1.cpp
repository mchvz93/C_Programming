//this code demonstrates how to add fractions
//written by Marco Chavez
//student id 913519
//CS 36 Sat

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main ()
{

	 float r,pi,d, area, cir;
	

	 printf("Enter the radius of the circle ");
	 scanf("%f", & r);

	 pi= 3.14159;
	 d = r*2;
	 area = pi*r*r;
	 cir = 2*pi*r;

	 printf("The diameter is %0.5f\n", d);
	 printf("The area of the circle is %0.5f\n", area);
	 printf("The circumfrence is: %0.5f\n", cir);

	system("PAUSE");
}

