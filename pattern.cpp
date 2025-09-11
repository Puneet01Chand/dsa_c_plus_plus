#include <iostream>
using namespace std;
int main()
{
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


    /*
    
    //   -------------- Squared pattern continue numbers ------------

    //   1 2 4
    //   4 5 6
    //   7 8 9 
     int n = 3;
    int num = 1;
    std::cout<<"-------------- Coninue number pattern ------------"<<endl;

        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<n; j++){
                std::cout<<num<<" ";
                num++;
            }
            std::cout<<endl;
        }

    
    */

    /*

    //   -------------- Squared pattern continue alphabets ------------

    //   A B C
    //   D E F
    //   G H I 
    
    int n = 3;
    char alpha = 'A';
    std::cout<<"-------------- Squared pattern continue alphabets ------------"<<endl;
  
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<alpha<<" ";
            alpha++;
        }
        std::cout<<endl;
    }


    */

    /*

    //   -------------- Star pattern right angle triangle ------------
    //   *
    //   * *
    //   * * *
    //   * * * *
    
    int n = 5;
    std::cout<<"-------------- Star pattern right angle triangle ------------"<<endl;

    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<endl;
    }


    */

    //  -------------- Star pattern right angle triangle (i+1) ------------

    /* int n = 4;
    for(int i=0;i<n;i++){
        for(int j=0; j<i+1;j++){
            std::cout<<"*"<<" ";
        }
        std::cout<<endl;
    }

    */

    /*

    //   -------------- Star pattern right angle triangle with numbers ------------
    //   1
    //   2 2
    //   3 3 3
    //   4 4 4 4
    
    int n = 4;
    std::cout<<"-------------- Star pattern right angle triangle with numbers ------------"<<endl;

    for(int i = 0; i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<i+1;
        }
        std::cout<<endl;
    }


    */

    /*


    //  -------------- Star pattern right angle triangle with alphabets ------------

    //   A
    //   B B
    //   C C C
    //   D D D D

    int n = 4;
    char alpha = 'A';
    std::cout<<"-------------- Star pattern right angle triangle with alphabets ------------"<<endl;

    for(int i = 0; i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<alpha;
        }
        alpha++;
        std::cout<<endl;
    }



    */

    /*

    // -------------- Star pattern right angle triangle with numbers Part 2  ------------

    //   1
    //   1 2
    //   1 2 3
    //   1 2 3 4
    int n = 4;
    std::cout<<"-------------- Star pattern right angle triangle with numbers Part 2 ------------"<<endl;


    for(int i = 0; i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<j+1;
        }
        std::cout<<endl;
    }




    */

    /*
    

    // -------------- Reverse triangle pattern with numbers  ------------


    //   1
    //   2 1
    //   3 2 1
    //   4 3 2
    int n = 4;
    std::cout << "-------------- Reverse triangle pattern with numbers ------------" << endl;
  

    // for(int i = 1; i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         std::cout<<i-j;
    //     }
    //     std::cout<<endl;
    // }


    // -------------- More clear/clean approach ----------------


    for(int i=0;i<n;i++){
        for(int j =i+1;j>0;j--){
            std::cout<<j;
        }
        std::cout<<endl;
    }    
    */


    /*
    
    // -------------- Floyd's Triangle Number Pattern ------------
    
    //   1
    //   2 3
    //   4 5 6
    //   7 8 9 10


    int n = 4;
    int count = 1;
    std::cout << "-------------- Floyd's Triangle Number Pattern ------------" << endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<count;
            count++;
        }
        std::cout<<endl;
    }
    
    
    */


   /*
   
    // -------------- Floyd's Triangle Alphabetical Pattern ------------
    
    //   1
    //   2 3
    //   4 5 6
    //   7 8 9 10


    int n = 4;
    char alpha = 'A';
    std::cout << "-------------- Floyd's Triangle Alphabetical Pattern ------------" << endl;


    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            std::cout<<alpha;
            alpha++;
        }
        std::cout<<endl;
    }
   
   
   */


   /*
   
   
    // -------------- Reverse triangle pattern with numbers  ------------


    //   1 1 1 1
    //     2 2 2
    //       3 3
    //         4 
    int n = 4;
    std::cout << "-------------- Inverted triangle pattern with numbers ------------" << endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i;j++){
            std::cout<<" ";
        }
        for(int k=0; k<n-i;k++){
            std::cout<<i+1;
        }
        std::cout<<endl;
    }
   
   
   
   */



   /*
   
    // -------------- Pyramid pattern with numbers  ------------


    //         1                
    //       1 2 1            
    //     1 2 3 2 1        
    //   1 2 3 4 3 2 1
    int n = 4;
    std::cout << "-------------- Pyramid pattern with numbers ------------" << endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            std::cout<<" ";
        }
        for(int k = 0;k<i+1;k++){
            std::cout<<k+1;
        }
        for(int l = i; l>0; l--){
            std::cout<<l;
        }
        std::cout<<endl;
    }
   
   */


   // -------------- Hollow diamond pattern  ------------


    //         *                
    //       *    *            
    //     *        *        
    //   *            *
    //     *        *
    //       *    *
    //          *
    int n = 4;
    std::cout << "-------------- Hollow diamond pattern ------------" << endl;

    for(int i = 0; i<n; i++){
        // Outer Spaces 
        for(int j = 0; j<n-i-1; j++){
            std::cout<<" ";
        }
        std::cout<<"*";
        if(i!=0){
            // Spaces of odd numbers inside
            for(int k=0;k<2*i-1;k++){
                std::cout<<" ";
            }
            std::cout<<"*";
        }
        std::cout<<endl; 
    }
    for(int a = 0; a<n-1;a++){
        // Outer Spaces 
        for(int b=0;b<a+1;b++){
        std::cout<<" ";
        }
        std::cout<<"*";
        if(a!=n-2){
               for(int c=0; c<2*(n-a)-5;c++){
                std::cout<<" ";
            }
              std::cout<<"*";
        }
        std::cout<<endl; 
    }


    return 0;





}
