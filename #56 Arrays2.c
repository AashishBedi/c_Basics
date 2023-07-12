#include<stdio.h>
int main(){
	float price[3];
	printf("Rice: ");
	scanf("%f", &price[0]);
	printf("Oats: ");
	scanf("%f", &price[1]);
	printf("Wheat: ");
	scanf("%f", &price[2]);
	
	printf("Rice = %f, Oats = %f, Wheat = %f", price[0]+(0.18*price[0]), price[1]+(0.18*price[1]), price[2]+(0.18*price[2]));
	return 0;
}
