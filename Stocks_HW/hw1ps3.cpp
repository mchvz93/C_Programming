//this is program set 3
//written by Marco Chavez
//student id 913519
//CS 36 Sat

#define _CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	float shares, buy, cp, yf, ic, cc, pro, sh, bu, cur, yrfee, icos, curcos, prof, shar, by, cprice, year, icost, ccost, prft;
	float  lshar,lbuy,lcp,lyf, lic,lcc, lpro, cshar, cbuy, ccp, cyf, cic, ccc, cpro, totalprofit;

	//IBM
	printf("Enter the number of shares for IBM ");
	scanf("%f", & shares);
	printf("Enter the buying price per share for IBM $");
	scanf("%f", & buy);
	printf("Enter the current price per share of IBM $");
	scanf("%f", & cp);
	printf("Enter the yearly fees for IBM $");
	scanf("%f", & yf);

	ic= shares*buy;
	cc= shares*cp;
	pro= cc-ic-yf;

	printf("The initial cost of IBM stock is $%0.2f\n", ic);
	printf("The current cost of IBM stock is $%0.2f\n", cc);
	printf("The profit from IBM stock is $%0.2f\n", pro);

	fflush(stdin);
	// Oracle
	printf("Enter the number of shares for Oracle ");
	scanf("%f", & sh);
	printf("Enter the buying price per share for Oracle $");
	scanf("%f", & bu);
	printf("Enter the current price for Oracle $");
	scanf("%f", & cur);
	printf("Enter the yearly fees for Oracle $");
	scanf("%f", & yrfee);
	
	icos= sh*bu;
	curcos= sh*cur;
	prof= curcos-icos-yrfee;

	printf("The initial cost of Oracle stock is $%.2f\n", icos);
	printf("The current cost of Oracle stock is $%.2f\n", curcos);
	printf("The profit from Oracle stock is $%.2f\n", prof);

	//Sun Micro
	printf("Enter the number of shares for Sun Micro ");
	scanf("%f", & shar);
	printf("Enter the buying price per share for Sun Micro $");
	scanf("%f", & by);
	printf("Enter the current price for Sun Micro $");
	scanf("%f", & cprice);
	printf("Enter the yearly fees for Sun Micro $");
	scanf("%f", & year);

	icost= shar*by;
	ccost= shar*cprice;
	prft= ccost-icost-year;

	printf("The initial cost of Sun Micro stock is $%.2f\n", icost);
	printf("The current cost of Sun Micro stock is $%.2f\n", ccost);
	printf("The profit from Sun Micro stock is $%.2f\n", prft);

	//Linksys
	printf("Enter the number of shares for Linksys ");
	scanf("%f", & lshar);
	printf("Enter the buying price per share for Linksys $");
	scanf("%f", & lbuy);
	printf("Enter the current price for Linksys $");
	scanf("%f", & lcp);
	printf("Enter the yearly fees for Linksys $");
	scanf("%f", & lyf);

	lic= lshar*lbuy;
	lcc= lshar*lcp;
	lpro= lcc-lic-lyf;

	printf("The initial cost of Linksys stock is $%.2f\n", lic);
	printf("The current cost of Linksys stock is $%.2f\n", lcc);
	printf("The profit from Linksys stock is $%.2f\n", lpro);

	//Cisco
	printf("Enter the number of shares for Cisco ");
	scanf("%f", & cshar);
	printf("Enter the buying price per share for Cisco $");
	scanf("%f", & cbuy);
	printf("Enter the current price for Cisco $");
	scanf("%f", & ccp);
	printf("Enter the yearly fees for Cisco $");
	scanf("%f", & cyf);
	
	cic= cshar*cbuy;
	ccc= cshar*ccp;
	cpro= ccc-cic-cyf;

	printf("The inital cost of Cisco stock is $%.2f\n", cic);
	printf("The current cost of Cisco stock is $%.2f\n", ccc);
	printf("The profit from the Cisco stock is $%.2f\n", cpro);

totalprofit = pro+prof+prft+lpro+cpro;
	printf("The total profit of all stocks is $%.2f\n", totalprofit);

	system("PAUSE");
}
/*Enter the number of shares for IBM 150
Enter the buying price per share for IBM $11.33
Enter the current price per share of IBM $13.33
Enter the yearly fees for IBM $5.00
The initial cost of IBM stock is $1699.50
The current cost of IBM stock is $1999.50
The profit from IBM stock is $295.00
Enter the number of shares for Oracle 215
Enter the buying price per share for Oracle $10.77
Enter the current price for Oracle $12.25
Enter the yearly fees for Oracle $3.50
The initial cost of Oracle stock is $2315.55
The current cost of Oracle stock is $2633.75
The profit from Oracle stock is $314.70
Enter the number of shares for Sun Micro 355
Enter the buying price per share for Sun Micro $25.55
Enter the current price for Sun Micro $35.75
Enter the yearly fees for Sun Micro $12.25
The initial cost of Sun Micro stock is $9070.25
The current cost of Sun Micro stock is $12691.25
The profit from Sun Micro stock is $3608.75
Enter the number of shares for Linksys 75
Enter the buying price per share for Linksys $22.34
Enter the current price for Linksys $23.34
Enter the yearly fees for Linksys $6.00
The initial cost of Linksys stock is $1675.50
The current cost of Linksys stock is $1750.50
The profit from Linksys stock is $69.00
Enter the number of shares for Cisco 50
Enter the buying price per share for Cisco $45.36
Enter the current price for Cisco $50.86
Enter the yearly fees for Cisco $1.50
The inital cost of Cisco stock is $2268.00
The current cost of Cisco stock is $2543.00
The profit from the Cisco stock is $273.50
The total profit of all stocks is $4560.95
Press any key to continue . . .
*/