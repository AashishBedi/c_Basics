#include<stdio.h>
#include<stdio.h>

typedef struct BankAccount{
	int accountNo;
	char name[100];
} acc;

int main(){
	acc acc1 = {121, "Aashish"};
	acc acc2 = {122, "Shradha"};
	acc acc3 = {123, "Ishaan"};
	
	printf("acc no = %d\n", acc1.accountNo);
	printf("acc name = %s\n", acc1.name);
	printf("acc no = %d\n", acc2.accountNo);
	printf("acc name = %s\n", acc2.name);	
	printf("acc no = %d\n", acc3.accountNo);
	printf("acc name = %s\n", acc3.name);
	
	return 0;
}
