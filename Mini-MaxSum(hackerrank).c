#include<stdio.h>
int main()
{
    int ind,itr,sum,max,min,num,arr[100];
    sum=0,max=0,min=1000;
    scanf("%d",&num);
    for(ind=1;ind<=num;scanf("%d",&arr[ind++]));
    for(ind=1;ind<=num;ind++)
    {
        for(itr=1;itr<=num;itr++)
        {
            if(ind!=itr)
            sum=sum+arr[itr];
        }
        if(max<sum)
            max=sum;
        if(min>sum)
            min=sum;
        sum=0;
    }
    printf("%d\n",max);
    printf("%d",min);

}
