#include<iostream>

using namespace std;
int main(){
    int n;
    cin>> n;

    int x=0, y=0;
    // right turn always mean in +ve x axis
    // left turn always mean in -ve x axis

    int sum=10;
    for(int i=1; i<=n; i++){
        if(i%4==0){
            y -= sum;
            sum += 10;
        }else if(i%3==0){
            x -= sum;
            sum += 10;
        }else if(i%2 == 0){
            y+= sum;
            sum+=10;
        }else{
            x+= sum;
            sum+= 10;
        }
    }
    cout<< x<< " "<< y;
    return 0;
}
