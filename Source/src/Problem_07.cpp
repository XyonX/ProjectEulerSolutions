//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

//What is the 10 001st prime number?

#include<iostream>

bool CheckPrimeOrNpt(int Number)
{

    for(int i = 2 ; i<Number ;i++)
    {

        if(Number%i ==0)
        {
            return false;
        }
    }
    return true;
}


int main(int argc, char const *argv[])
{
    
    int PrimeCount =0;
    int TenThousendAndOne_Prime;
    for(int i= 2;i>0 ; i++)
    {
        if(CheckPrimeOrNpt(i))
        {
            PrimeCount++;
            if(PrimeCount==10001)
            {
                TenThousendAndOne_Prime=i;
                printf("10001 Prime is : %d",TenThousendAndOne_Prime);
                return 0 ;
            }
        }
    }


    return 0;
}
