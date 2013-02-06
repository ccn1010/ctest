#include <stdio.h>

void reverse(char s[]);

void itob(int n, char s[], int b){
  int j=0;
  for(; n>b; n /= b){
    int i = n%b;
    s[j] = i+'0';
    j++;
  }
  s[j] = n+'0';
  s[j+1] = '\0';
  reverse(s);
}

int getlen(char s[]){
  int i=0;
  while(s[i] != '\0'){
    i++;
  }
  return i;
}

void reverse(char s[]){
  int len = getlen(s);
  char c;
  for(int i=0, j=len-1; i<=j; i++,j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

int main(void){
  char s[20];
  int n = 13, b = 2;
  itob(n, s, b);
  for(int i=0; s[i]!='\0'; i++){
    printf("%c", s[i]);
  } 
  printf("\n");
}
