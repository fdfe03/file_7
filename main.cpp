#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    // If bubblesort: Sort* bubbleSort = new BubbleSort();
    Sort* quickSort = new QuickSort();
    RecursiveBinarySearch* binarySearch = new RecursiveBinarySearch();

    vector<int> num;

    string str;
    getline(cin, str);

    stringstream ss(str);
    for (int i; ss >> i;) {
        num.push_back(i);
    }

    num = quickSort->sort(num);
    if (binarySearch->search(num, 1)) cout << "true ";
    else cout << "false ";

    int n = num.size();
    for (int i = 0; i < n; i++) {
        cout << num.at(i) << " ";
    }
    cout << endl;
}