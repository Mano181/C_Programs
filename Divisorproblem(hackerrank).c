#include<stdio.h>
int main()
{
    int num,k,ind,arr[100],itr,sum;
    int count=0;
    scanf("%d",&num);
    scanf("%d",&k);
    sum=0;
    for(ind=0;ind<num;ind++)
        scanf("%d",&arr[ind]);
    for(itr=0;itr<num;itr++)
    {
        for(ind=itr+1;ind<num;ind++)
        {
            sum=arr[ind]+arr[itr];
            if(sum%k==0)
            {
              count++;
            }
            sum=0;
        }
    }
    printf("%d",count);


}
