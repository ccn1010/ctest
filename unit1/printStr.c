#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void stri(char s[], int i);
void reverse(char s[]);
void detab(char s[]);

main(){
  int len;
  char line[MAXLINE];

  while((len = getline(line, MAXLINE)) > 0){
    stri(line, len-2);  //begin from array's size-1 and ignore new line(\n)
    printf("%s", line);
    reverse(line);
    printf("%s", line);
  }

  return 0;
}

int getline(char s[], int lim){
  int c, i;

  for(i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i){
    s[i] = c;
  }
  if(c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void stri(char s[], int i){
  if(s[i] == ' ' || s[i] == '\t'){
    s[i] = '*';
    i--;
    if(i<0){
      return;
    }
    stri(s, i);
  }
}

void reverse(char s[]){
  char ch;
  int i, j;

  for(j=0; s[j]!= '\0'; j++){}

  --j;

  for(i=0; i<j; i++){
    ch = s[i];
    s[i] = s[j];
    s[j] = ch;
    --j;
  }

  return;
}

