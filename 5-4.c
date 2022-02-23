#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  const int DAIKICHI = 1;
  const int CHUKICHI = 2;
  const int KICHI = 3;
  const int KYO = 4;

  printf("あなたの運勢を占います\n");
  srand((unsigned)time(NULL));
  int fortune = rand() % 4 + 1;

  switch (fortune)
  {
  case DAIKICHI:
    printf("大吉です");
    break;
  case CHUKICHI:
    printf("中吉です");
    break;
  case KICHI:
    printf("吉です");
    break;
  default:
    printf("凶です");
    break;
  }

  return 0;
}