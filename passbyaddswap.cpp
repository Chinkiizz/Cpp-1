#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    cout<<*x<<endl<<*y;

}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);

}
