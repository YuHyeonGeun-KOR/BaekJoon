#include <stdio.h>
#pragma warning(disable:4996)
int main() {

    int x[100];
    int y[100];

    int people = 0;

    scanf("%d", &people);

    for (int i = 0; i < people; i++) {

        scanf("%d %d", &x[i], &y[i]);


    }


    for (int i = 0; i < people; i++) {
        int rank = 0;
        for (int j = 0; j < people ; j++) {
            if (x[i] < x[j] && y[i] < y[j]) {
                rank++;

            }

            
        }
        printf("%d ", rank+1);
    }
    return 0;

}
