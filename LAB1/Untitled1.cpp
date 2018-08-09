#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cin>>n>>j;
    if(n%j==0)
    {
        cout<<"The entered no. is largest multiple";
    }
    else
    {
        while(n%j!=0)
        {
            n++;
        }
        cout<<"The next largest no. is..."<<endl<<n;
    }
    return 0;

}
