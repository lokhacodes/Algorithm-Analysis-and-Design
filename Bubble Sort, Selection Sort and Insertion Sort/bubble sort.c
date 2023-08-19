# include<stdio.h>
bubbleSort(int num[], int n){
int i,j,temp;
for(i=0; i<n; i++){
for(j=0;j<n-1; j++){
if(num[j+1] < num[j]){
temp = num[j];
num[j] = num[j+1];
num[j+1] = temp;
}}}}
int main(){
int n, i;
printf("Enter the number of elements:");
scanf("%d", &n);
int num[n];
printf("Enter the elements: \n");
for (i = 0; i < n; i++) {
scanf("%d", &num[i]);
}
bubbleSort(num, n);
printf("Sorted array :\n");

for (i = 0; i < n; i++) {
printf("%d ",num[i]);
}
printf("\n");
return 0;

}
