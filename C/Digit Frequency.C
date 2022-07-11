#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000];
    int a[]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
            a[s[i] - '0']++;
            // a[atoi(s[i])]++;
    }
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
