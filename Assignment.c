#include <stdio.h>
#define start 1
#define end 5

int main(void)
{
	int cnt, star; // cnt : 행을 바꿀 변수, star : *를 출력할 개수 설정

	for (cnt = start; cnt <= end; cnt++){
		printf("%d행 : ", cnt);
		if(cnt==start || cnt==end){
			for(star=start;star<=end;star++){
				printf("*");
			}
		}else{
			for (star = start; star <= end; star++){  // *의 개수를 출력
				if(star==start || star==end){
					printf("*");
				}else{
					printf(" ");
				}
			} 
		}
		printf("\n");
	}
	return 0;
}