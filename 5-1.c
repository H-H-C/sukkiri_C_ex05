#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  printf("あなたの運勢を占います\n");
  srand((unsigned)time(NULL));
  int fortune = rand() % 4 + 1;

  if (fortune == 1)
  {
    printf("大吉です\n");
  }
  else if (fortune == 2)
  {
    printf("中吉です\n");
  }
  else if (fortune == 3)
  {
    printf("吉です");
  }
  else
  {
    printf("凶です");
  }

  return 0;
}