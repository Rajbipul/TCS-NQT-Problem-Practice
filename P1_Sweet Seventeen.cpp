#include<iostream>

using namespace std;
int main(){
    string check="23GF";
    int n= check.size();
    int sum =0;

    for(int i=0; i<n; i++){
        int l = check[n-i-1];
        if(l>57){
            int num = check[n-i-1] - 55;
            sum = sum + num*pow(17, i);
        }else{
            int num = check[n-i-1]-48;
            sum = sum + num*pow(17, i);
        }
    }
    cout<< sum << endl;
    return 0;
}
