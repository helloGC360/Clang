#include <stdio.h>
int main(){
    int m;
    printf("enter row : ");
    scanf("%d",&m);
    int n;
    printf("enter column : ");
    scanf("%d",&n);
    int crr[m];
    float arr[m][n];
    for(int i=0;i<m;i++){
    printf("row   %d \n",i+1);
    for(int j=0;j<n;j++){
    printf("A%d%d  :  ",i+1,j+1);
    scanf("%f",&arr[i][j]);
    }
    printf("\n");
    }
    
    
    printf("Your matrix is  ;- \n");
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf(" %f ",arr[i][j]);
    }
    printf("\n");
    }
    
    
    /*
    printf("\n \n after first reduction");
    */
    
    int k=1,count=0;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(arr[i][j]==0 && k==1){
    count++;
    }else{
    k=0;
    }
    }
    crr[i]=count;
    count=0;
    k=1;
    }
    
    /*
    for(int i=0;i<m;i++){
    printf("%d   ",crr[i]);
    }
    */
    
    printf("\n\n\n");
    
    for(int i=0;i<m;i++){
    for(int j=i+1;j<n;j++){
    if(crr[i]>crr[j]){
    int x=crr[i];
    crr[i]=crr[j];
    crr[j]=x;
    for(int c=0;c<n;c++){
    int te=arr[i][c];
    arr[i][c]=arr[j][c];
    arr[j][c]=te;
    }
    }else{}
    }
    }
   /* 
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    printf("%f ,",arr[i][j]);
    }
    printf("\n");
    }
    
    printf("\n\n\n");
    */
    
    
    
    
    
    printf("row echlon form of your matrix is :- \n");
    
   int i=0, j=0;
    while(i<m && j<n){
    if(arr[i][j]==0){
    j++;
    }else{
   for(int y=i+1;y<m;y++){
    float k = arr[y][j]/arr[i][j];
    for(int c=0;c<n;c++){
    arr[y][c]=arr[y][c]-(k*arr[i][c]);
    }
    }
    i++;
   k=1,count=0;
    for(int a=0;a<m;a++){
    for(int b=0;b<n;b++){
    if(arr[a][b]==0 && k==1){
    count++;
    }else{
    k=0;
    }
    }
    crr[a]=count;
    count=0;
    k=1;
    }
    
    
    for(int a=0;a<m;a++){
    for(int b=i+1;b<n;b++){
    if(crr[a]>crr[b]){
    int x=crr[a];
    crr[a]=crr[b];
    crr[b]=x;
    for(int c=0;c<n;c++){
    int te=arr[a][c];
    arr[a][c]=arr[b][c];
    arr[b][c]=te;
    }
    }else{}
    }
    
    }}}
    
    
    
    
    for(int a=0;a<m;a++){
    for(int b=0;b<n;b++){
    printf("%f ,",arr[a][b]);
    }
    printf("\n");
    }
    
    
    
    
    k=1,count=0;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(arr[i][j]==0 && k==1){
    count++;
    }else{
    k=0;
    }
    }
    crr[i]=count;
    count=0;
    k=1;
    }
    /*
    printf("\n\n toltal no. of zero in row : ");
    for(int i=0;i<m;i++){
    printf("%d",crr[i]);
    }
    */
    
  
    int l=0;
    for(int i=0;i<m;i++){
    if(crr[i]==n){
    l++;
    }
    
    }
    
    printf("\n\n\n rank of given matrix is : %d ",m-l);
    
return 0;
}