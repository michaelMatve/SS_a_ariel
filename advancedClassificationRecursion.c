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
    int counter=0;
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

int isPalindromeHelper(int num, int temp)
{
    if(num==0)
    {
        return temp;
    }
    temp = (temp*10)+num%10;
    num = num/10;
    return isPalindromeHelper(num,temp);
    
}

int isPalindrome(int num)
{
    int temp_num= isPalindromeHelper(num,0);
    if(temp_num==num)
    {
        return 1;
    }
    return 0;
    
}