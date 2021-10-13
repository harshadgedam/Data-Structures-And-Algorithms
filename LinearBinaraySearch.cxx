#include <iostream>

using namespace std;
int binaraysearch(int arr[],int size,int element)
{
	int low=0,high=size-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid==element) return mid;
		if(mid<=element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
}
int linearsearch(int arr[],int size,int data)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==data)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[20]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(arr)/sizeof(int),element=5;
	int index=linearsearch(arr,size,element);
	printf("The Linear Search\nthe value %d at index : %d",element,index);
	int index2=binaraysearch(arr,size,element);
	printf("\nThe Binaray Search\nthe value %d at index : %d",element,index);
	
	return 0;
}
