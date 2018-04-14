void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int m)
{
    int i, j;
    for (i = 0; i < m-1; i++)

        // Last i elements are already in place
        for (j = 0; j < m-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

/* Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

 Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}


*/


int main()
{
    int n;
    printf("Enter the no of process: \t");
    scanf("%d",&n);
    int id[n],arr_time[n],bur_time[n];
    clrscr();
    for(int i=0;i<n;i++)
    {
        printf("Enter the process id: \t");
        scanf("%d",&id[i]);
        printf("\nEnter the Arrival time: \t");
        scanf("%d",&arr_time[n]);
        printf("\nEnter the Arrival time: \t");
        scanf("%d",&bur_time[n]);
    }
    int m = sizeof(arr_time)/sizeof(arr_time[0]);
    bubbleSort(arr_time, m);
    printf("Sorted array: \n");
//printArray(arr, n);
    clrscr();
    printf("Process ID\tArrival Time\tBurst Time\n");
    for(int i=0;i<n;i++)
    {
        print(" %d    \t    %d    \t    %d\n",id[i],arr_time[i],bur_time[i]);

    }










}
