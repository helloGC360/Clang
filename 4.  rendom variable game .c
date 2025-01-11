/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//generate a random no. and take user inpit while enter no. was mached generated no. 


//to generate rendom variable we will use garbage value because it also rendom

#include <stdio.h>

int main() {
   
    int garb; //to get garbage value we do not asign any value to it
    
    //if garbage val is -ve then to make it +ve
    if(garb<0){
    	garb=(-1)*garb;
    	}
    
    
    int x=(garb%99)+1;//to get value between 1 and 99  its math
    
    printf(" your rendom variable %d  to hide this, go to source code line no. 25 and remove it \n \n",x);//just for check
    
    
    int i=1;//act as comdition in while loop
    while(i==1){
    	//for asking user to get number
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    
    //if no. mached
    if(num==x){
    	i=0;// to break the loop we can use break statemant directly
    	printf(" !! You Win !! the generated is also %d \n  :-) ",x);//fo winning
    	}else{
    		printf("nopp!!   not matched, guess again \n \n ");//on loosing
    		}
    	
    }
 
    
    return 0;
}