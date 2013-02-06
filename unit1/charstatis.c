#include <stdio.h>

#define AZ 26

main(){
  int c;
  int arr[AZ];
  int i = 0;
  int temp = 0;

  for(i = 0; i<AZ; i++){
    arr[i] = 0;
  }

  while((c=getchar()) != EOF){
    if(c >= 'a' && c <= 'z'){
      temp = arr[c-97] + 1;
      arr[c-97] = temp;
    }
  }

  for(i=0; i<AZ; i++){
    printf("%2d, ", arr[i]);
  }
}
