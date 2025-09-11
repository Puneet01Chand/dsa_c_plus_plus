#include <iostream>
using namespace std;

int main(){
    // -------------- Star Pattern ------------
    int n = 4;
    std::cout<<"-------------- Star pattern ------------"<<endl;

    for(int i =1;i<=n;i++){
        for(int j = 1; j<=n;j++){
             std::cout<<"*"<<" ";
        }
        std::cout<<endl;
    }
    
    return 0;
}

