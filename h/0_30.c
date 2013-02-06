#include <stdio.h>

int strlen(char *s){
  int i = 0;
  if(s == NULL)
    return i;
  while(s[i] != '\0')
    i++;
  return i;
}

int main(void){
  char *s = "abcd";
  int l = strlen(s);
  printf("the strlen return: %d\n", l);
}
