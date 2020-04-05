#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)


int main() {
    char word[1000000] = { 'a', };
    int Max = 0;
    int cnt[26];
    int save=0;
    memset(cnt, 0, sizeof(cnt));
    char Save = 'a';
    scanf("%s", word);
//소문자를 전부 대문자로 변경하여 새로 저장
    for (int i = 0; word[i] != NULL; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            cnt[word[i] - 97]++;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z') {
            cnt[word[i] - 65]++;
        }
    }
//한바퀴를 돌려서 최대값 찾기
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > Max) {
            Max = cnt[i];
            save = i;
        }
    }
//최대값을 비교하는데 저장했던 알파백과 같은 값이 있으면 ?출력하고 아니라면 저장했던 알파벳 출력
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == Max) {
            if (i != save) {
              printf("%c", 63);
              return 0;
            }
        }
        
    }
    printf("%c", save + 65);
    return 0;
    
    }
    
    