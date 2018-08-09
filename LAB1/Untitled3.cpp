#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,x,n;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<10;b++)
        {
            if(a==b)
            {
                break;
            }
            x=a*1100+b*11;
            n=sqrt(x);
            if(n*n==x)
            {
                cout<<"No. is "<<x<<endl<<"which is square of "<<n<<"....\n";
            }
        }
    }
    return 0;
}
