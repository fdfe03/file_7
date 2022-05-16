#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;

bool RecursiveBinarySearch::helper(std::vector<int> list, int target, int start, int end){
    if (start > end) return false;
    int mid = start + (end - start) / 2;

    if (list.at(mid) == target) return true;
    else if (list.at(mid) < target) 
        return helper(list, target, mid+1, end);
    else
        return helper(list, target, start, mid-1);
    
    return false;
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    return helper(list, target, 0, list.size() - 1);
}