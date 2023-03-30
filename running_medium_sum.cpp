
#include <iostream>
#include <limits.h>
#include <chrono>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

double median(vector<int> array, int n) {
    double median = 0;
    if (n % 2 == 0) {
        median = (array[n/2] + array[n/2 - 1]) / 2.0;
    } else {
        median = array[n/2];
    }
    return median;
}