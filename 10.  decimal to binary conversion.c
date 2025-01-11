
/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/


//decimal to binary conversion in C

#include <stdio.h>
int main()
{
	
	int n; //to store decimal no. 
	int tempbinary=0; //temperory binary in form of reverse of real binary
	int pre_zero_count=0; //to count pree zero while calculating temp_binary
	int c=1; //to count pre zero till a non zero remainder is found used in condition
	
   printf("enter your decimal no. : ");
   scanf("%d",&n);
 int s=n;//to save actual value of n;
 
 //convert into 0 1 firmate of given decimal no. till hole value getting zero
 
 while(n>0){
     int r=n%2;
     if(r==0 && c==1){
     	pre_zero_count++; //counting of pre zeo
     	}else if(r==1){
     		c=0; //if we get any non zero remaimder then stop counting of pre zero
     		}
 	tempbinary=tempbinary*10+r;
 	n=n/2;
 	}
 	
 	
 	//reversing of temp binary and store then into final binary
 	int final_binary=0;
 	while(tempbinary>0){
     int r=tempbinary%10;
 	final_binary=final_binary*10+r;
 	tempbinary=tempbinary/10;
 	}
 	
 	
 	//to get full and final binary because during calculation of tempbinary pre zero have no significance but on reversing it we need that thats why i count that 
 	
 	for(int i=1;i<=pre_zero_count;i++){
 		final_binary=final_binary*10;
 		}
 		
 		
 	printf(" your no. %d in binary is %d \n \n",s,final_binary);//to print final binary form of given decimal no.
	return 0;
}