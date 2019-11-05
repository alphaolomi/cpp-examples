/*
## Overview

- Count comparisons of largest so far against other values
- Find Largest, given m values, does m-1 comparisons
- Selection sort calls Find Largest n times,
    - Each time with a smaller list of values
    - Cost = n-1 + (n-2) + … + 2 + 1 = n(n-1)/2


## Efficiency

- Time efficiency
    - Comparisons: n(n-1)/2
    - Exchanges: n (swapping largest into place)
    - Overall: (n2), best and worst cases
- Space efficiency
    - Space for the input sequence, plus a constant number of local variables
 


Pseudo Code

1. Get values for n and the n list items

2. Set the marker for the unsorted section at the end of the list

3. While the unsorted section of the list is not empty, do steps 4 through 6

4. Select the largest number in the unsorted section of the list

Exchange this number with the last number in the unsorted
section of the list

6. Move the marker for the unsorted section left one position

7. Stop

*/

#include <iostream>

void PrintArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << " " << std::flush;
    std::cout << std::endl;
}

inline void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}

void SelectionSort(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < arr_size; ++j)
            if (arr[j] < arr[min])
                min = j;
        Swap(arr[min], arr[i]);
    }
}

int main()
{
    int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
    int n = sizeof(array) / sizeof(array[0]);

    std::cout << "Before Selection Sort :" << std::endl;
    PrintArray(array, n);

    SelectionSort(array, n);

    std::cout << "After Selection Sort :" << std::endl;
    PrintArray(array, n);
    return (0);
}

/*
OUTPUT
Before Selection Sort :
94 42 50 95 333 65 54 456 1 2325
After Selection Sort :
1 42 50 54 65 94 95 333 456 2325
*/