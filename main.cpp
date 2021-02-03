#include<bits/stdc++.h>
using namespace std;
//int *fun(int *arr, int n);
void fun(int *arr, int n);

int main(){
    int arr[] = {3, 2, 5, 6, 7, 1, 7, 4, 3, 6, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // sort(arr, arr+n);
    // int *p;
    // p = fun(arr, n);
    
    fun(arr, n);
    cout<<endl;
    for(int i = 0; i < n; i++){
        //cout<<*(p+i)<<" ";
        cout<<arr[i]<<" ";
    }
}




/* Insertion_Sort
void fun(int *arr, int n){
    
    // for(int i = 1; i< n; i++){
    //     int hole = i;
    //     while(hole > 0 && arr[hole] < arr[hole-1]){
    //         swap(arr[hole], arr[hole-1]);
    //         hole-=1;
    //     }
    // }
    
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole-1] > curr){
            arr[hole] = arr[hole-1];
            hole-=1;
        }
        arr[hole] = curr;
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
*/

/* Selection_Sort
int min_index(int *arr, int n, int pos){
    int min = pos;
    for(int i = pos+1; i < n; i++){
        if(arr[min] > arr[i]){
            min = i;
        }
    }
    return min;
}
void fun(int *arr, int n){
    for(int i = 0; i < n; i++){
        int idx = index(arr, n, i);
        if(idx != i){
            swap(arr[i], arr[idx]);
        }
    }
}
*/


/* bubble_sort
int fun(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}*/