#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the no of row ");
    scanf("%d", &row);
    printf("Enter the no of col ");
    scanf("%d", &col);
    int i, j;
    int space;
    for (i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            int j;
            for (j = 1; j <= col; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for (space = 1; space <= col - 2; space++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}