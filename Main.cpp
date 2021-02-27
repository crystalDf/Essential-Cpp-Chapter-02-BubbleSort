#include <iostream>
#include <vector>
#include <fstream>

#include "NumericSeq.h"

int main()
{
    int ia[8] = { 8, 34, 3, 13, 1, 21, 5, 2 };
    std::vector<int> vec(ia, ia + 8);

    std::cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    std::cout << "vector after sort: ";
    display(vec);

    int ia2[8] = { 8, 34, 3, 13, 1, 21, 5, 2 };
    std::vector<int> vec2(ia2, ia2 + 8);

    std::ofstream ofil("data.txt");

    ofil << "vector before sort: ";
    display(vec2, ofil);

    bubble_sort(vec2, &ofil);

    ofil << "vector after sort: ";
    display(vec2, ofil);
}