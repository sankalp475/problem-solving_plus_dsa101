#include <stdio.h>
/**
 * & printf and scannf assignment
 */
int  main(void) {

/**
*&  que1: write a program to print hello students on screen
*/
    printf(" hello studets  \n");
/**
*&  que2: write a program to print hello in first line and students in second line
*/
    printf("hello\n students");
/**
*&  que3: write a program to print "MySirG" on screen (remember print in double quots)
*/
    printf("\n\"MySirG\"");
/**
*&  que4: write a program to print \n on screen
*/
    printf("\n \\n ");
/**
*&  que5: write a program to print \r on screen
*/
    printf("\n \\r ");
/**
*&  que6: write a program to print "Teacher's Day" on screen (remember print in double quots)
*/
    printf("\n \"Teacher's Day\"");
/**
*&  que7: write a program to print to calculate sum of two integers Number cn be taken from user throught keybord;
*/
    int num1,num2,sum;
    printf("\n Enter two numbers \n");
	scanf("%d %d",&num1,&num2);
    sum = num1 + num2;
	printf("the sum is = %d",sum);

/**
*&  que8: write a program to calculate square of a given number Number is enterd by the user.
*/
    int sqr;
	printf("\nEnter the number to get its squire: ");
    scanf("%d",&sqr);
	sqr = sqr*sqr;
	printf("the sqr is %d",sqr);
/**
*&  que9: write a program to calculate area of a given rectangle input appropriate data from the user.
*/
    int l,w,area;
    printf("\nEnter the length and the width to find the area of rectange. ");
	scanf("%d,%d",&l,&w);
	area = l*w;
	printf("the area of rectange is %d ", area);
/**
*&  que10: write a program to calculate area of a circle take the radius of circle from user as  input  and print the result in given formet.
*! expexted formet - "the area of circle A having the radius R". Replace the A and r with area and radius
*/
    int r;
    float a,PI=3.14159265359;
	printf("\nEnter the radus to find area of circle: ");
	scanf("%d",&r);
	// printf("64:- %f",radius);
	a=PI*r*r;
	printf("\nthe area of circle %f having the radius %d",a,r);

	printf("\n");return 0;
}