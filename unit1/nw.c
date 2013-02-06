#include <stdio.h>

#define IN 0
//编写一个程序,以每行一个单词的形式打印其输入
main(){
	int c, pre;
	pre = IN;
	
	while((c=getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			++pre;
		}
		else{
			pre = IN;
		}
		
		if(pre == IN){
			putchar(c);
		}
		else if(pre == 1){
			printf("\n");
		}
	}
}
