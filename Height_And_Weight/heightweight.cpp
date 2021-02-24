// code for the volume
// and weight for company
//Written by Marco Chavez
//CS 36 (Sat)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{	
	float h,l,w,vol,dw;

printf("Enter the height of box ");
scanf("%f", & h);
printf("Enter the length of box ");
scanf("%f", & l);
printf("Enter the width of box ");
scanf("%f", & w);

vol= l*w*h;
dw= ((vol+165)/166)

printf("volume (cubic inches): %f\n", vol);
printf("dimensional weight (lbs): %f\n",dw);

system("PAUSE");
}

/*Enter the height of box 8
Enter the length of box 12
Enter the width of box 10
volume (cubic inches): 960.000000
dimensional weight (lbs): 6.777109
Press any key to continue . . . */