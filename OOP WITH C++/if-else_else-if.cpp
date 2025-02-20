#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }else if(a<b){
        cout<<"a is less than b";
    }else{
        cout<<"a is equal to b";
    }

    return 0;

}