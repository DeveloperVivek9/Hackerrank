#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
    int max1=0,max2=0,max3=0;
    int or,and,xor,i,j;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            or=i|j;
            and=i&j;
            xor=i^j;
            if(or>max1 && or<k)
                max1=or;
            if(and>max2 && and<k)
                max2=and;
            if(xor>max3 && xor<k)
                max3=xor;      
        }
    }
    printf("%d\n%d\n%d",max2,max1,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
