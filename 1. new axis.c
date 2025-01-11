/*
Name-GULABCHANDRA MISTRI
roll. no. -24CSE42
*/

//point to quadrent C
#include <stdio.h>
int main()
{
	//get x and y coordinate and store them
	float x,y;
	printf("enter your x coordinate : ");
	scanf("%f",&x);
	printf("enter your y coordinate : ");
	scanf("%f",&y);
	
	
	//check condition for each quadrenr if given point stisfy then show that quadrent 
	if(x>0 && y>0){
        printf("( %f , %f ) is from 1st quadrent.",x,y);
		}else  if(x<0 && y>0){
       printf("( %f , %f ) is from 2nd quadrent.",x,y);;
		}else  if(x<0 && y<0){
       printf("( %f , %f ) is from 3rd quadrent.",x,y);
		}else if(x>0 && y<0){
       printf("( %f , %f ) is from 4th quadrent.",x,y);
			}else if(x==0 && y==0){
       printf("( %f , %f ) is origin",x,y);     
            }else{
       printf("( %f , %f ) is lie on axis",x,y);
            }
			
			return 0;
}