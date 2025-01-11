/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//printing traingle pattern having row no. is element

#include <stdio.h>
int main(){
	int n;
	printf("enter total no. of row : ");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){//to change row
		for(j=1;j<=i;j++){//to trace each column in row
			printf(" %d ",i);//to print element in each row and its column
			}
			printf("\n");//to get new line when one row get completed
		}
	return 0;
	}