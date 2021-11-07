#include <math.h>

int isArmstrongHelp(int num , int count)
{
    if(num==0)
    {
        return 0;
    }
    return ((int)(pow(num%10,count)))+isArmstrongHelp(num/10,count);
}

int isArmstrong(int num)
{
    int counter;
    for(int i=num ; i>0 ; i=i/10)
    {
        counter = counter + 1;
    }
    int sum = isArmstrongHelp(num , counter);
    if(sum == num)
    {
        return 1;
    }
    return 0;
}

int isPalindrome(int num)
{
    if(num<10)
    {
        return 1;
    }
    int counte =0;
    int small = num%10;
    int tempnum=num/10;
    while (tempnum>10)
    {
        tempnum = tempnum/10;
        counte = counte +1;
    }
    if(tempnum != small)
    {
        return 0;
    }
    int take_mod = (int)(pow(10,counte));
    tempnum = num / 10;
    tempnum = tempnum % take_mod;
    return isPalindrome(tempnum);
    
}