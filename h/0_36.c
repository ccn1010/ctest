#include <stdio.h>

double steal(double interest){
  double ni = interest*100;
  int n = (int)ni;
  double res = ni-n;
  return res/100;
}

int main(void){
  double res;
  res = steal(1.23456789);
  printf("%lf\n", res);
}
