// code by savir singh
// 15/15 on DMOJ & CCC Grader

#include <bits/stdc++.h>
using namespace std;

int *oldGeneration;
int *newGeneration;
int n;
long long t;

void read1()
{
    std::cin >> n >> t;
    oldGeneration = new int[n];
    newGeneration = new int[n];
    std::string input;
    std::getline(std::cin, input);
    std::getline(std::cin, input);
    for (int i = 0; i < n; i++)
    {
        if (input.c_str()[i] == '0')
            oldGeneration[i] = 0;
        else
            oldGeneration[i] = 1;
    }
}

void write1()
{
    for (int i = 0; i < n; i++)
    {
        std::cout << oldGeneration[i];
    }
    delete oldGeneration;
    delete newGeneration;
}

int getCyclicPointer(long long cyclicIndex)
{
    long long nonCyclicIndex = cyclicIndex % n;
    if (nonCyclicIndex < 0)
        return n + nonCyclicIndex;
    else
        return nonCyclicIndex;
}

void sim1(long long numberOfGenerations)
{
    for (int i = 0; i < n; i++)
    {
        newGeneration[i] = oldGeneration[getCyclicPointer(i - numberOfGenerations)] ^ oldGeneration[getCyclicPointer(i + numberOfGenerations)];
    }
}

void swap1()
{
    int* intermediate = oldGeneration;
    oldGeneration = newGeneration;
    newGeneration = intermediate;
}

long long lpt(long long max)
{
    unsigned long long powerOfTwo = 1;
    for (int i = 0; i < 64; i++)
    {
        powerOfTwo <<= 1;
        if (powerOfTwo > max)
        {
            powerOfTwo >>= 1;
            return (long long)powerOfTwo;
        }
    }
    return 0;
}

int main()
{
    read1();
    long long left1 = t;
    while (left1 > 0)
    {
        long long largestPower = lpt(left1);
        left1 -= largestPower;
        sim1(largestPower);
        swap1();
    }
    write1();
    return 0;
}
