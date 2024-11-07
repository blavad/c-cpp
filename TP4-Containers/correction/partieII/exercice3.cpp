#include <iostream>
#include <vector>

std::vector<int> range(int n)
{
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = i;
    }
    return vec;
}

void printVector(std::vector<int> vec)
{
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = range(101);
    printVector(vec);
}