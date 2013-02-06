#include <stdio.h>

#define MAXCHAR 5000
#define VALIDATECHAR 500


  void getText(char s[], int lim){
    int c, i;
    for(i=0; i<lim-1 && (c=getchar())!=EOF; ++i){
      s[i] = c;
    }
    s[i] = '\0';
  }

int endLine(int i, char s[], int lim){
  while(i<lim && c=s[++i] != '\n'){
  }
}

int endAnno(int i, char s[], int lim){
  int c;
  while(i<lim-1 && s[++i] != '*' && s[++i] != '/'){
  }
}

int validate(int i, char s[], char vt){
      while(s[++i] != vt){
        if(i == (MAXCHAR - 1)){
          return -1;
        }
      }
      return i;
}

int main(){
  int j, i, c, parenthesis, sb, cb, nsb;
  char inChar[MAXCHAR];
  char valChar[VALIDATECHAR];
  char temp = '0';

  j = i = parenthesis = sb = cb = nsb = np = 0;

  getText(inChar, MAXCHAR);

  for(;i<MAXCHAR;++i){
    temp = inChar[i];
    if(temp=='(' || temp==')' || temp=='[' || temp==']'
        || temp=='{' || temp=='}'){
      valChar[j] = temp;
      j++;
    }
    else if(temp == 39 || temp == 34){
      i = validate(i, inChar, temp);
      if(i == -1){
        printf("error u need double quote or single quote!\n");
        return 0;
      }
    }
    else if(temp == '/' && i < (MAXCHAR-1) && inChar[i+1] = '/'){
      i = endLine(i, inChar, MAXCHAR);
    }
    else if(temp == '/' && i < (MAXCHAR-1) && inChar[i+1] = '*'){
      i = endAnno(i, inChar, MAXCHAR);
    }
  }

  for(i=0; i<j; i++){
    c = inChar[j];
    if(c == '('){
	  np = j;
      ++parenthsesis;
    }
    else if(c == ')'){
      --parenthsesis;
	  if(cb != 0 && np < nsb){
		printf("error");
	  }
    }
    else if(c == '['){
	  nsb = j;
      ++sb;
    }
    else if(c == ']'){
      --sb;
	  if(cb != 0 && nsb < ){
		printf("error");
	  }
    }
    else if(c == '{'){
      ++cb;
    }
    else if(c == "}"){
      --cb;
	  if(cb != 0 && np < nsb){
		printf("error");
	  }
    }
  }
}














