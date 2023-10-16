int main() {

int A[100],n,i;
printf("enter no of elements in array :");
scanf("%d",&n);
printf("enter %d elements are: ",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
 printf("\n");
 qS(A, 0, n - 1);
printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

void qS(int A[], int start, int end) {
    if (start < end) {
        int pIndex = part(A, start, end);
        qS(A, start, pIndex - 1);
        qS(A, pIndex + 1, end);
    }
}

void swap(int A[], int a, int b) {
    int temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}

int part(int A[], int start, int end) {
    int pivot = A[end];
    int pIndex = start;

    for (int i = start; i < end; i++) {
        if (A[i] <= pivot) {
            swap(A, i, pIndex);
            pIndex++;
        }
    }

    swap(A, pIndex, end);
    return pIndex;
}

