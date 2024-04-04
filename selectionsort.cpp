#include<iostream>
using namespace std;
int main(){
int a[]= {5,7,2,9,1,0};
int min=0;
for (int i = 0; i < 5; i++)
{
    min=i;
    for (int j = i+1; j < 6; j++)
    {
        if(a[j]<a[min])
        min=j;
    }
    if(min!=i){
        a[i]=a[i]+a[min];
        a[min]=a[i]-a[min];
        a[i]=a[i]-a[min];
    }
}
for (int i = 0; i < 6; i++)
{
    cout<<a[i];
}
return 0;
}