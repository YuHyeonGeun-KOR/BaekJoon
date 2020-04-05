#include<iostream>

using namespace std;
#pragma warning(disable:4996)



int main() {
    int N = 0;
    int pos = 0;
    
    int num[9] = {0,};

    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }

    int Max = num[0];
    
    for (int i = 0; i < 9; i++) {
        if (num[i] >= Max) {
            Max = num[i];
            pos = i+1;
        }
    }
    printf("%d \n%d", Max, pos);

    return 0;

}