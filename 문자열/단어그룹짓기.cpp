#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)



int main() {

    char word[200] = { 'a' };
    int N = 0;
    int cnt = 0;
    int token = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
       
        scanf("%s", word);
        int check[26] = { 0, };

        for (int i = 0; i < word[i] != NULL; i++) {
        
            if (check[word[i] - 97] == 0) {
                check[word[i] - 97] ++;
                token = 1;
            }
            else if (check[word[i] - 97] != 0) {
               if(word[i] != word[i - 1]) {
                    token = 0;
                    break;
                }
            }
        }

        cnt += token;
        token = 0;
        
    }

    printf("%d", cnt);
    return 0;
   
}
    