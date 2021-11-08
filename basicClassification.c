#include <math.h>

int factorial(int num)
{
    int sum=1;
    for(int i=1;i<=num;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int isPrime(int num)
{
    int sqr=(int)(sqrt(num));

    for(int i=2 ; i <= sqr ; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isStrong(int num)
{
    int sum = 0;
    for(int i=num; i>0;i = i/10)
    {
        sum = sum + (factorial(i%10));
    }
    if(sum==num)
    {
        return 1;
    }
    return 0;
    
}