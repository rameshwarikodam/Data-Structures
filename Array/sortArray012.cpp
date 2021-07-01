/*
input arr[] = {1,0,1,2,0,1,2,0,0}
output arr = {0,0,0,0,1,1,1,2,2}
time ========== O(n)
space O(1)
*/
#include<iostream>
using namespace std;

void arraySort(int arr[],int size){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<size;++i){
         if(arr[i]==0)
            count0++;
        else if(arr[i]==1)
            count1++;
        else
            count2++;
    }
    int i=0;
    while(count0>0){
        arr[i++] = 0;
        count0--;
    }
    while(count1>0){
        arr[i++] = 1;
        count1--;
    }
    while(count2>0){
        arr[i++] = 2;
        count2--;
    }
}
void arraySortOptimul(int arr[],int size){
    int low=0,high=size-1, arrayIndex=0;
    while(arrayIndex<=high){
        switch(arr[arrayIndex]){
            case 0:
                swap(arr[low++],arr[arrayIndex++]);
                break;
            case 1:
                // swap()
                arrayIndex++;
                break;
            case 2:
                swap(arr[arrayIndex],arr[high--]);
                break;
        }
    }
}

int main(){
    int arr[9]={1,0,1,2,0,1,2,0,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    // arraySort(arr,size);
    arraySortOptimul(arr,size);
    cout<<"After sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}