/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/


//teat string as array 

#include <stdio.h>
int main(){
	char str[50];
	printf("enter your string :");
	scanf("%s",&str);//getting string
	int count =0;
	
	//counting total length of string
	while(str[count] != '\0'){
		count++;
		}
		
		
		//printing the string in reverse order
		for(int i=count;i>=0;i--){
			printf("%c",str[i]);
			}
	return 0;
	}