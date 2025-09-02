#include <iostream>
using namespace std;
int main(){
    // -------------- Star Pattern ------------
    // int n = 4;
    // std::cout<<"-------------- Star pattern ------------"<<endl;

    // for(int i =1;i<=n;i++){
    //     for(int j = 1; j<=n;j++){
    //          std::cout<<"*"<<" ";
    //     }
    //     std::cout<<endl;
    // }

    // -------------- Alphabet pattern ------------

    // int n = 4;
    // std::cout<<"-------------- Alphabet Pattern ------------"<<endl;
    // for(int i =0;i<n;i++){
    //     char ch = 'A';
    //     for(int j =0;j<n;j++){
    //         std::cout<<ch;
    //         ch = ch+1;
    //     }
    //     std::cout<<endl;
    // }

    // Squared pattern continue numbers
    /** int n = 3;
    int num = 1;
    std::cout<<"-------------- Coninue number pattern ------------"<<endl;
    // [ 1 2 4
    //   4 5 6    
    //   7 8 9 ]
        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<n; j++){
                std::cout<<num<<" ";
                num++;
            }
            std::cout<<endl;
        }
        
    return 0; 
    **/
    
    /* 
    
    // Squared pattern continue alphabets
    int n = 3;
    char alpha = 'A';
    std::cout<<"-------------- Coninue alphabet pattern ------------"<<endl;
    // [ A B C
    //   D E F    
    //   G H I ]
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<alpha<<" ";
            alpha++;
        }
        std::cout<<endl;
    }
    return 0;
    
    */
   


    /*
    
    //  Star pattern right angle triangle
    int n = 5;
    std::cout<<"-------------- Star pattern right angle triangle ------------"<<endl;
    //   * 
    //   * *     
    //   * * * 
    //   * * * *

    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<endl;
    }
    return 0;
    
    */
   
    //  Star pattern right angle triangle (i+1)

    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=0; j<i+1;j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<endl;
    }

    return 0;


    
}
