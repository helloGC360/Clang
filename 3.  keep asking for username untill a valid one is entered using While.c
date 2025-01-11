/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//keep asking username untill a valid name is entered//



#include <stdio.h>

int main()
{
	char str[50];//to store name
	int count=0;//to store total no. of character in string
	int keep_ask=1; //used for conditon if its 1 then keep ask if its other then dont ask 
	int i=0;//act as index to trace each element of string
	while(keep_ask==1){
		printf("enter your name : ");
		scanf("%s",&str);//to get input
		while(str[i]!='\0'){
			count++;
			i++;
			if(count>=8){//if sting have 8or more than 8 then its is correct amd stop asking
				keep_ask=0;
				count=0;
                //if correct then show this is acceptabpe
                 printf("This is acceptable");
				break;
				}
			}
		}
		
		
	return 0;
}