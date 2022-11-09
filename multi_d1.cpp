/*
Creating a muptidirectional array
This is the one of the methods we can use
*/
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(){
    int x[3][4];
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>x[i][j];
        }
    }

    cin.get();
    return 0;
}