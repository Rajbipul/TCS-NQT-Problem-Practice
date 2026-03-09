#include <iostream>

using namespace std;
int main(){
    string day = "mon";
    //cin>> day;

    int n=19;
    //cin>> n;

    int num;
    for(int i=0; i<7; i++){
        if(day=="mon"){
            num=(n-6)/7;
        }else if(day == "tue"){
            num=(n-5)/7;
        }else if(day == "wed"){
            num=(n-4)/7;
        }else if(day == "thu"){
            num=(n-3)/7;
        }else if(day == "fri"){
            num=(n-2)/7;
        }else if(day == "sat"){
            num=(n-1)/7;
        }else if(day == "sun"){
            num=(n-0)/7;
        }
    }

    cout<< num+1;
    return 0;
}
