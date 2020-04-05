#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)


int main() {
    char S[20] = {'0',};
    int T =0;
    int Copy = 0;
    int R = 0;
    int cnt = 0; 
    char P[2000][200] = { 'a', };
    
    scanf("%d", &T);
 
    for (int i = 0; i<T; i++) {
        
        scanf("%d", &Copy);
        scanf("%s", &S);

        for (int j = 0; S[j]!=NULL; j++) {
            for (int k = 0; k < Copy; k++) {
                P[i][cnt] = S[j];
                cnt++;
            }
        }
        cnt = 0;
    }

    for (int i = 0; i<T; i++) {
        for (int j = 0; P[i][j] != NULL; j++) {
        
            printf("%c", P[i][j]);
        
        }
        printf("\n");
    }

  

}