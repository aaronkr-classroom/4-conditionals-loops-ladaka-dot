#include <stdio.h>

void check369(int);

int main(void) {

	int num = 0;
	printf("369 게임 환영\n");
	printf("언제까지 합니까\n");
	scanf_s("d", &num);

	check369(num);

	return 0;
}
void check369(int_num) {
	for (int i = 1; i <= num; i++) {

		int contains369 = 0;
		int temp = num;

		while (temp > 0) {

			int digit = temp % 10;

			switch (digit) {
			case 3:
			case 6:
			case 9:

			}
		}

	}
	


}