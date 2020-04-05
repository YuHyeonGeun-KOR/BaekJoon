#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)
#define MAX_SIZE 1000001


int main() {
    char *word = new char[MAX_SIZE];
    memset(word,'\0', sizeof(word[MAX_SIZE]));
    int i = 0;
    int cnt = 0;
     scanf("%[^\n]", word);
//if first word and second word = " " or '\0' ==> word cnt = 0; else i++; 
    if (word[0] == ' '){
        if(word[1] != '\0') i++;
        else {
            printf("%d", cnt);
            return 0;
        }
    }
    else if(word[0]=='\0') {
        printf("%d", cnt);
        return 0;
    }
 
//if word[i]= space -> cnt++ 
    for (i; word[i] != '\0'; i++) {
        if (word[i] == ' ') { 
            if(word[i+1] != '\0')
            cnt++;
            
        }

    }
	//sentence end;
    cnt++;
    printf("%d", cnt);
    

    delete[] word;
    word = NULL;
    return 0;
}
    