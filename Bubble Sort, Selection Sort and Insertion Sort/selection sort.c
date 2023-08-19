#include <stdio.h>

int main()
{
  int  n,i, j,Loc,temp;
  int A[100];
  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("A's elements:\n");

  for (i = 1; i <=n; i++)
  {
    scanf("%d", &A[i]);
  }
  for(i=1;i<=n;i++)
  {
     Loc= MIN(A,i,n,Loc);
      if(Loc!=i)
      {
          temp      = A[i];
          A[i]  = A[Loc];
A  [Loc]= temp;
      }
  }
  printf("Sorted list \n");

  for (i = 1; i <= n; i++)
     printf("%d\n", A[i]);

  return 0;
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
