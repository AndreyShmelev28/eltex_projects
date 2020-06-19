#include <stdio.h>

int main(){
	
	char a = 'A';
	char b = 'B';
	char *p1 = &a;
	char **p2 = &p1;
	
	printf ("Before **p2 = %c \n", **p2);
	*p2 = &b;
	printf ("After **p2 = %c", **p2);
	
	return 0;
}