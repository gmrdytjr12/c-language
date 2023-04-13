#include <stdio.h>
// int main() {
// 	int a=3; a=a+3; a=a-3; // =,+.-
// 	a=a*3; a=a/3; a=a%3; // *,/,%
// 	printf("%d\n",a);
// };

int main() {
	int num = 0;
	printf("정수를 입력:");
	scanf("%d", &num);
	
	if(num%2 == 0) {
		printf("짝수입니다.\n");
	}else {
		printf("홀수입니다.\n");
	}
} 