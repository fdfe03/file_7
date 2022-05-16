#include "BubbleSort.h"
#include <vector>
#include <iostream>
using namespace std;

void BubbleSort::swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int n = list.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (list.at(j) > list.at(j + 1)){
                swap(list.at(j), list.at(j + 1));
            } 
        }
    }
    return list;
}