#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"
#include <iostream>
#include <vector>

class BubbleSort:public Sort{
    public:
        virtual std::vector<int> sort(std::vector<int> list);
        void swap(int &a, int &b);
};

#endif // BUBBLESORT_H