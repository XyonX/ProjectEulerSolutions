/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <vector>
#include<iostream>
#include<algorithm>

bool CheckNumberPalindromeOrNot (long int Number);
std::vector <int> IntigerToVector(long int Number);
std::vector <int> ReverseVector(std::vector<int>& Vector) ;
int main(int argc, char const *argv[])

{

     long int ProductofTwo3Digit;
     long int LargestPalendrome = 0 ;
    
    for (size_t i = 0; i < 1000; i++)
    {
        for (size_t j = 0; j < 1000; j++)
        {
            ProductofTwo3Digit = i*j;
            std::vector<int>Product_Vector = IntigerToVector(ProductofTwo3Digit);
            int NumberLen = Product_Vector.size();
            int Mid =NumberLen/2;

            if(CheckNumberPalindromeOrNot(ProductofTwo3Digit))
            {
                if(ProductofTwo3Digit>LargestPalendrome)
                {
                    LargestPalendrome =ProductofTwo3Digit;
                }
            }
        }
        
    }

    printf("Largest Palendrome is : %d" , LargestPalendrome);
    




    return 0;
}

bool CheckNumberPalindromeOrNot(long int Number)
{
    
    bool NumbeisPaendrome =false;
    std::vector<int> Number_Vecotr;
    int NumberLen =Number_Vecotr.size();
    int Mid= NumberLen/2;
    bool IsNumberPalendrome ;
    
    std::vector<int>ReverseNumber = ReverseVector(Number_Vecotr);

    for (int i = 0; i < Mid; i++)
    {
        if(Number_Vecotr[i] == ReverseNumber[i])
        {
             NumbeisPaendrome=true;
            continue;
        }
        else
        NumbeisPaendrome =false;
    }
    
    return NumbeisPaendrome;
   
    
    return false;
}

std::vector <int> IntigerToVector(long int Number)
{

    std::vector <int> Number_Vector ;
    while (Number>0)
    {
        Number_Vector.push_back(Number%10);
        Number /=10;
    }
    std::reverse(Number_Vector.begin(), Number_Vector.end());
    return Number_Vector;

    
}

std::vector <int> ReverseVector(std::vector<int>& Vector)
{
    std::vector<int> ReversedVector ;
    for ( int i= Vector.size()-1; i >=0; i--)
    {
           
        ReversedVector.push_back(Vector.at(i));
        
    }
    return ReversedVector;
    
}
