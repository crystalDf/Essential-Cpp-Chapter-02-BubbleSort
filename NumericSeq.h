#pragma once

#include <iostream>
#include <vector>
#include <fstream>

void display(const std::vector<int>& vec, std::ostream& os = std::cout);
void swap(int& val1, int& val2, std::ofstream* ofil = 0);
void bubble_sort(std::vector<int>& vec, std::ofstream* ofil = 0);
