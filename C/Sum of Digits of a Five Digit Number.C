#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    for(int i=n;i>0;i/=10)
    {
        sum+=i%10;
    }
    printf("%d",sum);
    return 0;
}
