#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    scanf("%d %d",&a,&b);
    char s[][25]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    int c=a;
    for(int i=a;i<=b;i++)
    {
        if(i>9 && i%2==0)
            c=10;
        else if(i>9 && i%2!=0)
            c=11;
        else
            c=i;
        printf("%s\n",s[c-1]); 
    }
    return 0;
}
