#include <iostream>
/* bool include(std::string str, char c)
{
    int b;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == c)
        {
            b = true;
            break;
        }
        else
        {
            b = false;
        }
    }
    return b;
} */

// void alphabet(std::string str)
/* void alphabet(int arr[], int n)
{

    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            if (min != i)
            {
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
            // std::cout << arr[min] << std::endl;
        }
    }
}

void output(int arr[], int n)
{
    alphabet(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
int main()
{
    /* std::string s1 = "Hey";
    std::string s2 = s1 + ", " + "MSI";
    std::cout << s2 << std::endl;

    std::string s3 = "hello world";
    int i = 0;
    for (int i = 0; i < sizeof(s3); i++)
    {
        if (s3[i] == 'l')
        {
            std::cout << s3[i] << std::endl;
        }
    } */
// std::string str = "Hello World!!";
// int arr[] = {5, 7, 2, 3, 1};
// std::cout << include(str, 'W');
// alphabet(arr, 5);
// output(arr, 5);

/* int min, temp;
for (int i = 0; i <= 5; i++)
{
    i = min;
    for (int j = i + 1; j < 5; j++)
    {
        if (arr[j] > arr[i])
        {
            min = j;
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
                    }
        // std::cout << arr[min] << std::endl;
    }
}

for (int i = 0; i <= 5; i++)
{
    // std::cout << arr[i] << std::endl;
} */
// std::cout << arr[i] << std::endl; */

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    std::cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
