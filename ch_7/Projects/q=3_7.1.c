#include <stdio.h>

/*
    5 
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
*/

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num = n - i;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
