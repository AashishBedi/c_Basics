//WAP to convert percentage of a student from marks in Science, Math & Sanskrit
#include<stdio.h>
#include<math.h>

float calcPer(float science, float math, float sanskrit);

int main(){
	float science = 98;
	float math = 78;
	float sanskrit = 85;
	printf("Percentage is: %f", calcPer(science, math, sanskrit));
	return 0;
}

float calcPer(float science, float math, float sanskrit){
	return (science + math + sanskrit)/3;
}
