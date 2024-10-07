#include <stdio.h>
#include <math.h>

int main (){
    double pi = 0.0;
    double e = 0.00001;
    int n = 1;
    double ch = 1.0;
    
    while (1){
        double res = 4 * ch / n;
        pi += res;
        if (fabs(res) < e){
            break;
        }
        n += 2;
        ch *= -1;
    }

    printf("Pi = %f", pi);
    return 0;
}