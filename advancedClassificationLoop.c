#include <math.h>

int isArmstrong(int num)
{
    int sum = 0;

    int counter = 0;
    for(int tempnum = num ; tempnum>0;tempnum = tempnum/10)
    {
        counter = counter+1;
    }

    for(int tempnum = num ; tempnum>0 ; tempnum = tempnum/10)
    {
        sum = sum + ((int)(pow(tempnum%10,counter)));
    }
    if(sum == num)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num)
{
    int tempnum=0;
    for(int i= num;i>0;i=i/10)
    {
        tempnum=tempnum*10;
        tempnum=tempnum+(i%10);
    }
    if(tempnum == num)
    {
        return 1;
    }
    return 0;
}