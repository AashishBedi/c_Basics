//WAP to convert degree into fahrenheit temperature
#include<stdio.h>
#include<math.h>

float convertTemp(float celcius);

int main(){
	float fah = convertTemp(32);
	printf("Fahrenheit is: %f", fah);
	return 0;
}

float convertTemp(float celcius){
	float fah = celcius*(9/5)+32;
	return fah;
}

