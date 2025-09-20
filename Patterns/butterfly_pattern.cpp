#include <iostream>
using namespace std;

void printUpperTriangle(int n);
void printLowerTriangle(int n);
int main()
{
    // -------------- Butterfly Pattern ------------

    /*
     *             *
     * *         * *
     * * *     * * *
     * * * * * * * *
     * * * * * * * *
     * * *     * * *
     * *         * *
     *             *
     */
    std::cout << "-------------- Butterfly Pattern ------------";
    int n = 4;

    printUpperTriangle(n);
    printLowerTriangle(n);

    return 0;
}

void printUpperTriangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        // For left trinagle and spaces
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        for (int k = 0; k < n - i; k++)
        {
            std::cout << " ";
        }
        // For right trinagle and spaces
        for (int l = 0; l < n - i; l++)
        {
            std::cout << " ";
        }
        for (int m = 0; m < i; m++)
        {
            std::cout << "*";
        }
        // // For inverted triangle and spaces
        // for(int a = 0;a<n-1;a++){
        //     std::cout << "*";
        // }
        std::cout << endl;
    }
}

void printLowerTriangle(int n){
    // For inverted left triangle and spaces
    for(int o=0;o<n;o++){
        for(int a=0;a<=n-o-1;a++){
            std::cout << "*";
        }
        for(int b=0;b<o;b++){
            std::cout << " ";  
        }
        for(int c=0;c<o;c++){
            std::cout << " ";  
        }
       for(int d=0;d<=n-o-1;d++){
            std::cout << "*";
        }
        std::cout << endl;
    }
    // For inverted right triangle and spaces
    
}