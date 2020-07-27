#include<stdio.h>
int main()
{
    int NoOfHud,MaxJump;
    int ind,arr[100],itr,max,flag;
    flag=0;
    scanf("%d",&NoOfHud);
    scanf("%d",&MaxJump);
    max=MaxJump;
    for(ind=0;ind<NoOfHud;scanf("%d",&arr[ind++]));
    for(itr=0;itr<NoOfHud;itr++)
        if(arr[itr]>max)
        {
            max=arr[itr];
            flag=1;
        }
    if(flag=1)
        printf("%d",max-MaxJump);//5 7
//2 5 4 5 2
    else
        printf("0");



    return 0;
}
