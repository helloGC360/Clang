
/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/


//finding 2nd smallest element in aray;
#include <stdio.h>
int main()
{
	
	//take input size of array
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);
	
	//inpur array element
	int arr[n];
	for(int c=0;c<n;c++){
		scanf("%d",&arr[c]);
		}
		
	//find first smallest value using nested loop 

	int min1; //to store 1st min value
	//to get ist min value by compairing each element by other one
	for(int i=0;i<n ;i++){
		for(int j=0;j<n ;j++){
			if(arr[i]>arr[j]){//selecting smallest element on each comapiring
				int x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
				}
				min1=arr[i]; //storing smallest element
			}
		}
	//after this loop the value stored in it is the ist smallest value of array
	
	
	
	
	
	int min2;//to store 2nd min value
	
	//to get secomd mean value
	for(int i=0;i<n ;i++){
		for(int j=0;j<n ;j++){
		
		//if any array element is eual to ist mean then dont process then because we want anathor min value
		if(arr[i]==min1 || arr[j]==min1){
			continue;//to protect passing of 1st mean value
		}
			if(arr[i]>arr[j]){
		         int x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
				}
				min2=arr[i];//storing of mean value on each comparision
		
			}
		}
	
	
	//printing of second mean value
	printf("\n 2nd min value of array is %d",min2);
	
	return 0;
}