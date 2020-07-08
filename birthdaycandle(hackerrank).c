#include<stdio.h>
int main()
{
    int ind,age,arr[25],itr,arrind;
    int max=1;
    int count=0;
    scanf("%d",&age);
    for(ind=0;ind<age;ind++)
        scanf("%d",&arr[ind]);
    for(arrind=0;arrind<age;arrind++)
        if(arr[arrind]>max)
            max=arr[arrind];

    for(itr=0;itr<age;itr++)
        if(arr[itr]==max)
            count++;
    printf("%d",count);
}
