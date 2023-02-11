/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/


#include<iostream>
#include <cmath>

using namespace std ;

bool ChechNumberPrimeOrNot (int Number);
int main()
{
   long long int Number = 600851475143 ;
   int LargestPrimeFactor =2 ;
   int PrimeFactor;

    for (int i = 2;  i<sqrt(Number); i++)
    {

        if(Number%i==0)
        {
            PrimeFactor=i;
            if(ChechNumberPrimeOrNot(i) ==true)
            {
                if(PrimeFactor>LargestPrimeFactor)
                {
                    LargestPrimeFactor = PrimeFactor ;
                }
            }
        }
    }
        
    //printf(" Largest Prime  fator of Number : %d is :  %d",Number ,LargestPrimeFactor);
    printf("  %d",LargestPrimeFactor);
}

bool ChechNumberPrimeOrNot (int Number)
{
    if(Number<2)
    {
        return false ;
    }

    for(int i = 2; i< sqrt(Number) ; i++)
    {
        if(Number % i ==0)
        {
            return false ;
        }
    }
    return true ;
}

