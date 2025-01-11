
/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//to check a given no. is perfect or not

#include <stdio.h>
int main()
{
	//getting a number
	int n;
	printf("enter your number : ");
	scanf("%d",&n);
	int sum=0;
	
	
	
	for(int i=0;i<n;i++){
		if(n%i == 0){//getting all its  fector
			sum=sum+i; //adding fector in sum
		//	printf(" %d, ",i);
			}
		}
		
		
	//checking condition of perfect no. and print statement accordingly
		if(sum==n){
			printf("this is perfect no. ");
			}else{
			printf("this is perfect not a no. ");
				}
				
				
	return 0;
}