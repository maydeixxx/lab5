#include <stdio.h>
#include <math.h>

int main (){
    double a = 2.14;
    double b = -4.21;
    double c = 3.25;
    double x = -4.5;
    double x_en = -13.5;
    double h = 0.5;
    double max_y = -INFINITY; 
    double min_y = INFINITY;

     while (x >= x_en) {
       double y = (a * x * x + b * x + c) * sin(x);
        if (y > max_y) {
            max_y = y;
        }
        if (y < min_y) {
            min_y = y;
        }

        x -= h;
    }

    printf("Min = %.3f\nMax = %.3f", min_y, max_y);
}