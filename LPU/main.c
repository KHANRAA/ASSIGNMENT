
struct Process
{
    int pid,at,bt;
};
void swap1(double *xp,double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(double arr[],int arr1[] ,int n)
{
    int i, j;
    int min_idx;
    for (i = 0; i < n-1; i++)
    {

        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;


        swap1(&arr[min_idx], &arr[i]);
        swap(&arr1[min_idx], &arr1[i]);
    }
}

void sort1(struct Process *t,int p)
{
    int i,j;

    struct Process *q,s;

    for(i=0;i<p;i++,t++)
    {
        for(j=i+1,q=t+1;j<p;j++,q++)
        {
            if((t->at)>(q->at))
            {
                s=*t;
                *t=*q;
                *q=s;
            }
        }
    }
}

int main()
{
    int n;
    struct Process p[80];
    int at,bt;
    printf("Enter number of processes\n");
    scanf("%d",&n);


    printf("\nEnter Arrival Time --------------> Burst Time:\n");
    for(int i=0;i<n;i++)
    {
        printf("Arrival for ");
        printf("P%d:",i+1);
        scanf("%d",&p[i].at);
        printf("Burst for");
        printf("P%d:",i+1);
        scanf("%d",&p[i].bt);
        p[i].pid=i;
        p[i].pid=i+1;           //contains process number
    }


    int v=n-1;
    sort1(p,n);
    int a[n],b[n];
    int c[n];
    int r;
    printf("ProcessId\tArrival time\tBurst time\t");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t\t%d\t\t%d\n",p[i].pid,p[i].at,p[i].bt);
        a[i]=p[i].pid;
    }
    for(int i=0;i<n-1;i++)
    {
        b[i]=a[i+1];
    }
    int m=n-1;
    int t=0;

    if(0==p[0].at){
        printf("0");}
    else{
        printf("\n0         %d",p[0].at);
        t=t+p[0].at;
    }
    t=t+p[0].bt;
    printf("    P:%d      %d",p[0].pid,t);
    do{

        int e=0;

        for(int j=0;j<m;j++){
            for(int u=0;u<n;u++){

                if(b[j]==p[u].pid){

                    if(p[u].at<=t){

                        c[e++]=p[u].pid;
                    }}}
        }
        int l=e+1;
        double q[l];
        int z=4;
        for(int k=0;k<l-1;k++){
            for(int o=0;o<n;o++){

                if(c[k]==p[o].pid){

                    q[k]=1+(double)(t-p[o].at)/p[o].bt;

                }
            }
        }

        selectionSort(q,c,l-1);
        int f=c[0];

        for(int i=0;i<n;i++)
        {   if(e!=0){

                if(p[i].pid==f){
                    t=t+p[i].bt;
                }
            }
        }
        int w=5;
        if(e==0 && v>0){

            for(int i=0;i<n;i++)
            {	if(t<p[i].at){
                    t=p[i].at+p[i].bt;
                    printf("     %d     P:%d       %d",p[i].at,p[i].pid,t);
                    break;
                    w=9;
                }
            }
        }
        else{

            printf("    P:%d      %d",f,t);
            v--;}
        for(int i=0; i<m; i++)
        {
            if(b[i]==f)
            {
                for(int j=i; j<(m-1); j++)
                {
                    b[j]=b[j+1];
                }

                break;
            }
        }
        m=m-1;


    }while(m>0);

}