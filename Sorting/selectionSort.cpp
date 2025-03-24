#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

cout<<"Sorted array is:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<"\n";
}

int main(){
   int arr[]={23,67,78,2,4};
   int n=sizeof(arr)/sizeof (arr[0]);
   cout<<"Unsorted array is:"<<" ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<"\n";
   selectionSort(arr,n);


}