/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//to print fibounachhi series

#include <stdio.h>
int main(){
	//getting the total no. of term
	int n; 
	printf("enter your total term of fibounachi series : ");
	scanf("%d",&n);
	
	
	int temp=0;//to store resultant
	int y=0;//first default fibounachi element
	int x=1;//2nd default fibounachi element
	printf("%d , ",y);//first term printing
	
	
	
//	to calculate other n term
	for(int i=1;i<n;i++){
		temp=y+x;//fibounachi element calculation property
		y=x;//storing  previous term of fibounachi for next calculation
		x=temp;//storing  current term of fibounachi for next calculation
		printf("%d , ",temp);//printing of fibounachi term on each calculation
		}
	return 0;
	}