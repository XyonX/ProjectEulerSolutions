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
    
long int largest_palenrome = 0;
    for(long int i=999 ; i>99 ; i--)
    {
        for(long int j = 999; j>99; j-- )
        {

            long int number = i*j ;
            if(CheckNumberPalindromeOrNot(number))
            {

                if(number>largest_palenrome)
                largest_palenrome=number;
            }


        }
    }
    printf("Largest Palendrome is : %d",largest_palenrome);
    
}

bool CheckNumberPalindromeOrNot(long int Number)
{
    
    bool NumbeisPalendrome =false;

    std::vector<int> Number_Vector = IntigerToVector(Number);
    std::vector<int>ReverseNumber = ReverseVector(Number_Vector);

    int NumberLen =Number_Vector.size();
    int Mid= NumberLen/2;

    for (int i = 0; i <Mid; i++)
    {
        if(Number_Vector[i] == ReverseNumber[i])
        {
             NumbeisPalendrome=true;
            continue;
        }
        else
        {
             NumbeisPalendrome =false;
            break;
        }
       
    }
    
    return NumbeisPalendrome;
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
