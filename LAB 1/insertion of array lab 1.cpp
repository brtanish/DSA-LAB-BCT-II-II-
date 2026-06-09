#include<iostream>
using namespace std;
int main()
{
    int arr[50]={10,20,30,40,50};
    int n=5;
    int value=25;
    int index=2;

    cout<<"Array before insertion looks like:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    for(int i=n; i>index; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[index]=value;
    n++;

    cout<<endl<<"Array after insertion looks like:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}