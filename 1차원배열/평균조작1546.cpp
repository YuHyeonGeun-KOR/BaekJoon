#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)



int main() {
    double subject[1000];
    int N;
    double M = 0, Sum = 0;;
    double result = 0;
    
    memset(subject, 0, sizeof(subject));

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &subject[i]);
    }

    M = subject[0];
        
    for (int i = 0; i < N; i++) {
        if (subject[i] >= M) M = subject[i];
    }

    for (int i = 0; i < N; i++) {
        subject[i] = subject[i]/M*100;
        Sum += subject[i];
    }
    
    result = Sum / N;

    printf("%f\n", result);

    return 0;

}