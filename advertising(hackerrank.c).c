#include<stdio.h>
void ad(int days)
{
    int ind,like,share,sum;
    sum=0,like=0;
    int num;
    num=5;
    for(ind=0;ind<days;ind++)
    {
        like=num/2;
        num=like*3;
        sum+=like;
    }
    printf("%d",sum);
}
int main()
{
    int days;
    scanf("%d",&days);
    ad(days);
}
