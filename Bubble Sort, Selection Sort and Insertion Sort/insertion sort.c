#include<stdio.h>
int main(){

int A[10],N, K=0,TEMP,PTR;
  printf("Enter number of elements: ");
  scanf("%d", &N);

printf("Input A's elements:\n");

  for (int i = 1; i <= N; i++)
  {
    scanf("%d", &A[i]);
  }

 A[0]= -1;
 for (K=2;K<= N;K++){
TEMP= A[K];
PTR=K-1;
while (TEMP<A[PTR]) {

A[PTR+1]= A[PTR];
PTR= PTR-1;
}
A[PTR+ 1]= TEMP;
}
int MIN(int A[],int i,int n,int Loc)
{
    Loc = i;
    for(int j=i+1;j<=n;j++)
    {
        if(A[j]<A[Loc])
        {
            Loc=j;
        }
    }
    return Loc;
    }


 printf("Sorted list\n");

  for (int i = 1; i <= N; i++)
     printf("%d\n", A[i]);

  return 0;

}
