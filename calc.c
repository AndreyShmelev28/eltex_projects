#include <stdio.h>


float sum(float, float);
float dif(float, float);
float com(float, float);
float div(float, float);

int main(){
	float p1, p2;
	int option = 0;
	while(option != 5){
	printf("Select operation: 1 - '+'; 2 - '-'; 3 - '*'; 4 - '/'; 5 - exit \n");
	scanf("%d", &option);
	switch (option){
		case 1:
		printf("Enter first number: ");
		scanf("%f", &p1);
		printf("Enter second number: ");
		scanf("%f", &p2);
		printf("Result --> %f\n", sum(p1, p2));
		break;
		case 2:
		printf("Enter first number: ");
		scanf("%f", &p1);
		printf("Enter second number: ");
		scanf("%f", &p2);
		printf("Result --> %f\n", dif(p1, p2));
		break;
		case 3:
		printf("Enter first number: ");
		scanf("%f", &p1);
		printf("Enter second number: ");
		scanf("%f", &p2);
		printf("Result --> %f\n", com(p1, p2));
		break;
		case 4:
		printf("Enter first number: ");
		scanf("%f", &p1);
		printf("Enter second number: ");
		scanf("%f", &p2);
		printf("Result --> %f\n", div(p1, p2));
		break;
		case 5:
		break;	
	}
	
	}
	
	
	return 0;
}

float sum (float p1, float p2){
	float res = 0;
	res = p1 + p2;	
	return res;
}

float dif (float p1, float p2){
	float res = 0;
	res = p1 - p2;	
	return res;
}

float com (float p1, float p2){
	float res = 0;
	res = p1 * p2;	
	return res;
}

float div (float p1, float p2){
	float res = 0;
	res = p1 / p2;	
	return res;
}