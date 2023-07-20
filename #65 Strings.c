#include<stdio.h>
void printString(char arr[]);

int main(){
	char Name[] = "AASHISH";
	char lname[] = "BEDI";
	
	printString(Name);
	printString(lname);

	return 0;
}

void printString(char arr[]){
	int i;
	for(i=0;arr[i] != '\0'; i++ ){
		printf("%c", arr[i]);
	}
	printf("\n");
}
