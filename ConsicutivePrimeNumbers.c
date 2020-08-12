#include<stdio.h>
#include<math.h>
int checkprime(int num);
int main()
{
    int n;
    int PRIME;
    int p_num;
    int res,prime_count;
    res=0;
    prime_count=0;
    scanf("%d",&n);
    for(p_num=2;p_num<=n;p_num++)
    {
        if(checkprime(p_num)==1)
        {
            res=res+p_num;
            if(checkprime(res)==1)
                if(res<n)
                    prime_count++;
        }

    }
    printf("%d",prime_count-1);

    return 0;
}
int checkprime(int num)
{
    int p_ind;
    for(p_ind=2;p_ind<=num/2;p_ind++)
    {
        if(num%p_ind==0)
        break;
    }
    if(p_ind>=num/2)
        return 1;
}
