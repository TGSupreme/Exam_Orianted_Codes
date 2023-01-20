#include <stdio.h>
#include <stdlib.h>

/*Write a program to sort given array in ascending order (Use Insertion sort, Bubble sort,
Selection sort,Mergesort, Quicksort, Heapsort)
*/

void printArray(int arr[], int n);
void swap(int *a, int *b);
void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);


int main()
{
	int size,i;
	printf("How Many Element You Want To Enter: ");
	scanf("%d",&size);
	
    int arr[size];
    
    for(i=0;i<size;i++){
    	printf("\nEnter The Element [%d] : ",i+1);
    	scanf("%d",&arr[i]);
	}
	
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("\n\nOriginal Array: \n");
    printArray(arr, n);

    printf("\nSelect the sorting algorithm to use:\n\n");
    printf("1. Insertion Sort\n");
    printf("2. Bubble Sort\n");
    printf("3. Selection Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    printf("6. Heap Sort\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nSorted Array using Insertion Sort: \n");
        insertionSort(arr, n);
        break;
    case 2:
        printf("\nSorted Array using bubble Sort: \n");
        bubbleSort(arr, n);
        break;
    case 3:
        printf("\nSorted Array using Selection Sort: \n");
        selectionSort(arr, n);
        break;
    case 4:
        printf("\nSorted Array using Merge Sort: \n");
        mergeSort(arr, 0, n - 1);
        break;
    case 5:
        printf("\nSorted Array using Quick Sort: \n");
        quickSort(arr, 0, n - 1);
        break;
    case 6:
        printf("\nSorted Array using Heap Sort: \n");
        heapSort(arr, n);
        break;
    default:
        printf("Invalid choice.\n");
    }

    printArray(arr, n);

    return 0;
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(&arr[min_idx], &arr[i]);
    }
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }

        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


int partition(int arr[], int low, int high)
{
    int j,  pivot = arr[high];
    int i = (low - 1);

    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
