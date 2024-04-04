#include<iostream>
using namespace std;
void merge(int *a, int l, int h){
    int mid=(l+h)/2;
    int len1 = mid-l+1;
    int len2 = h-mid;

    int *first= new int[len1];
    int *second= new int[len2];

    int k=l;
    for (int i = 0; i < len1; i++)
    {
        first[i]=a[k++];
    }
    k=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=a[k++];
    }
     int index1=0;
     int index2=0;
     k=l;
     while (index1<len1 && index2<len2)
     {
        if(first[index1]<second[index2])
        a[k++]=first[index1++];
        else
        a[k++]=second[index2++];
     }
     while (index1<len1)    
     {
        a[k++]=first[index1++];
     }
     while (index2<len2){
        a[k++]=second[index2++];
     }
}
void mergesort(int *a, int l, int h){
    if(l<h){
        int mid= (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,h);
    }
}
int main(){
int a[]={4,8,2,1,9,6};
mergesort(a,0,5);
for (int i = 0; i < 6; i++)
{
    cout<<a[i];
}
return 0;
}