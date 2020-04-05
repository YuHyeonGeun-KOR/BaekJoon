#include<iostream>
using namespace std;




int FiboTailRec(int n, int before, int next) {
    if (n == 0)
        return before;
    else
        return FiboTailRec(n - 1, next, before + next);
}

int FiboTail(int n) {
    return FiboTailRec(n, 0, 1);
}



int main() {
    int N;
    int result;
    cin >> N;
    result = FiboTail(N);
    cout << result;
    return 0;

}