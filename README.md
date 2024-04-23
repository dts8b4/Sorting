# Sorting
## Various Sorting Algorithms Implemented in C++

All code written by Dylan Sullins on 04/22/2024
using various sources for algorithms

Insertion, Selection, Bubble, Quick, Merge:

    Algorithm given by UMKC CS-201 class work

    Professor J. Gladbach


Radix LSD, Counting, Bucket:

    Algorithm given by Chat GPT when asked for 

    "really fast sorting algorithms."

    Note: Chat GPT did not suggest these when 

    asked for "fastest sorting algorithms"



After various tests, it remains clear that when given a list of random positive integers, counting sort defeats every other sorting algorithm in time, even as lists get comically large. Counting sort is lightning fast.


Bucket sort is fun. You can actually switch out the sorting algorithm within the bucketSort() function with any other sorting algorithms and test different times with that. I've found out that bucket with radix works well, and that bucket sort will improve greatly on insertion, selection, and bubble sort. It seems to only slightly improve on merge, quick, and radix sorts, and does not seem to improve counting sort at all. 

    *Bucket sort with insertion can outpace radix sort at low n values. It's stupid quick for some reason. But as n gets bigger,
    it slows down a fair amount. So switch that out for counting sort and you get something that outpaces quick and radix sorts.
    But running bucket sort with counting sort internally doesn't outpace counting sort by itself as far as I have seen. 
    So maybe not.

    *Bucket sort also has some weird errors that I haven't figured out when you have a bunch of small numbers. For instance, 
    if in testingSort.cpp, your max_int is 10, bucket sort will not work. I will come back to it and figure it out later, 
    but it is now midnight and I am sleepy.
    
    *Also, make sure if you're switching out the internal sort function to merge sort, you do: bucket = mergeSort(bucket);
