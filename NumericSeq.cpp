#include "NumericSeq.h"

void display(const std::vector<int>& vec, std::ostream& os)
{
    for (int ix = 0; ix < vec.size(); ++ix)
    {
        os << vec[ix] << ' ';
    }
    os << std::endl;
}

void swap(int& val1, int& val2, std::ofstream* ofil)
{
    if (ofil != 0)
    {
        (*ofil) << "swap(" << val1
            << ", " << val2 << ")" << std::endl;
    }

    int temp = val1;
    val1 = val2;
    val2 = temp;

    if (ofil != 0)
    {
        (*ofil) << "after swap(): val1: " << val1
            << " val2: " << val2 << std::endl;
    }
}

void bubble_sort(std::vector<int>& vec, std::ofstream* ofil)
{
    for (int ix = 0; ix < vec.size(); ++ix)
    {
        for (int jx = ix + 1; jx < vec.size(); ++jx)
        {
            if (vec[ix] > vec[jx])
            {
                if (ofil != 0)
                {
                    (*ofil) << "about to call swap! ix: " << ix
                            << " jx: " << jx << "\t" << "swapping: "
                            << vec[ix] << " with " << vec[jx] << std::endl;

                    swap(vec[ix], vec[jx], ofil);
                }
                else
                {
                    swap(vec[ix], vec[jx]);
                }
            }
        }
    }
}