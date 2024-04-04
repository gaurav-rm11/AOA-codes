#include<iostream>
using namespace std;
int main(){
int a[]= {5,7,2,9,1,0};
int temp=0;
int j;
for (int i = 1; i < 6; i++)
{
    temp=a[i];
    j=i-1;
    while (j>=0 && a[j]>=temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}

for (int i = 0; i < 6; i++)
{
    cout<<a[i];
}
return 0;
}