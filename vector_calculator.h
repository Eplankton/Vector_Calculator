//From: Eplanlkton  Date: 2021/7/20
#include <stdio.h>
#include "vector_calculator.h"

int main()
{
    int key = 1; //User Interface

    for (; key > 0;)
    {
        printf("\n\n");
        printf("                                #####################\n");
        printf("                                     @ Vector        \n");
        printf("                                         +        :1 \n");
        printf("                                         -        :2 \n");
        printf("                                         .        :3 \n");
        printf("                                         x        :4 \n");
        printf("                                        Exit      :0 \n");
        printf("                                #####################\n");
        printf("                                Please enter : ");

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
