#include <stdio.h>
#include <string.h>


/*Костыльная версия справочника, абсолютно небезопасная, т.к. не контролируется пользовательский ввод */

struct person{
	char name[20];
	int number;
};

struct person per[10];
int option = 1;
char help[] = "Select option: \n 1 - Create new user \n 2 - List of users \n 3 - Find user for number \n 4 - Delete user \n 5 - Menu \n 0 - exit \n";
int counter = 0;
int find_number = 0;

int main(){
	printf("%s \n", help);
	while (option != 0){		
		scanf("%d", &option);
		switch (option){
			case 1:
			printf("Enter free position to create or filled for rewrite \n");
			scanf("%d", &counter);
			printf("Enter new name \n");
			fflush(stdin);			
			scanf("%s", &per[counter - 1].name);
			printf("Enter new number \n");
			scanf("%d", &per[counter - 1].number);
			fflush(stdin);
			printf("Succes! \n");
			break;
			case 2:
			for (int i = 0; i < 10; i++){
				printf("%d - Name: %s; Number: %d; \n", i + 1, per[i].name, per[i].number);
			}
			break;
			case 3:
			printf("Enter a number \n");
			scanf("%d", &find_number);
			for (int i = 0; i < 10; i++){
				if (find_number == per[i].number){
					printf("His name is %s\n", per[i].name);				
				}				
				
			}
			break;
			case 4:
			printf("Enter the number in the list to delete \n");
			scanf("%d", &counter);
			for (int i = 0; i < strlen(per[counter-1].name); i++){
			per[counter - 1].name[i] = 0;
			}
			per[counter - 1].number = 0;
			break;
			case 5:
			printf("%s \n", help);
			break;
			
		}
		
	}
		
	
	return 0;
}
