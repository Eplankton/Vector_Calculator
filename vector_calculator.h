//From: Eplanlkton  Date: 2021/7/20
void vectorInput(int, int *);
void vectorAddition();
void vectorSubtraction();
void vectorDotproduct();
void vectorCrossproduct();

void vectorAddition()
{
    int dimension;
    int i = 0;

    printf("\nSet the dimension = "); //Set the whole-environment dimension.
    scanf("%d", &dimension);
    printf("\nWARNING: The dimension has been set as '%d' ,and it can't be modified during calculation !", dimension);
    getchar();

    int fst[dimension];
    int *p = &fst[0];

    vectorInput(dimension, p);
    getchar();

    int sec[dimension];
    int *q = &sec[0];

    vectorInput(dimension, q);
    getchar();

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
    printf("\nWARNING: The dimension has been set as '%d' ,and it can't change during calculation !", dimension);
    getchar();

    int fst[dimension];
    int *p = &fst[0];

    vectorInput(dimension, p);
    getchar();

    int sec[dimension];
    int *q = &sec[0];

    vectorInput(dimension, q);
    getchar();

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
    printf("\nWARNING: The dimension has been set as '%d' ,and it can't change during calculation !", dimension);
    getchar();

    int fst[dimension];
    int *p = &fst[0];

    vectorInput(dimension, p);
    getchar();

    int sec[dimension];
    int *q = &sec[0];

    vectorInput(dimension, q);
    getchar();

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
    printf("\nWARNING: Cross product only has definition in three-dimension !");
    getchar();

    int fst[dimension];
    int *p = &fst[0];

    vectorInput(dimension, p);
    getchar();

    int sec[dimension];
    int *q = &sec[0];

    vectorInput(dimension, q);
    getchar();

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

void vectorInput(int dimension, int *r)
{
    char vectorName[30];
    printf("\n\nSet the vector name as =  ");
    scanf("%s", vectorName);
    getchar();
    printf("\n");

    if (dimension < 2)
    {
        printf("\nError! The dimension should be 2 at least .\n");
        printf("\nSet the dimension = ");
        scanf("%d", &dimension);
    }

    int n = 0;
    int a[dimension];

    for (n = 0; n < dimension; n++)
    {
        printf("\nthe %s(%d) is = ", vectorName, n + 1);
        scanf("%d", &a[n]);
        *(r + n) = a[n]; //A pointer to transport value outwards the function.
    }

    printf("\nThe vector '%s <%d>' is = ( ", vectorName, dimension);
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
