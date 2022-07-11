#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int A[4];
    A[0]=a;
    A[1]=b;
    A[2]=c;
    A[3]=d;
    int max=A[0];
    for(int i=1;i<4;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
