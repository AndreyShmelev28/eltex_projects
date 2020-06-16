#include <stdio.h>

int main(void){

	int full = 0x00DDBBCC;
	unsigned char part;
	short i = 1;
	while (i <= 4){
		part = full & 0x000000FF;
		printf("byte number %d is %x\n", i, part);
		full = full >> 8;
		i++;
	}
	return 0;
}
