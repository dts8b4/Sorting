#include <vector>

void print(std::vector<int>&);
bool isSorted(std::vector<int>&);

void insertionSort(std::vector<int>& list);

void selectionSort(std::vector<int>& list);

void bubbleSort(std::vector<int>& list);

int partition(std::vector<int>& list, int start, int end);
void quickSort(std::vector<int>& list, int start, int end);

std::vector<int> mergeSort(std::vector<int> list);

void radixSort(std::vector<int>& list);

void countingSort(std::vector<int>& list);

void bucketSort(std::vector<int>& list);

