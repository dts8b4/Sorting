#include <iostream>
#include <random>
#include <time.h>
#include <chrono>
#include <string>
#include "sorts.h"



int main()
{
    int max_int = 100000;
    int listSize = 10000;
    std::chrono::_V2::system_clock::time_point start, end;
    std::chrono::milliseconds duration; 
    srand(time(0));
    std::vector<int> original_list(listSize);
    for (int i = 0; i < listSize; i++) {
        original_list.push_back(rand() % max_int);
    }
    if (isSorted(original_list)) {
        std::cout << "List already sorted." << std::endl;
        return 1;
    }
    //print(original_list);
    std::vector<int> list1 = original_list;
    std::vector<int> list2 = original_list;
    std::vector<int> list3 = original_list;
    std::vector<int> list4 = original_list;
    std::vector<int> list5 = original_list;
    std::vector<int> list6 = original_list;
    std::vector<int> list7 = original_list;
    std::vector<int> list8 = original_list;

    std::cout << "INSERTION SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    insertionSort(list1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list1)) {
        std::cout << "Insertion Sort Failed" << std::endl;
    }
    
    std::cout << "SELECTION SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    selectionSort(list2);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list2)) {
        std::cout << "Selection Sort Failed" << std::endl;
    }

    std::cout << "BUBBLE SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    bubbleSort(list3);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list3)) {
        std::cout << "Bubble Sort Failed" << std::endl;
    }


    std::cout << "MERGE SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    list5 = mergeSort(list5);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list5)) {
        std::cout << "Merge Sort Failed" << std::endl;
    }

    std::cout << "QUICK SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    quickSort(list4, 0, list4.size() - 1);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list4)) {
        std::cout << "Quick Sort Failed" << std::endl;
    }

    std::cout << "RADIX SORT (LSD)" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    radixSort(list6);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list6)) {
        std::cout << "Radix Sort Failed" << std::endl;
    }

    std::cout << "COUNTING SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    countingSort(list7);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tDuration: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list7)) {
        std::cout << "Counting Sort Failed" << std::endl;
    }

    std::cout << "BUCKET SORT" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    bucketSort(list8);
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "\tBucket: " << duration.count() << "ms\n" << std::endl;
    if (!isSorted(list8)) {
        std::cout << "Bucket Sort Failed" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Finished Sorting" << std::endl;
    return 0;
}

