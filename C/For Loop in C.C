#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char sample[][6]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(int i=a;i<=b;i++)
    {
        if(i>9 && i%2==0)
        {printf("%s",sample[9]);}
        else if(i>9 && i%2!=0)
        {printf("%s",sample[10]);}
        else
        {printf("%s",sample[i-1]);}
        printf("\n");
    }
    return 0;
}
