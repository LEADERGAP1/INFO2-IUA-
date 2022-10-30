#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    
    int *array[2];
    
    array[0]=&a;
    array[1]=&b;
    
    scanf("%d",*(array));
    scanf("%d",*(array+1));
    
    printf("A vale %d",a);
    printf("B vale %d",b);

    return 0;
}
