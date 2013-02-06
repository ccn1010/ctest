#include <stdio.h>

main(){
	int fahr;
	
	for(fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
	
	printf("==============================\n");
	
	int f;
	
	for(f = 300; f >= 0; f = f - 20){
		printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
	}
}
