#include<iostream>
using namespace std;
void min_max(int arr[],int len,int *mi,int *ma)
{
    int i;
    *mi=arr[0];
    *ma=arr[0];
    for(i=1;i<len;i++)
    {
        if(arr[i]>*ma)
        {
            *ma=arr[i];
        }
        if(arr[i]<*mi)
        {
            *mi=arr[i];
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers...";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mi,ma;
    min_max(arr,n,&mi,&ma);
    cout<<"The minimum no. is..."<<mi;
    cout<<endl<<"The maximum no. is..."<<ma;
    return 0;
}
