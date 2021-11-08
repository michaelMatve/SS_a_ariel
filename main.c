#include <stdio.h>
#include "NumClass.h"

int main()
{
    int first, last;
    scanf("%d %d", &first, &last);
    printf("The Armstrong numbers are: ");
    for(int i = first ; i<last ; i++)
    {
        int temp = isArmstrong(i);
        if(temp==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("The Palindromes are: ");
    for(int i = first ; i<last ; i++)
    {
        int temp = isPalindrome(i);
        if(temp==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are: ");
    for(int i = first ; i<last ; i++)
    {
        int temp = isPrime(i);
        if(temp==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are: ");
    for(int i = first ; i<last ; i++)
    {
         int temp = isStrong(i);
        if(temp==1)
        {
            printf("%d ",i);
        }
    }
     printf("\n");

}