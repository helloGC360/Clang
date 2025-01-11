//getting username while getting correct username  using C


#include <stdio.h>
int main()
{
	char name[20]; //store username
	int x=1;//used for condition that is username is correct
	
	
	int i=0;
   do{   
   printf("enter your name : ");
    scanf("%s",name);
		while(name[i] != '\0'){//to check the size of username
			i=i+1;
			}
			if(i>=8){ 
				x=0; //if username is more than 8 the iw will correct so put  x=0 to break condition 
				}else{
		printf("plz enter a valid name , name must contain atleast 8 character\n");
		//size is not more or equal to 8 then show this msg and get new input
					}
}while(x==1);

printf("\n \n !!  Thank you %s !! ",name);//if username is correct than print it with thank you msg
		return 0;
}