#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <iostream>
#include <vector>

class QuickSort:public Sort{
    public:
        virtual std::vector<int> sort(std::vector<int> list);
        std::vector<int> partition(std::vector<int> list, int lower, int higher);
        std::vector<int> helper(std::vector<int> list, int low, int high);
        void swap(int &a, int &b);
    private: 
        int pivot = 0;
};

#endif // QUICKSORT_H