#include <stdio.h>
int main()
{

    int n = 8, i, j;
    int given_arr[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    // int sorted_arr[n];

    printf("Without sorting : ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", given_arr[i]);
    }
    printf("\n");

    // --------------- Algorithm logic  start here -------------- //
    for (j = 0; j < n - 1; j++)
    {
        int temp;
        for (i = 0; i < n - 1; i++)
        {
            if (given_arr[i] > given_arr[i + 1])
            {
                temp = given_arr[i];
                given_arr[i] = given_arr[i + 1];
                given_arr[i + 1] = temp;
            }
        }

        // --------------- Algorithm  logic end  here -------------- //
        printf("After sorting : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", given_arr[i]);
        }
        printf("\n");
    }
    return 0;
}