#include<iostream>
using namespace std;

int partition(int *a, int l, int h) {
    int pivot = a[l];
    int i = l + 1, j = h;
    do {
        while (i <= h && a[i] <= pivot) i++;
        while (a[j] > pivot) j--;
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i <= j);
    int temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
}


void quickSort(int *a, int l, int h){
    if(l<h){
        int j = partition(a, l, h);
        quickSort(a, l, j - 1); 
        quickSort(a, j + 1, h);
    }
}
int main(){
int a[]={4,8,2,1,9,6};
quickSort(a,0,5);
for (int i = 0; i < 6; i++)
{
    cout<<a[i];
}
return 0;
}