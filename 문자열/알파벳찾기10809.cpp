#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)


int main() {
    char a[200];
    int word = 'a';
    int alpha[26];
    memset(alpha, -1, sizeof(alpha));
    memset(a, -1, sizeof(a));

    
    scanf("%s", &a);
   
    for (int i = 0; a[i] != -1; i++) {
        if(alpha[a[i] - 97]==-1)
        alpha[a[i] - 97] = i;
        
    }

    for (int i = 0; i<26; i++) {
        printf("%d ", alpha[i]);
    }

    return 0;

}