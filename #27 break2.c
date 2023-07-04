//Keep taking numbers as input until the entered number is multiple of 7
#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(i=1; i<= 10; i++){
		printf("%d\n", n*i);
		
		int a = n*i;
		if(a%7 == 0){
			break;
		}
	}
	printf("end");
	return 0;
}
