#include <stdio.h>
#include <math.h>

int main (){
    int n;
    int count = 0;
    int num = 2;

    while (1){
        printf("Введите число n: ");
        scanf("%d", &n);
        if (n >= 2){
            break;
        }
        else{
            printf("Введено неправильное число\n");
        }
    }

    while (num <= n){
        int simple = 1;
        int del = 2;

        do {
            if (num % del == 0 && del < num){
                simple = 0;
            }
            del++;
        } while (del * del <= num);

        if (simple){
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\nКоличество простых чисел: %d", count);

    // return 0;
}