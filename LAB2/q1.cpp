#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    char name[20];
    char *s[1000];
    cout<<"Enter the no. of names..... ";
    cin>>n;
    int *a;
    a=&n;
    for(int i=0;i<*a;i++)
    {
        cin>>name;
        int len=strlen(name);
        s[i]=new char[len+1];
        strcpy(s[i],name);
    }
    for(int i=0;i<*a;i++)
    {
        cout<<endl<<s[i];
    }
}
