#include<stdio.h>
int main()
{
    int start,end;
    int AppleTP,OrangeTP,NofA,NofO;
    int Aarr[100000],Oarr[100000];
    int ind,itr;
    int Acount,Ocount;
    Acount=0,Ocount=0;
    scanf("%d",&start);
    scanf("%d",&end);
    scanf("%d",&AppleTP);
    scanf("%d",&OrangeTP);
    scanf("%d",&NofA);
    scanf("%d",&NofO);
    for(ind=0;ind<NofA;scanf("%d",&Aarr[ind++]));
    for(itr=0;itr<NofO;scanf("%d",&Oarr[itr++]));
    for(ind=0;ind<NofA;Aarr[ind++]+=AppleTP);
    for(itr=0;itr<NofO;Oarr[itr++]+=OrangeTP);
    for(ind=0;ind<NofA;ind++)
        if(Aarr[ind]>=start&&Aarr[ind]<=end)
            Acount++;
    for(itr=0;itr<NofO;itr++)
        if(Oarr[itr]>=start&&Oarr[itr]<=end)
            Ocount++;
    printf("%d",Acount);
    printf("%d",Ocount);
//7 11
//5 15
//3 2
//-2 2 1
//5 -6
}
