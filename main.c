#include <stdio.h>
#include <stdlib.h>

int num[10] = {
1,3,6,5,8,7,9,6,2,0
};
//after bu bu 
int comp (const int *, const int *);
//some test for prs
int main(void)
{
int i;
printf("Original array: ");
for (i=0; i<10; i + +) printf("%d ",num[i]);
// first change in code
printf ("vorotnik\n");
qsort(num, 10, sizeof (int), (int(*) (const void *, const void *)) comp);
printf("Sorted array: ");
// second change in code
for(i = 0; i <10; i + + ) printf("%d ", num[i]);
return 0;
}

/* сравнение двух целых */
int comp (const int *i, const int *j)
{
return *i - *j;
}
