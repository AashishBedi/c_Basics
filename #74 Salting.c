/* Salting:
Method by which companies secure the password by adding some words incase a hacker hacks the system he donot get exact password */

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
	char password[100];
	scanf("%s", password);
	salting(password);
}

void salting(char password[]){
	char salt[] = "123";
	char newPass[200];
	
	strcpy(newPass, password);
	strcat(newPass, salt);
	puts(newPass);
}
