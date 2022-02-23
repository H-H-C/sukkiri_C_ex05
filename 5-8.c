#include <stdio.h>

int main(void)
{
  printf("1〜4までカウントします\n");
  printf("1\n");
  goto END;
  printf("2\n");
  printf("3\n");
  printf("4\n");
END:
  printf("カウント終了");

  return 0;
}