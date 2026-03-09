#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int sum=1;
    int check=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>check){
            sum++;
            check=arr[i];
        }
    }

    cout<< sum;

    return 0;
}
