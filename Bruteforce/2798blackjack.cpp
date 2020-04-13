#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)

int main() {

	int N = 0;
	int M = 0;
	int cnt = 0;
	int num = 0;
	int total = 0;

	scanf("%d  %d", &N, &M);
	
	int arr[100] = {0,};

	//input the num
	for(int i=0; i<N; i++){
		scanf("%d", &num);
		arr[i] = num;
	
	}

	//Choose three from the numbers in the arrayand add them.
	//If the number is equal to or less than M, storeand print the nearest number to M.
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j+1; k < N; k++) {
			
				if (arr[i] + arr[j] + arr[k] <= M && arr[i] + arr[j] + arr[k] > total)
					total = arr[i] + arr[j] + arr[k];
			
			}
		}
	
	}
	
	//print the reuslt
	
	printf("%d", total);

	return 0;
}