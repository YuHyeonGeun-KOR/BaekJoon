#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)



int main() {
    int lose[50] ;
    memset(lose, -1, sizeof(lose));
    int cnt = 0;;

    int num[10] = {0,};

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

        
    for (int i = 0; i < 10; i++) {
        num[i] = num[i] % 42;
        
        lose[num[i]] = num[i];
    }
    
    for (int i = 0; i < 50; i++) {
            if (lose[i] != -1) cnt++;
     }
    
    printf("%d\n", cnt);

    return 0;

}