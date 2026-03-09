#include <iostream>

using namespace std;
int main(){
    int n=6;
    //cin>>n;

    vector<int> arr (n, 1);
    int x=0;
    int y=n-1;
    for(int i=0; i<n; i++){
        int check;
        cin>>check;
        if(check==0){
            arr[x]=arr[x]-1;
            x++;
        }else if(check==2){
            arr[y]=arr[y]+1;
            y--;
        }
    }

    for(int i=0; i<n; i++){
        cout<< arr[i];
    }

    return 0;
}
