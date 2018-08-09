#include<iostream>
#include<stdio.h>
using namespace std;
int str(char *name)
{
    int i=0;
    while(*name!='\0')
    {
        i++;
        name++;
    }
    return i;
}
int main()
{
    char names[50];
    gets(names);
    int a=str(names);
    cout<<endl<<a;
    return 0;
}
