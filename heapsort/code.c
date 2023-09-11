#include <stdio.h>

int main() {
int N;
printf("Enter the number of elements: ");
scanf("%d", &N);
int A[N];
printf("Enter %d elements:\n", N);
for (int i = 0; i < N; ++i)
scanf("%d", &A[i]);
heapSort(A, N);
printf("Sorted array\n");
printArray(A, N);
return 0;
}

void heapify(int A[], int N, int i) {
int larg = i;
int l = 2*i;
int r = 2*i+1;
if (l < N && A[l] > A[larg])
larg = l;
if (r < N && A[r] > A[larg])
larg = r;
if (larg != i) {
int temp = A[i];
A[i] = A[larg];
A[larg] = temp;
heapify(A, N, larg);
}

}
void heapSort(int A[], int N) {
for (int i = N / 2 - 1; i >= 0; i--)
heapify(A, N, i);
for (int i = N - 1; i > 0; i--) {
int temp = A[0];
A[0] = A[i];
A[i] = temp;
heapify(A, i, 0);
}
}
void printArray(int A[], int N) {
for (int i = 0; i < N; ++i)
printf("%d ", A[i]);
printf("\n");
}