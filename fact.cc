#include <iostream>
#include "fact.h"

int factorial(int n) {
    // TODO n<0のときの処理を追加

    if (n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}
