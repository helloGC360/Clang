/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//decimal to binary conversion

#include <stdio.h>
int main()
{
	//getting a binary number
	int n;
	printf("enter your binary number:");
	scanf("%d",&n);
	
	
	
    int count =-1;//to count the total no. of digit in given binary to which we can creat multiplayer
    
	int m=2,res=0,x=1;//m is the base no. of binary initialize with to but it will used as resultant multiplayer
	
	for(;n>0;n=n/10){
		int r=n%10;//to get digit is 0 or 1
		if(r==0 || r==1){//to check that all digit must be 0 or 1 otherwise input is not binary
		count ++;//to count were we are in int the digit locaton
		//generating of multiplayer in each condition
			if(count==0){
				m=1;
				}else if(count==1){
					m=2;
					}else{
				for(int j=1;j<=count-1;j++){
					m=m*2;
					}
					}
					//making our resultant
		res=res+(r*m);
			m=2;
			x=1;
			}else{//if its not binary then show msg accordingley
				x=0;
				break;
				}
		}
		
		
		//printing of decimal no.
		if(x==1){
			printf(" in decimal it is : %d ",res);
			}else{
			printf("invalid input");
				}
	return 0;
}