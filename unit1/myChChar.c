#include <stdio.h>

#define MAXWORDLEN 10

main(){
  int c;
  int inspace = 0;
  int lengtharr[MAXWORDLEN + 1];
  int wordlen = 0;

  int firstletter = 0;
  int thisval = 0;
  int maxval = 0;
  int thisidx = 0;

  for(thisidx = 0; thisidx<=MAXWORDLEN; thisidx++){
    lengtharr[thisidx] = 0;
  }

  while((c=getchar()) != EOF){
    if(c == ' ' || c == '\n' || c == '\t'){
      ++inspace;
    }
    else{
      ++wordlen;
      inspace = 0;
    }

    if(inspace == 1){
      if(firstletter <= MAXWORDLEN){
        lengtharr[firstletter] = wordlen;
        firstletter++;
        if(maxval < wordlen){
          maxval = wordlen;
        }
        wordlen = 0;
      }
    }
  }

  for(firstletter = 0; firstletter <= maxval; firstletter++){ 
    printf("%2d | ", maxval-firstletter+1);
    for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++){ 
      inspace = lengtharr[thisidx]; 
      if(maxval-firstletter<inspace){
        printf("* ");
      }
      else{
        printf("  ");
      }

    }
    printf("\n");
  }

  printf("   +");
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++){
    printf("---");
  }
  printf("\n    ");
  for(thisidx = 0; thisidx <= MAXWORDLEN; thisidx++){
    printf("%2d", thisidx+1);
  }
}

