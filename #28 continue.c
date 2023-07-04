//WAP to use continue statement
#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for(i=1; i<=10; i++){
		if(i == 3){
			continue;
		}
		printf("%d\n", i);
	}
	return 0;
}
