#include<stdio.h>
#include<string.h>
 
#define MAXHIST 15
 
int main()
{
  int i,c,D[26];
  int maxvalue, len;
  memset(D, 0, sizeof(D));
  while((c = getchar()) != EOF)
    {
      c-='a';
      ++D[c];
    }
  maxvalue = 0;
  for(i = 0;i < 26;++i)
    {
      if(D[i] > maxvalue)
        {
          maxvalue = D[i];
        }
    }
  for(i = 0; i < 26; ++i)
    {
      printf("%c : ",i+'a');
      if((len = D[i] * MAXHIST / maxvalue) <= 0)
        {
          len = 1;
        }
      while(len--)
        {
          putchar('*');
        }
      putchar('\n');
    }
  return 0;
}
