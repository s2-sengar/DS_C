#include<stdio.h>
int Binary_Search(int [],int ,int);
void main()
{
    int n,i,arr[20],s;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the no. you want to search: ");
    scanf("%d",&s);
    i=Binary_Search(arr,n,s);
    if(i>0)
    {
        printf("No. found on %dth Location\n",i+1);
    }
    else
    {
        printf("N0. Not Found\n");
    }
}
int Binary_Search(int arr[],int n,int s)
{
    int low,high,mid;
    low=0;
    high=n-1;
    mid=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==s)
        {
            return mid;
            break;
        }
        else if(arr[mid]>s)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return mid;
}
