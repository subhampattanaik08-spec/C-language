#include <stdio.h>

void multiplyMatrices(int arr1[100][100], int arr2[100][100], int m1, int n1, int n2)
{
    int arr3[100][100];

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            arr3[i][j] = 0;

            for (int k = 0; k < n1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Result Matrix:\n");

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m1, n1, m2, n2;
    int arr1[100][100], arr2[100][100];

    printf("Enter rows and columns of 1st matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter rows and columns of 2nd matrix: ");
    scanf("%d %d", &m2, &n2);

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < m2; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &arr2[i][j]);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    multiplyMatrices(arr1, arr2, m1, n1, n2);

    return 0;
}