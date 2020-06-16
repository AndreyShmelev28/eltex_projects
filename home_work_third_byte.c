#include <stdio.h>

int main(void){

int a = 0x11aabbdd;
int b = 0x0000ff00;
int res = a|b;
printf("It was %x\n Then %x\n", a, res);

return 0;
}
