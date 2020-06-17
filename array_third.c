#include <stdio.h>
#define N 4


int main(){

int a[N][N];
int diag = N - 1;

for(int i = 0; i < N; i++){
	for (int j = 0; j < N; j++){
		a[i][j] = ((i + j) < diag) ? 0 : 1;
		printf("%d ", a[i][j]);
	}
	printf("\n");
}

return 0;
}
