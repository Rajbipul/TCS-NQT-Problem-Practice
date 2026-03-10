#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;

    int out=1;
    while(n>10){
        int j=n%10;
        out= out*j;
        n=n-j;
        n=n/10;
    }
    cout<< out*n;
    return 0;
}
