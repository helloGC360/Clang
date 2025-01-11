/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//deleating an element from array which is on the certain index given by user


#include <stdio.h>
int main()
{
   //getting size of array
     int n;
   printf("enter size of array : ");
   scanf("%d",&n);
   
   
   //getting element of array
	int arr[n];
	printf("enter your array  element :- \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		
		//geting position to delete that spacific  element
	int p;
	printf("\n \n Input the position where to delete : ");
   scanf("%d",&p);
   
   //tracing of array using foor loop
	for(int i=0;i<n;i++){
		if(i>=p-1){ //if we got that index then remove that element from array and shift all next element by 1 
			arr[i]=arr[i+1];
			if(i==n-1){
				arr[i]=0;//since last position get vacent so put it zero
			}
		}
	}
	
	
	//printing of array after deleting of that element
	
	for(int i=0;i<n-1;i++){
		printf("%d  ,  ",arr[i]);
		}
		
	return 0;
}