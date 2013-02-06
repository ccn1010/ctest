#include <stdio.h>

#define MAXCHAR 500
//首先得到输入的字符串
void getText(char s[], int lim){
  int c, i;
  for(i=0; i<lim-1 && (c=getchar())!=EOF; i++){
    s[i] = c;
  }
  s[i] = '\0';
}
//递归得到双引号结尾的数组下标
int recursionQuote(char s[], int index){
  if(s[index] == '\"' || index >= (MAXCHAR-2))
    return index+1;
  else
    return recursionQuote(s, index+1);
}
//递归得到//注释结尾的数组下标
int recursionNewline(char s[], int index){
  if(s[index] == '\n'){
    return index+1;
  }
  else{
    return recursionNewline(s, index+1);
  }
}

//递归得到/*注释结尾的数组下标
int recursionAno(char s[], int index){
  if(s[index] == '/' && s[index-1] == '*')
    return index+1;
  else
    return recursionAno(s, index+1);
}
//删除指定长度num数组中的字符
void delchar(char s[], int index, int lim, int num){
  int i, t=0;
  for(i=0; i < lim-1; i++){
    t = index + num + i;
    s[index+i] = s[t];
    if((t >= lim-1) || s[t] == '\0'){
      break;
    }
  }
}
//打印数组
void printtext(char s[]){
  int i = 0;
  char c;
  while((c=s[i]) != '\0'){
    putchar(c);
    i++;
  }
}

int main(void){
  int i, tem;
  char inchar[MAXCHAR];
  char c;

  for(i=0; i<MAXCHAR-1; i++){
    inchar[i] = 0;
  }

  getText(inchar, MAXCHAR);
  printtext(inchar);

  for(i=0; i<MAXCHAR-1 && inchar[i] != '\0'; i++){
    c = inchar[i];
    if(c == '\"'){
      i = recursionQuote(inchar, i+1);
    }
    else if(c == '/' && inchar[i+1] == '/'){
      tem = recursionNewline(inchar, i+2);
      delchar(inchar, i, MAXCHAR, tem-i);
    }
    else if(c == '/' && inchar[i+1] == '*'){
      tem = recursionAno(inchar, i+2);
      delchar(inchar, i, MAXCHAR, tem-i);
    }
  }

  i = 0;
  while((c=inchar[i]) != '\0'){
    putchar(inchar[i]);
    i++;
  }
  printf("\n");

  return 0;
}
