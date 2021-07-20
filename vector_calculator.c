//From : Eplanlkton  Date : 2021/7/20
#include <stdio.h>

void vectorInput(int, int *);
void vectorAddition();
void vectorSubtraction();
void vectorDotproduct();
void vectorCrossproduct();

int main()
{
    int key = 1;

    for (; key > 0;)
    {
        printf("\n\n");
        printf("                           ----------------------\n");
        printf("                           |    # Vector #      |\n");
        printf("                           |        +        :1 |\n");
        printf("                           |        -        :2 |\n");
        printf("                           |        .        :3 |\n");
        printf("                           |        x        :4 |\n");
        printf("                           |       Exit      :0 |\n");
        printf("                           ----------------------\n");
        printf("                            please enter : ");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            vectorAddition();
            break;
        case 2:
            vectorSubtraction();
            break;
        case 3:
            vectorDotproduct();
            break;
        case 4:
            vectorCrossproduct();
            break;
        case 0:
            break;
        }
    }

    return 0;
}

void vectorAddition()
{
    int dimension;
    int i = 0;
    printf("\nSet the dimension = "); //Set the whole-environment dimension.
    scanf("%d", &dimension);
    printf("\nWARNING :The dimension has been set as '%d' ,and it can't change during calculation !", dimension);

    getchar();
    int fst[dimension];
    int *p = &fst[0];
    vectorInput(dimension, p);

    getchar();
    int sec[dimension];
    int *q = &sec[0];
    vectorInput(dimension, q);

    int result[dimension];

    for (i = 0; i < dimension; i++)
    {
        result[i] = fst[i] + sec[i];
    }

    printf("\nThe result of vector addition is = ( ");

    for (i = 0; i < dimension; i++)
    {
        if (i < dimension - 1)
        {
            printf("%d, ", result[i]);
        }
        else
        {
            printf("%d )\n\n", result[i]);
        }
    }
}

void vectorSubtraction()
{
    int dimension;
    int i = 0;
    printf("\nSet the dimension = "); //Set the whole-environment dimension.
    scanf("%d", &dimension);
    printf("\nWARNING :The dimension has been set as '%d' ,and it can't change during calculation !", dimension);

    getchar();
    int fst[dimension];
    int *p = &fst[0];
    vectorInput(dimension, p);

    getchar();
    int sec[dimension];
    int *q = &sec[0];
    vectorInput(dimension, q);

    int result[dimension];

    for (i = 0; i < dimension; i++)
    {
        result[i] = fst[i] - sec[i];
    }

    printf("\nThe result of vector subtraction is = ( ");

    for (i = 0; i < dimension; i++)
    {
        if (i < dimension - 1)
        {
            printf("%d, ", result[i]);
        }
        else
        {
            printf("%d )\n\n", result[i]);
        }
    }
}

void vectorDotproduct()
{
    int dimension;
    int i = 0;
    printf("\nSet the dimension = "); //Set the whole-environment dimension.
    scanf("%d", &dimension);
    printf("\nWARNING :The dimension has been set as '%d' ,and it can't change during calculation !", dimension);

    getchar();
    int fst[dimension];
    int *p = &fst[0];
    vectorInput(dimension, p);

    getchar();
    int sec[dimension];
    int *q = &sec[0];
    vectorInput(dimension, q);

    int result = 0;

    for (i = 0; i < dimension; i++)
    {
        result += fst[i] * sec[i];
    }

    printf("\nThe result of vector dot-product is = %d \n", result);
}

void vectorCrossproduct()
{
    int dimension = 3;
    int i = 0;
    printf("\nSet the dimension = 3"); //Cross product only has definition in three-dimension.
    printf("\nWARNING :Cross product only has definition in three-dimension !", dimension);

    getchar();
    int fst[dimension];
    int *p = &fst[0];
    vectorInput(dimension, p);

    getchar();
    int sec[dimension];
    int *q = &sec[0];
    vectorInput(dimension, q);

    int result[dimension];

    result[0] = fst[2] * sec[3] - fst[3] * sec[2];
    result[1] = fst[3] * sec[1] - fst[1] * sec[3];
    result[2] = fst[1] * sec[2] - fst[2] * sec[1];

    printf("\nThe result of vector cross-product is = ( ");

    for (i = 0; i < dimension; i++)
    {
        if (i < dimension - 1)
        {
            printf("%d, ", result[i]);
        }
        else
        {
            printf("%d )\n\n", result[i]);
        }
    }
}

void vectorInput(int dimension, int *p)
{
    char vectorName;
    printf("\n\nSet the vector name as =  ");
    scanf("%c", &vectorName);
    printf("\n");

    if (dimension < 2)
    {
        printf("\nError ! The dimension should be 2 at least .\n");
        printf("\nSet the dimension = ");
        scanf("%d", &dimension);
    }

    int n = 0;
    int a[dimension];

    for (n = 0; n < dimension; n++)
    {
        printf("\nthe %c(%d) is = ", vectorName, n + 1);
        scanf("%d", &a[n]);
        *(p + n) = a[n];
    }

    printf("\nThe vector '%c' is = ( ", vectorName);

    for (n = 0; n < dimension; n++)
    {
        if (n < dimension - 1)
        {
            printf("%d, ", a[n]);
        }
        else
        {
            printf("%d )\n", a[n]);
        }
    }
}
