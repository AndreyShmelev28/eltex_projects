#include <stdio.h>

int main(){
	
	int n = 270533154;
	char *p = &n;
	short counter = 1;
	while (counter < 6){
	printf("%d byte of number is %d\n ",counter, *p);
	p++;
	counter++;
	}
	
	return 0;
}