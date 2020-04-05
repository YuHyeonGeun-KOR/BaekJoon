#include<iostream>

using namespace std;
#pragma warning(disable:4996)



int main() {
    int N = 0;;
    
    scanf("%d",&N);
    
    int* num = new int[N] {0,};

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }

    int Max = num[0];
    int Min = num[0];

    for (int i = 0; i < N; i++) {
        if (num[i] >= Max)   Max = num[i];
        if (num[i] <= Min)   Min = num[i];
    }
    printf("%d %d", Min, Max);
    printf("\n");

    return 0;

}