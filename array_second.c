#include <stdio.h>
#define N 9

int main(){

int a[N];

printf("Before:  ");

for (int i = 0; i < N; i++){
	a[i]=i+1;
	printf("%d ", a[i]);
}

printf("\n After:  ");

for (int i = N - 1; i >= 0; i--){
	printf("%d ", a[i]);
}
printf("\n");

return 0;
}
