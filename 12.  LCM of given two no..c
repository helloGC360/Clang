/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/



#include <stdio.h>
int main(){
	//getting two  no.
	int n,m;
	printf("enter  your 1st no. :");
	scanf("%d",&n);
	printf("enter  your 2nd no. :");
	scanf("%d",&m);
	

int num1=n,num2=m;
	int c=1;
	int HCF,LCM;
	
	
	//for hcm we need to clear about minimum of maximum no
	if(m<n){
		m=m+n;
		n=m-n;
		m=m-n;
		}
		
		
		//calculation of number
	while(c==1){
		int q=m%n;
		if(q==0){
			c=0;
			HCF=n;
			}
		m=n;
		n=q;
		}
		
		
		//maths formula to get LCM using HCF
		LCM=(num1*num2)/HCF;
	
	//printing of LCM
	printf("LCM of no. %d and %d is %d \n",num1,num2,LCM);
	
	
	//printf("HCF of no. %d and %d is %d",num1,num2,HCF);
	return 0;
	}