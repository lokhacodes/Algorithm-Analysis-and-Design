#include<stdio.h>
int main(){
int i,j,m ,n,e,v, a[10][10];
printf("Enter the number of ver: ");
scanf("%d",&v);
printf("Enter the number of edg: ");
scanf("%d",&e);
for(i=1;i<=v;i++){
 for(j=1;j<=v;j++){                                                      OutPut :
 a[i][j]=0;
 }
 }
for(i=1;i<=e;i++){
 printf("Enter the edges: ");
scanf("%d%d",&m,&n);
 a[m][n]=1;
  a[n][m]=1; }
for(i=1;i<=v;i++){
 for(j=1;j<=v;j++){
printf("%d",a[i][j]);
 }
 printf("\n");
 } }

