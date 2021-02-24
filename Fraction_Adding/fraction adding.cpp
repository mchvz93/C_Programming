//this is program set 1 from HW1
//written by Marco Chavez
//student id 913519
//CS 36 Sat

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define pi (3.14159)

void main ()
{

	 float r,d, area, cir;
	

	 printf("Enter the radius of the circle ");
	 scanf("%f", & r);

	 d = r*2;
	 area = pi*r*r;
	 cir = 2*pi*r;

	 printf("The diameter is %0.5f\n", d);
	 printf("The area of the circle is %0.5f\n", area);
	 printf("The circumfrence is: %0.5f\n", cir);

	system("PAUSE");
}
/* Enter the radius of the circle 2
The diameter is 4.00000
The area of the circle is 12.56636
The circumfrence is: 12.56636
Press any key to continue . . .*/ 

