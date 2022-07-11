#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float p,temp;
    float A[n];
    int i,temp2;
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        A[i]=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                temp2=tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a=temp2;
                temp2=tr[j].b;
                tr[j].b=tr[j+1].b;
                tr[j+1].b=temp2;
                temp2=tr[j].c;
                tr[j].c=tr[j+1].c;
                tr[j+1].c=temp2;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}