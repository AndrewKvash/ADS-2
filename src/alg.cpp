// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double res = value;
    for (int i = 1; i < n; i++) {
        res = res * value;
    }
    if (n == 0) {
        res = 1;
    }
    return res;
}

uint64_t fact(uint16_t n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (n - i);
    }
    return res;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double e = 0;
    for (int i = 0; i <= count; i++) {
        e = e + calcItem(x, i);
    }
    return e;
}

double sinn(double x, uint16_t count) {
    double sin = 0;
    for (int i = 1; i <= count; i++) {
        sin = sin + pown(-1, i - 1) * calcItem(x, 2 * i - 1);
    }
    return sin;
}

double cosn(double x, uint16_t count) {
    double cos = 0;
    for (int i = 1; i <= count; i++) {
        cos = cos + pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    }
    return cos;
}
