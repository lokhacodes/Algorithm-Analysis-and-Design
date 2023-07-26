#include<stdio.h>
int i,j,m,n,e,v,a[10][10],visit[10],s,w;
int main(){
printf("enter the vertices : ");
scanf("%d",&v);
printf("enter the edges : ");
scanf("%d",&e);
for(i=1;i<=v;i++){
visit[i]=0;
for(j=1;j<=v;j++){
a[i][j]=0;
}
}
printf("enter the edges : ");
for(i=1;i<=e;i++){
scanf("%d %d",&m,&n);
a[m][n]=1;
a[n][m]=1;
}
for(i=1;i<=v;i++){
for(j=1;j<=v;j++){
printf("%d",a[i][j]);
}
printf("\n");
}
printf("Source : ");
scanf("%d",&s);
i=s;
printf("T={");
while(visit[i]==0){
    dfs(i);}
i++;
printf("}");
return 0;
}
void dfs(int u){
visit[u]=1;
for(w=1;w<=v;w++){
    if(a[u][w]==1){
        if(visit[w]==0){
            printf("(%d,%d)",u,w);
            dfs(w);
}}}}   

