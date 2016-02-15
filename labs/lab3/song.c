#include <stdio.h>

void day01(void);
void day02(void);
void day03(void);
void day04(void);
void day05(void);
void day06(void);
void day07(void);
void day08(void);
void day09(void);
void day10(void);
void day11(void);
void day12(void);

int main( ) {
	printf("\nOn the first day of Christmas, my true love gave to me\n");
	day01();
	printf("\nOn the second day of Christmas, my true love gave to me\n");
	day02();
	printf("\nOn the third day of Christmas, my true love gave to me\n");
	day03();
	printf("\nOn the fourth day of Christmas, my true love gave to me\n");
	day04();
	printf("\nOn the fifth day of Christmas, my true love gave to me\n");
	day05();
	printf("\nOn the sixth day of Christmas, my true love gave to me\n");
	day06();
	printf("\nOn the seventh day of Christmas, my true love gave to me\n");
	day07();
	printf("\nOn the eighth day of Christmas, my true love gave to me\n");
	day08();
	printf("\nOn the nineth day of Christmas, my true love gave to me\n");
	day09();
	printf("\nOn the tenth day of Christmas, my true love gave to me\n");
	day10();
	printf("\nOn the eleventh day of Christmas, my true love gave to me\n");
	day11();
	printf("\nOn the twelfth day of Christmas, my true love gave to me\n");
	day12();

	return 0;
}

// EACH OF THE FOLLOWING FUNCTIONS MUST
// 1. Have a single print statement that only prints one line
// 2. Have a single function call to one other "dayNN" function
//	Except for day01, which does not call any other functions 
//

void day01(void) {
	printf("\ta partridge in a pear tree\n");
	return;
} 

void day02(void) {
	printf("\ttwo turtle doves\n");
    day01();
	return;
}

void day03(void) {
	printf("\tthree french hens\n");
    day02();
    return;
}

void day04(void) {
	printf("\tfour calling birds\n");
    day03();
    return;
}

void day05(void) {
	printf("\tfive golden rings\n");
    day04();
    return;
}

void day06(void) {
    printf("\tsix geese a-laying\n");
    day05();
    return;
}

void day07(void) {
	printf("\tseven swans a-swimming\n");
    day06();
    return;
}

void day08(void) {
    printf("\teight maids a-milking\n");
    day07();
    return;
}

void day09(void) {
	printf("\tnine ladies dancing\n");
    day08();
    return;
}

void day10(void) {
	printf("\tten lords a-leaping\n");
    day09();
    return;
}

void day11(void) {
	printf("\televen pipers piping\n");
    day10();
    return;
}

void day12(void) {
	printf("\ttwelve drummers drumming\n");
    day11();
    return;
}
