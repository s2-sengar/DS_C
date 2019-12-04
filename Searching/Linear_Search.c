#include<stdio.h>
int linear_search(int [],int,int);
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
    i=linear_search(arr,n,s);
    if(i>0)
    {
        printf("No. found on %dth Location\n",i+1);
    }
    else
    {
        printf("N0. Not Found\n");
    }
}
int linear_search(int arr[],int n,int s)
{
    int i=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            break;
        }
    }
    return i;
}
