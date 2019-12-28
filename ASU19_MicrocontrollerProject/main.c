#include "tm4c123gh6pm.h"
#include "fingerprint.h"
#include <stdio.h>
#include "systicktimerutil.h"

void init(void)
{
  systickTimerInit();
  initUart();
  emptyDatabase();

  // genImg();
//genImg();
//genImg();
}

void loop(void)
{
  volatile int stupid = 0;
  volatile uint32_t x = enroll(1);
  while (1)
  {
    x = search();
    if(x==1)
      break;
  }
}

int main()
{
  init();
  loop();
  return 0;
}
