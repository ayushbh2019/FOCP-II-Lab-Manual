#include<iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++) {
        int temp;
        if (i < n) temp = 2 * (n - i) - 1;
        else temp = 2 * (i - n + 1) + 1;
        for (int j = 0; j < temp; j++)
            printf(" ");
        for (int k = 0; k < 2 * n - temp; k++) {
            if (k == 0 || k == 2 * n - temp - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}