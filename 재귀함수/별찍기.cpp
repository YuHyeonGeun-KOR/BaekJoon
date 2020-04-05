#include <iostream>
#include <cstring>
using namespace std;

char mat[3000][3000];
//뼐찍기에서 규칙은 해당좌표가 3으로 나눈 나머지가 1일떄 공백이 발생한다는 규칙을 가지고 있다. 
void stampstar(int y, int x, int num)
{
    if (num == 1)
    {
        mat[y][x] = '*';
        return;
    }

    int div = num / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                ;
            else
                stampstar(y + (i * div), x + (j * div), div);
        }
    }
}
int main()
{
    int N;
    cin >> N;

    memset(mat, ' ', sizeof(mat));

    stampstar(0, 0, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << mat[i][j];
        cout << endl;
    }
    cout << endl;
}

/*
재귀함수는 분할정복이라는 의미를 가지는데 이때 분할을 했을때 하나의 함수가 어떠한 규칙을 가지고 있는지 먼저 생각해보고 그 이후에 규칙에 맞는 함수를 설정하는것이 중요하다.

*/