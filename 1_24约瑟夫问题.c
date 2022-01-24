#define _CRT_SECURE_NO_WARNINGS 1
//约瑟夫问题
#include <stdio.h>
#include <stdlib.h>
int main(void){	
	int N = 0, k = 0;
	while (scanf("%d %d", &N, &k) != EOF){
		//让用数存储人的编号
		int arr[1000] = { 0 };
		for (int i = 0;i < 1000;i++){
			arr[i] = i + 1;
		}
		if (N == 0 && k == 0){
			printf("End Of Input\n");
			exit(0);
		}
		if ((N < 3 || N>1000) || (k < 3 || k>1000)){
			printf("Input Error\n");
			continue;
		}
		//要计算总人数，方便判断退出循环
		int count = 0, i = 0, total = N;
		while (total > 1){
			for (i = 0;i < N;i++){
				if (arr[i] != 0){
					count++;
				}
				if (count == k){
					arr[i] = 0;
					count = 0;
					total--;
				}
			}
		}
		//最后剩的人
		int MAX = arr[0];
		for (int i = 1;i < N;i++){
			if (arr[i] > MAX){
				MAX = arr[i];
			}
		}
		printf("%d\n", MAX);
	}
	
	return 0;
}