// Are the following valid or not?


#include<stdio.h>
#include<math.h>
int main()
{
	int a = 8^8;  // valid
	int x; int y= x;  //valid
	int x,y = x;  //invalid
	char stars = '**';  //invalid
	return 0;
}
