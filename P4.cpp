#include <iostream>

using namespace std;
// 4 5 0 6 0 0 2 0
// 4 5 0 1 9 0 5 0
// 6 0 1 8 0 2
int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int ptr=0;
    for(int i=1; i<n; i++){
        if(arr[ptr]==0 && arr[i]!=0){
            swap(arr[ptr], arr[i]);
            ptr++;
        }else if(arr[ptr]!=0){
            ptr++;
        }
    }
    for(int x : arr){
        cout<< x<< " ";
    }
    return 0;
}
