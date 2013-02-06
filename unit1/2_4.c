#include <stdio.h>

void squeeze(char s1[], char s2[]){
  int i;

  for(i=0; s1[i]!='\0'; i++){
    if(s1[i] == s2[i]){
      s1[i] = '*';
    }
  }
}

int main(void){
  char s1[] = "abcd";
  char s2[] = "tbyd";
  squeeze(s1, s2);
  printf("s1: %s, s2: %s\n", s1, s2);
}
