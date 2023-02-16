#include <iostream>
using namespace std;

int main(){
    int i=0;
    int j,min,temp,minidex,n;
    int arr[10];

    if (i<n-1)
    {
        /* code */
        j=i;
        min=arr[i];
        minidex=j;
        temp=arr[j];
    }if (min>arr[j+1])
    {
        /* code */
        min=arr[j+1];
        minidex=j+1;
    }else if (j<n-1)
    {
        /* code */
        j++;
    }else{
        arr[i]=min;
        arr[minidex]=temp;
        i++;
    }
    
    
    
}