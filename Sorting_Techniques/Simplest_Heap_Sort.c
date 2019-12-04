#include<stdio.h>
void heap_sort(int [],int );//Main function to perform heap sort
void max_heapify(int [],int ,int);//Function to create Max heap
void main()
{
    int arr[20];
    int i,n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Data inside array\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    heap_sort(arr,n);
    printf("Array After Sorting\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void max_heapify(int arr[],int n,int i)
{
    int largest,rc,lc,temp;
    largest=i;
    lc=2*i;
    rc=2*i+1;
    while(lc<=n && arr[lc]>arr[largest])
    {
        largest=lc;
    }
    while(rc<=n && arr[rc]>arr[largest])
    {
        largest=rc;
    }
    if(largest!=i)
    {
        //swap value present in arr[large] and arr[i]
        temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;
        // call maxheapify again;
        max_heapify(arr,n,largest);
    }
}
void heap_sort(int arr[],int n)
{
    int i,temp;
    for(i=n/2;i>=1;i--)
    {
        max_heapify(arr,n,i);
    }
    for(i=n;i>=1;i--)
    {
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;
        n--;
        max_heapify(arr,n,1);
    }
}
