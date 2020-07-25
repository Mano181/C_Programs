#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int ind=0;ind<t;ind++)
    {
        int catAP,catBP,mouseP;
        int cat1,cat2;
        scanf("%d",&catAP);
        scanf("%d",&catBP);
        scanf("%d",&mouseP);
        cat1=abs(catAP-mouseP);
        cat2=abs(catBP-mouseP);
        if(cat1==cat2)
            printf("Mouse C");
        else if(cat1>cat2)
            printf("Cat B");
        else
            printf("Cat A");
    }
}
