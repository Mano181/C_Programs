#include<stdio.h>
int main()
{
    int ind,arr[20],itr;
    float r1,r2,r3;
    int num;
    r1=0,r2=0,r3=0;
    scanf("%d",&num);
    for(ind=0;ind<num;ind++)
        scanf("%d",&arr[ind]);
    for(itr=0;itr<num;itr++)
        if(arr[itr]>0)
            r1++;
        else if(arr[itr]<0)
            r2++;
        else
            r3++;
 //   printf("%f %f %f",r1,r2,r3);
    printf("%f\n%f\n%f",r1/num,r2/num,r3/num);
}
