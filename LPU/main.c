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

int main()
{
    int n;
    printf("Enter the no of process: \t");
    scanf("%d",&n);
    int id[n],arr_time[n],bur_time[n],check[n],serial[n];;

    //clrscr();
    for(int i=0;i<n;i++)
    {
        printf("Enter the process id: \t");
        scanf("%d",&id[i]);
        printf("\nEnter the Arrival time: \t");
        scanf("%d",&arr_time[i]);
        printf("\nEnter the Burst time: \t");
        scanf("%d",&bur_time[i]);
    }
    for (int i = 0; i < n; i++) {
        check[i] = arr_time[i];
    }
    bubbleSort(arr_time, n);
    for(int i=0;i<n;)
    {
        for(int j=0;j<n;) {
            if (check[i] == arr_time[j]) {
                serial[i] = j;
                i++;
            }
            else
            j++;
        }
    }

    printf("Process id\tArrival time\tBurst time\n");
    for(int i=0;i<n;i++) {
        int b=serial[i];
        printf(" %d    \t      %d    \t         %d\n",id[b],arr_time[i],bur_time[b]);

    }








}
