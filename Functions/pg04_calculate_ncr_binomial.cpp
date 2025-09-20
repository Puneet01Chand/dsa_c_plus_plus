#include <iostream>
using namespace std;

int calculateFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

float solveBinomial(int n, int r)
{
    int nFact = calculateFactorial(n);
    int rFact = calculateFactorial(r);
    int nRDiffFact = calculateFactorial(n - r);
    float nCr = nFact / (rFact * nRDiffFact);
    return nCr;
}

int main()
{

    // nCr = n! / (r! * (n-r)!),
    int n = 8;
    int r = 2;
    float nCr = solveBinomial(n,r);
    std::cout << "The solution for Binomial Expression "<<n<<"C"<<r<<" is "<<nCr;
    return 0;
}