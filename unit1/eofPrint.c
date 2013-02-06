#include <stdio.h>

main(){
	char c;
	c = getchar();
	c = getchar();
	printf("The EOF IS: %d\n", c);
	printf("EOF=%d\n", EOF);
	
	printf("EOF IS %d\n", (getchar() != EOF));
	printf("%d", 1==1);
}

