#include<stdio.h>
int main()
{
    int alice[5],bob[5];
    int ind,itr;
    int alicerate,bobrate,rateind;
    alicerate=0;
    bobrate=0;
    for(ind=0;ind<3; scanf("%d",&alice[ind++]));
    for(itr=0;itr<3;scanf("%d",&bob[itr++]));
    for(rateind=0;rateind<3;rateind++)
        {
            if(alice[rateind]>bob[rateind])
                alicerate++;
            if(alice[rateind]<bob[rateind])
                bobrate++;
        }
        printf("%d %d",alicerate,bobrate);
}
