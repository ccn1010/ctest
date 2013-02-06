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
        printf("%d==========%d===============\n", wordlen, firstletter);
        if(maxval < wordlen){
          maxval = wordlen;
        }
        wordlen = 0;
      }
    }
  }

  printf("=================================%d\n", maxval);

  for(firstletter = 0; firstletter <= maxval; firstletter++){
    for(thisidx =0; thisidx <=10; thisidx++){
      inspace = lengtharr[thisidx];
      printf("inspace--%d", inspace);
      if(maxval-firstletter<inspace){
        printf("*");
      }
      else{
        printf("$");
      }
    }
  }

  printf("=================================");
}
