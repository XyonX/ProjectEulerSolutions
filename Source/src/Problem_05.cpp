//520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<iostream>

int main(int argc, char const *argv[])
{
    bool SmallestNumberFound =false;
    int smallestpositiveint =0;
    int count = 20;

    for (int  i = 20; i >0; i++)
    {
        for (int j = 2; j <= 20; j++)
        {
            if(i%j ==0)
            {
                if(j==20)
                {
                    smallestpositiveint=i;
                    printf("smallest possitive int : %d",smallestpositiveint);
                    return 0;
                }
                continue;
            }
            break;
        }
        
    }
    
    

    return -1;
}
