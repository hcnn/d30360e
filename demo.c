#include <stdio.h>  // printf
#include "d30360e.h"

int main()
{
    int y1, m1, d1, y2, m2, d2;
    y1 = 2018; m1 = 12; d1 = 15;
    y2 = 2019; m2 = 3; d2 = 1;
    bool matu = true;

    double yf = d30360e(y1, m1, d1, y2, m2, d2, matu);
    printf("%.8f\n", yf);

	return 0;
}
