#include <iostream>
#include <cstdlib>

using namespace std;
#include "Sort.h"

int main()
{
    int arraysize = 5000;
    int array1[arraysize];
    int array2[arraysize];
    int array3[arraysize];


    for(int j = 0; j < arraysize-1; j++)
        {
            int i = 0;
            i = rand () % arraysize;
            array1 [j] = i;
            array2 [j] = i;
            array3 [j] = i;
        }

    bubbleSort(array1,arraysize);
    selectionSort(array2,arraysize);
    insertionSort(array3,arraysize);

    return 0;
}
//http://www.algolist.net/Algorithms/Sorting/Insertion_sort