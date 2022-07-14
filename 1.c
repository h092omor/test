#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //nの1ビット目が0であるかを判断するため、n&1を()で囲わなければならない
    printf("%d は偶数です\n", n);
  }
  return 0;
}
