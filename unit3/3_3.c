#include <stdio.h>

void expand(char s1[], char nstr[]){
  char s2[100];
  int i = 0;
  char c = s1[i];
  if(c=='-'){
    i++;
  }
  for(int j=0; s1[i]!='\0'; i++){
    if(s1[i] == '-'){
      if(s1[i+1] != '\0'){
        s2[j] = s1[i+1];
        j++;
        i++;
      }
      if(s1[i+1] != '\0' && s1[i+1] == '-'){
        s2[j] = s1[i];
        i++;
        j++;
      }
    }
    else{
      s2[j] = s1[i];
      j++;
    }
  }

  int index = 0;
  for(int j=0; s2[j] != '\0'; j++){
    if(j%2 == 0){
      char c = s2[j];
      nstr[index++] = c;
      do{
        c++;
        nstr[index++] = c;
      }while(c!=s2[j+1]);
    }
  }
}

void printstr(char str[]){
  for(int i=0; str[i]!='\0'; i++){
    printf("%c", str[i]);
  }
  printf("\n");
}

int main(void){
  char s1[] = "-a-dx-z";
  char s2[100];
  expand(s1, s2);
  printstr(s2);
  return 0;
}
