#include <stdio.h>

void lower (char s[]){
  int i;
  for(i=0; s[i] != '\0'; i++){
    if(s[i] >= 'A' && s[i] <= 'Z'){
      s[i] = s[i] - 'A' + 'a';
    }
  }
}

int main(void){
  char s[] = "ABCD";
  lower(s);
  printf("%s\n", s);
}
