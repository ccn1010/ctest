#include <stdio.h>

int any(char s1[], char s2[]){
  int i, j;
  for(i=0; s2[i] != '\0'; i++){
    for(j=0; s1[j] != '\0'; j++){
      if(s2[i] == s1[j]){
        return j;
      }
    }
  }
  return -1;
}

int main(void){
  char s1[] = "abcde";
  char s2[] = "jklab";
  int res = any(s1, s2);
  printf("Result: %d\n", res);
}
