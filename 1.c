#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  //sacnfの戻り値を確認して正しく入力されているかを確かめる
   if (scanf("%d", &n) != 1) {
    printf("入力エラーが発生しました。\n");
    return 1; // エラーコードを返してプログラムを終了する
  }

   //先にnの最下位のビットを調べてから、それが0かどうかを判断させるため
  if( (n & 1) == 0 ){
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
