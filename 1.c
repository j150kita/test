#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");

   if (scanf("%d", &n) != 1) {
    printf("入力エラーが発生しました。\n");
    return 1; // エラーコードを返してプログラムを終了する
  }
  
  if( (n & 1) == 0 ){
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
