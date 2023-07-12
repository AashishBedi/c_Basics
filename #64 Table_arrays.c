//Arrays for table
#include<stdio.h>

void StoreTable(int arr[][10], int n, int m, int number);

int main(){
	int tables[2][10];
	StoreTable(tables, 0, 10, 2);
	StoreTable(tables, 1, 10, 3);
	
	int i;
	for(i=0; i<10; i++){
		printf("%d\t", tables[0][i]);
}
	for(i=0; i<10; i++){
		printf("%d\t", tables[1][i]);
		}
	return 0;
}

void StoreTable(int arr[][10], int n, int m, int number){
	int i;
	for(i=0; i<m; i++){
		arr[n][i] = number*(i+1);
	}
}
