#include <stdio.h>

main(){
	int c, nl, sl, tl;
	
	nl = 0;
	sl = 0;
	tl = 0;
	while((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tl;
		if(c == ' ')
			++sl;
	}
	
	printf("space: %d, tab: %d, newline: %d\n", sl, tl, nl);
}

