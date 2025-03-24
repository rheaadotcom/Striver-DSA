#include<iostream>
#include<vector>
using namespace std;


int parition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low,j=high;

    while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;
    }
    while(arr[i]>=pivot && j>=low+1){
        j--;
    }
    if(i<j) 
    swap(arr[i],arr[j]);
   }
   swap(arr[low],arr[j]);
   return j;
}
void qS(vector<int> &arr ,int low, int high){
    if(low<high){
        int pIndex=parition(arr,low,high);
        qS(arr,low,pIndex-1);
        qS(arr,pIndex+1,high);
    }
}
vector<int> quickSort(vector<int> arr) {
    qS(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}