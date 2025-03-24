#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
          }
    }

    cout<<"Sorted array is:";
    for(int i=0;i< n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[]={23,67,78,2,4};
   int n= sizeof(arr)/sizeof (arr[0]);
   cout<<"Unsorted array is:"<<" ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<"\n";
   insertionSort(arr,n);
}

