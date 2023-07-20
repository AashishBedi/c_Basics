//WAP that inputs user's name and print its length
#include<stdio.h>
int Countlength(char arr[]);

int main(){
	char name[100];
	fgets(name, 100, stdin);
	printf("Length is: %d", Countlength(name));
	return 0;
}

int Countlength(char arr[]){
	int i;
	int count = 0;
	for(i=0; arr[i] != '\0'; i++){
		count++;
	}
	return count-1;
}
