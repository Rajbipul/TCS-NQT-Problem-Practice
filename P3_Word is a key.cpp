#include <iostream>

using namespace std;

int main(){
    vector<string> key = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};

    int n= key.size();

    string check;
    cin>> check;

    bool isok= false;

    for(int i=0; i<n; i++){
        if(check==key[i]){
            cout<< check<< " is a keyword";
            isok= true;
            break;
        }
    }
    if(isok==false){
        cout<< check<< "is not a keyword";
    }
    return 0;
}
