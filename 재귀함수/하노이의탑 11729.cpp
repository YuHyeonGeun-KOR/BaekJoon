#include<iostream>
using namespace std;
#pragma warning(disable:4996)

//하노이는 규칙이 무언가를 목적지로 옮기려고 하면 그 위에있는걸 가려고하는 목적지가 아닌 나머지 공간에 옮겨야 하고 이러한 과저을 반복하면 된다 .
void Hanoi(int k, int a, int b) {



    if (k == 1) {
        printf("%d %d", a, b);
        printf("\n");
    }
    else {
        Hanoi(k - 1, a, 6 - a - b);
        printf("%d %d", a, b);
        printf("\n");
        Hanoi(k - 1, 6 - a - b, b);
    }

}


int main() {
    int K = 0;;
    int time[20] = { 1,3,7,15,31,63,127,255,511,1023,2047,4095,8191,16383,32767,65535,131071,262143,524287,1048575 };
  
    scanf("%d",&K);
    printf("%d",time[K - 1]);
    printf("\n");
    Hanoi(K, 1, 3);

    return 0;

}