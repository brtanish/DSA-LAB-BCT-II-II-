#include<stdio.h>
int main()
{
	int arr[100]={10,20,30,40,50};
	int n=5;
	int pos=2;
	
	for(int i=pos; i<n-1; i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	
	printf("Array after deletion becomes:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}