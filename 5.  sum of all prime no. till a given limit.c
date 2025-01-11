/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//find sum of total prime no. till user is give


/* breaking the problem for more simplicity*/
//checking a given no. is prime or not to which run a loop from 1 to n check that which no divides perfectly of the n and count  all with count variable perfect divisers if count is less than equals to two then its prime otherwise not

//now run a loop to get all prime no. till user enter and add then inside the loop 
//and finally print them

#include <stdio.h>
int main()
{
	//to get range
	int x;
	printf(" enter your value till which you want to get some of prime  no.  :  ");
	scanf("%d",&x);
	
	
	//make a loop 2 to x to which we can identify which is prime one
	int i=2,j=1;
	int cprime;
	int sum=0;
	int count=0;
	do{
		  
		  do{
		  	if(i%j==0){
		  		count++;
		  		if(count>2){
		  			break;
		  			}else if(count==2 && i==j){
		  				cprime=i;
		  				printf("%d   ",i);
		  				}
		  		}
		  	j++;
		  	}while(j<=i);
		sum=sum+cprime;
		cprime=0;
		count=0;
		j=1;
		i++;
	}while(i<=x);
	
	printf("\n \n sum all prime till %d is %d ",x,sum);
	return 0;
}