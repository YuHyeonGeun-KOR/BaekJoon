#include<iostream>
using namespace std;
#pragma warning(disable:4996)


int main() {
    char answer[100] = {"a",};
    int time = 0;
    int cnt = 0;
    int token = 0;
    int result[100] = {0, };

    scanf("%d", &time);

    for (int i = 0; i < time; i++) {
        
        scanf("%s", answer);
        
        for (int j = 0; answer[j] != NULL; j++) {
            if (answer[j] == 'O') {
                cnt++;
                if (token != 0) {
                cnt += token;
             }
                token++;
            }
            else if (answer[j] == 'X') {
                token = 0;
            }
        }

        result[i] = cnt;
        cnt = 0;
        token = 0;
    }

    for (int i = 0; i < time; i++) {
        printf("%d\n", result[i]);
    }

    return 0;

}