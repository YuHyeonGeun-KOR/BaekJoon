#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)



int main() {

    char word[200] = { 'a' };
    int cnt = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != NULL; i++) {
    
        if (word[i] == 'c') {
            if (word[i + 1] == '=') {
                i++;
              
            }
            else if (word[i + 1] == '-') {
                i++;
                
            }
           
        }

        if (word[i] == 'd') {
            if (word[i + 1] == 'z'&&word[i+2]=='=') {
                i+=2;
               
            }
            else if (word[i + 1] == '-') {
                i++;
               
            }
           
        }

        if (word[i] == 'z') {
            if (word[i + 1] == '=') {
                i++;
             
            }
        }
   

        if (word[i] == 'n') {
            if (word[i + 1] == 'j') {
                i++;
             
            }
        }
      

        if (word[i] == 's') {
            if (word[i + 1] == '=') {
                i++;
             
            }
        }
      

        if (word[i] == 'l') {
            if (word[i + 1] == 'j') {
                i++;
              
            }
        }
       

        cnt++;
    }

    printf("%d", cnt);
    return 0;
   
}
    