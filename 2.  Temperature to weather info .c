/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//give weather info according to temp in C



#include <stdio.h>
int main()
{ //to store temo and getting it
	float temp;
	printf("enter temperature : ");
	scanf("%f",&temp);
	
	//to check temperature and giving weather info accordingilly
	if(temp<0){
		printf(" Freezing weather ");
		}else  if(temp<10){
		printf(" Very Cold weather ");
		}else  if(temp<20){
		printf(" Cold weather ");
		}else  if(temp<30){
		printf(" Normal in Temp ");
		}else  if(temp<=40){
		printf(" Its Hot ");
		}else  if(temp>40){
		printf(" Its very hot. ");
		}
		
		
	return 0;
}