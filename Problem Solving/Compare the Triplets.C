#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3]={0,0,0};
    int b[3]={0,0,0};
    int score[]={0,0};
    int i;
    for(i=0;i<6;i++)
    {   
        if(i<3)
            scanf("%d",&a[i]);
        else
            scanf("%d",&b[i-3]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]<b[i])
            score[1]++;
        else if(a[i]>b[i])
            score[0]++;
        else
            continue;
    }
    printf("%d %d",score[0],score[1]);
    return 0;
}
