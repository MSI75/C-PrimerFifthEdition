#include <iostream>

int *modifyArray(int arr[], int n)
{
    static int modify[5];

    for (int i = 0; i < n; i++)
    {
        modify[i] = arr[i] * 5;
    }
    return modify;
}

int **modifyArray1(int arr[3][4])
{
    static int *modify1[3];

    for (int i = 0; i < 3; i++)
    {
        modify1[i] = new int[4];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            modify1[i][j] = arr[i][j] * 5;
        }
    }

    return modify1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / arr[0];

    int *modify = modifyArray(arr1, 5);

    for (int i = 0; i < 5; i++)
    {
        // std::cout << modify[i] << std::endl;
    }

    int arr[3][4] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}};

    int **result = modifyArray1(arr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // modify1[i][j] = arr[i][j] * 5;
            std::cout << result[i][j] << "\t";
        }

        std::cout << '\n';
    }

    // dynamic memory allocation;
    // int *p = new int[2];
    // p[0] = 10;
    // p[1]  = 20;

    // int *pp = new int;

    // double *p1 = new double[32];
    // char *c = new char

    // for(int i = 0; i < 2; i++){
    //     std::cout << p[i] << std::endl;
    // }
}