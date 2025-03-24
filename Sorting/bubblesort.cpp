#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
for(int i=n-1;i>=0;i--){
    for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
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
   bubbleSort(arr,n);


}

