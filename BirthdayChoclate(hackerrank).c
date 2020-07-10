#include<stdio.h>
int main()
{
    int month,day,arrsize,sum,count;
    int ind,itr;
    int num,arr[100];
    count=0;
    scanf("%d",&month);
    scanf("%d",&day);
    scanf("%d",&arrsize);
    for(ind=0;ind<arrsize;scanf("%d",arr[ind++]));
    for(ind=0;ind<arrsize;ind++)
    {
        sum=0;
        for(itr=ind;itr<month;itr++)
         {
            sum=sum+arr[itr];
            if(sum==day)
                count++;
         }
    }



}
