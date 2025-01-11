/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//traingle pattern printing element 0 and 1

#include <stdio.h>
int main()
{
	//getting total no. of row
	int row;
	printf("enter your row no. : ");
	scanf("%d",&row);
	
	//for tacing each row
	for(int i=1;i<=row;i++){
		//to tace each column of a row
		for(int j=1;j<=i;j++){
			int x=i+j;//to store sum of row and col of an element to decied what should we print at that location 0 or 1
			if(x%2==0){
				printf("1");
				}else{
					printf("0");
				}
				}
				printf("\n");//change line after each row completation
			
		}
	return 0;
}