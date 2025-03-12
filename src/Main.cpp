#include <iostream>
#include "QuickSorter.hpp"

int main() {
    int toSort[] = { 0, 312, 112, 3, 2, 3455, 42, 133, 69 };
    int len = 0;

    for (int i : toSort) len++;

    QuickSorter().sort(toSort, 0, len);

    for (int i : toSort) std::cout << i << ' ';

    std::cout << '\n';

    return 0;
}
