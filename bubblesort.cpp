#include<iostream>
using namespace std;

int main(){
int a[]={4,8,2,1,9,6};
for(int i=0; i<5; i++){
    for(int j=i+1; j<6; j++){
        if(a[i]>a[j]){
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
    }
}
for (int i = 0; i < 6; i++)
{
    cout<<a[i];
}

return 0;
}