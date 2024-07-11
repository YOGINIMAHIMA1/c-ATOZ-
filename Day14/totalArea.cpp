// totalArea.cpp
#include "totalArea.h"

double totalArea(const Shape* shapes[], int count) {
    double total = 0.0;
    for (int i = 0; i < count; ++i) {
        total += shapes[i]->area();
    }
    return total;
}
