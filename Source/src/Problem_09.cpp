//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.

//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include<cstdlib>
#include<iostream>
#include<random>

int main(int argc, char const *argv[])
{
    int RandC;
    int RandB;
    int RandA;
    
    bool TripletFound =false ;

    while ( !TripletFound )
    {
        
        while ( true)
        {
            
            std::random_device rd;
            std::mt19937 eng(rd());
            std::uniform_int_distribution<> distr1(1, 1000);
            RandC = distr1(eng);
            std::uniform_int_distribution<> distr2(1, RandC);
            RandB = distr2(eng);
            std::uniform_int_distribution<> distr3(1, RandB);
            RandA = distr3(eng);
            if(RandA+RandB+RandC == 1000)
            break;
        }
        if ( (RandA*RandA)+(RandB*RandB) ==(RandC*RandC) )
        {
           
            printf("Number A IS : %d \n",RandA);
            printf("Number B IS : %d \n",RandB);
            printf("Number C IS : %d \n",RandC);
            printf("Product of ABC IS : %d" , RandA*RandB*RandC);
            TripletFound = true;
        }

    }
    return 0;
}
