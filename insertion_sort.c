#include<stdio.h>
void insertion_sort(int arr[],int size)
{
    int key,j;
    for(int i=1;i<size;i++)
    {
     key=arr[i]; 
     j=i-1;  
        while (j>=0 &&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    int arr[]={20,10,33,16,7,100};
    int size=6;
    insertion_sort(arr,size);
    display(arr,size);
};
/*This algorithm is a stable and adoptive*/