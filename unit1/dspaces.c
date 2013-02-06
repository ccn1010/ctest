#include <stdio.h>
/*一个将输入复制到输出的程序,并将其中连续的多个空格用一个空格代替
*/
main(){
	int c, pre;
	pre = 0;
	
	while((c=getchar()) != EOF){
		if(c == ' '){
			++pre;
		}
		else{
			pre = 0;
		}
		
		if(pre <= 1){
			putchar(c);
		}
	}
}
