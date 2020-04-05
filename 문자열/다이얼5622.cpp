#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)



int main() {
    char word[20] = {'a',};
    int Dial[26] = { 2,  2,   2,  3  ,3,  3,  4,  4,   4 ,5 , 5  ,5 ,6  ,6  ,6  ,7  ,7  ,7  ,7  ,8  ,8  ,8  ,9  ,9  ,9  ,9 };
    int time = 0;
    int cnt = 0;
    scanf("%s", word);

    for (int i = 0; i < word[i] != '\0'; i++) {
        if (word[i] == 48) {
            time += 10;
            
        }
        else if (word[i] == 49) {
            time += 1;
            
        }
        else {

            time += Dial[word[i] - 65];
            
        }
        cnt++;
    }
    time += cnt;

    printf("%d", time);
    
    return 0;
   
}
    