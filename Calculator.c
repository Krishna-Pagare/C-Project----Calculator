//*****************************************|
//Author:Kailean Hunter                    |
//File Name:Assignment 1                   |
//Project: Inch / Centimeter Converter     |
//Date: 2/6/2016                           |
//*****************************************|

//Pre-Processors

#include <stdio.h>
#include <stdlib.h>

int main()

{
	//declarations
	
	int menu=0;
	float number1 = 0, sum, inches;
 
	//Menu
	
	printf("Hi, Weclome to my Inch / Centimeter Converter\n");
	printf("Please select your option below\n");
	printf("1 - Inch to Centimeter\n");
	printf("2 - Centimeter to Inch\n");
	printf("Option: ");
	scanf("%d", &menu);
	
	//Math
	
	if (menu==1)
	//Inch to Centimeter
	{
		printf("Enter Inch to Convert\n");
		printf("Inchs= ");
		scanf("%f", &number1);
		number1= inches;
		sum= number1 * 2.54;
		printf("Centimeters= %f", sum);
	}
	
	else if(menu==2)
	//Centimeter to Inch
	{	
		printf("Enter Centimeter to Convert\n");
		printf("Centimeters= ");
		scanf("%f", &number1);
		sum= number1 / 2.54;
		printf(" Inches= %f", sum);
	}
	
	return 0;
}

