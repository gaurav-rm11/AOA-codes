#include<iostream>
using namespace std;
void binarysearch(int *a,int l, int h, int n){
    if(l<=h){
    int mid=(l+h)/2;
    if(a[mid]==n){
        cout<<n<<" is found in array";
    }
    else if(a[mid]>n){
        binarysearch(a,l,mid-1,n);
    }
    else{
        binarysearch(a,mid+1,h,n);
    }
    }
    else
    cout<<"not found";
}
int main(){
int a[]={2,5,7,19,34,43};
cout<<"array is :";
for (int i = 0; i < 6; i++)
{
    cout<<a[i]<<" ";
}
int n;
cout<<"\nenter number to find in array ";
cin>>n;
binarysearch(a,0,5,n);
return 0;
}