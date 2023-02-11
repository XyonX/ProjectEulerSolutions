//The sum of the squares of the first ten natural numbers is,

//The square of the sum of the first ten natural numbers is,

//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 


//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<iostream>

int main(int argc, char const *argv[])
{

    int SumOfFirst100Num=0;
    int SumOfFirst100NumSquare=0;
    for(int i = 1 ; i<=100 ; i++)
    {
        SumOfFirst100Num+=i;
        SumOfFirst100NumSquare+= (i*i);
    }
    int Difference = (SumOfFirst100Num*SumOfFirst100Num)-SumOfFirst100NumSquare;
    printf("Diff is : %d",Difference);
    return 0;
}
