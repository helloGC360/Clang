#include<stdio.h>

int main()
{

    int m,n;
    printf("enter row no. : ");
    scanf("%d",&m);
    printf("enter col no. : ");
    scanf("%d",&n);
    
    int arr[m][n];
    printf("\n\n\n\n");
    
    
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
    }
    printf("row no. : %d \n",i);
    }
    
    
    printf("your matrix :- \n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%d  ",arr[i][j]);
    }
    printf("\n");
    }
    
    
    printf("\n\n\n\n");
    printf("spiral form :- \n");
    int r=m-1;
    int c=n-1;
    int x=0;
    for(x=0;x<=r && x<=c;x++){
    
    for(int i=x;i<=r-x;i++){
    printf("%d  ",arr[x][i]);
    }
    printf("\n");
    for(int i=x+1;i<=c-x;i++){
    printf("%d  ",arr[i][r-x]);
    }
    printf("\n");
    for(int i=c-x-1;i>=x;i--){
    printf("%d  ",arr[r-x][i]);
    }
    printf("\n");
    for(int i=r-x-1;i>=x+1;i--){
    printf("%d  ",arr[i][x]);
    }
    printf("\n");
    }
    
    
    
    
    return 0;
}