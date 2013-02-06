#include <stdio.h>

#define MAXCHARO 500
#define MAXCHARN 900
#define TABLE 4

void getText(char s[], int lim){
  int i = 0;
  char c;
  while((c=getchar()) != EOF){
    s[i] = c;
    i++;
  }
  s[i] = '\0';
}

void printtext(char s[]){
  int i = 0;
  char c;
  while((c=s[i]) != '\0'){
    putchar(c);
    i++;
  }
  putchar('\n');
}
//此处s[index]不能作为判断数组终点的依据
//因为数组未初始化之前索引对应的值都为'\0'
int fillspace(char s[], int index, int num){
  //while(s[index] != '\0' && num > 0){
  while(index < (MAXCHARN-1) && num > 0){
    s[index] = '*';
    index++;
    num--;
  }
  //最后一次,返回结尾的索引因为在while循环里多加了1
  return index - 1;
}

int main(void){
  int i, j;
  char incharo[MAXCHARO], incharn[MAXCHARN], c;

  for(i=0; i<MAXCHARO - 1; i++){
    incharo[i] = 0;
  }
  for(i=0; i<MAXCHARN - 1; i++){
    incharn[i] = 0;
  }

  getText(incharo, MAXCHARO);
  printtext(incharo);

  for(i=0, j=0; i<MAXCHARO-1 && incharo[i] != '\0'; i++, j++){
    c = incharo[i];
    if(c == '\t'){
      j = fillspace(incharn, j, TABLE);
    }else{
      incharn[j] = c;
    }
  }

  printtext(incharn);
}
