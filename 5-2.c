#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("あなたの運勢を占います\n");
  srand((unsigned)time(NULL));
  int fortune = rand() % 4 + 1;

  switch (fortune)
  {
  case 1:
    printf("大吉です");
    break;
  case 2:
    printf("中吉です");
    break;
  case 3:
    printf("吉です");
    break;

  default:
    printf("凶です");
    break;
  }

  return 0;
}