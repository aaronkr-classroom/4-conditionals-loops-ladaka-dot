
#include <stdio.h>

void print_calender(int);

int main(void) {


	int short_mth = 2;
	int mid_mth1 = 4;
	int mid_mth2 = 6;
	int mid_mth3 = 9;
	int mid_mth4 = 11;


	int chuseok_mth = 10;
	int chuseok = 6;

	int this_mth = 9;
	int today = 30;
	



	if (this_mth==chuseok_mth) {
		printf("chuseok is coming\n");
	}
	else {
		printf("no chuseok yet\n");
	}

	for (int i = today; i < 31; i++ ) {
		printf("today is %d.%d",this_mth,today);
	}
	print_calender(this_mth);

	return 0;
}


void print_calender(int this_mth) {

	int short_mth = 2;
	int mid_mth1 = 4;
	int mid_mth2 = 6;
	int mid_mth3 = 9;
	int mid_mth4 = 11;
	int days;

	switch (this_mth) {
	
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30; break;
	case 2:
		days = 28; break;
	default:
		printf("That is not a month");
		return;
	}

	printf("\n***%d월***",this_mth);
	int rows = days / 7;
	int	cols = 7;

	for (int j = 1; j <= days; j++) {
		for (int i = 1; i <= 7; i++) {
			printf("%d\t",j);
		}
		printf("\n");
	}


}