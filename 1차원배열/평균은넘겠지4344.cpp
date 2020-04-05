#include<iostream>
using namespace std;
#pragma warning(disable:4996)


int main() {
    char answer[100] = {"a",};
    float list[2000];
    float Average[2000] = {0,};
    int time = 0;
    int cnt = 0;
    int score = 0;

    scanf("%d", &time);
    
    float* result = new float[time] {0,};
//학생수와 점수를 입력받고 평균을 계산
    for (int i = 0; i < time; i++) {
       //학생 수 입력
        scanf("%f", &list[0]);
       //점수를 저장하고 그 점수의 합산을 저장
        for (int j = 0; j < list[0]; j++) {
            scanf("%f", &list[j+1]);
            score += list[j+1];
        }
        //평균을 저장
        result[i] = score / list[0];
        //평균과 비교하여 점수가 높은 사람이 있으면 그 학생의 수를 저장
        for (int j = 0; j < list[0]; j++) {
            if (list[j+1] > result[i])    cnt++;
        }
		//평균 이상의 점수 소유자의 비율을 저장하고 비교값 초기화
        Average[i] = (cnt  / list[0]) * 100;
        cnt = 0;
        score = 0;
    }

    for (int i = 0; i < time; i++) {
        printf("%.3f%%\n", Average[i]);
    }

    delete[] result;
    result == NULL;
    return 0;

}