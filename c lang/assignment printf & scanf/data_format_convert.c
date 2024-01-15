#include <stdio.h>

int  main(void) {

    int x,y,z;
	printf("enter the data in given format \"DD/MM/YYYY\": ");
	printf("\nnote: DD, MM, YY should be in integer only \n");
	scanf("%d/%d/%d",&x,&y,&z);
	printf("Day - %d, Month - %d, Year - %d",x,y,z);
	printf("\n ");
	return 0;
}