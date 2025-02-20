#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"enter the value to test: ";
    cin>>number;

    if(number % 2 ==0){
        cout<<"the number is even"<<endl;
    }else{
        cout<<"The number is odd";
    }
}
