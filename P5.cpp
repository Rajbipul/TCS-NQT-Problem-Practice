#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n=12;
    //cin>> n;

    vector<int> arr;
    while (n!=1){
        if(n%2==0){
            arr.push_back(1);
            n=n/2;
        }else if(n%2==1){
            arr.push_back(0);
            n=n-1;
            n=n/2;
        }
    }
    arr.push_back(0);

    int j=arr.size();

    int sum=0;

    for(int i=0; i<j; i++){
        sum=sum+arr[i]*pow(2,i);
    }

    cout<< sum;
    return 0;
}
