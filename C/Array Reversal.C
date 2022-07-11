#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j,*rev;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    rev=(int*)malloc(num*sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(j=0,i=num-1;i>=0;i--,j++)
    {
        *(rev+j)=*(arr+i);
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(rev + i));
    return 0;
}