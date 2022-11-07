//Oct 30th 2022
//This project is where you input a date(ur birthday) and it tells you the day it falls on)

// File Libs
#include <math.h>
#include <stdio.h>


//fuction for getting date and solving the date
void enterdate() {
	//undefined but stated vars for us to point later in scanf_s
	int year;
	int month;
	int day;

	//intro set of instructions

	printf("\nWhat year were you born: ");
	scanf_s("%d", &year);
	printf("What month were you born: ");
	scanf_s("%d", &month);

	if (month <= 2) {
		month = month + 17;
	}

	printf("What day were you born: ");
	scanf_s("%d", &day);


	
	// k is year (eg 1964) and it mods(%) it by 100 so it brings the dot over 2 spots leaving you with just (64)

	//========== deviding (/) moves the decimel over and removes the character on the right while mod(%) ...
	//brings it over the same but makes your number the decimal instead of the whole (ie. 1964 / 10 = 196, while 1964 % 10 is 4)

	int k = year % 100;


	
	//j now works it takes the year (eg. 1974) and devides it by 10 twice and since its an int the decimals dont matter
	int j = year / 10 /10 ;


	// this is zellars agorthm - a math equation made to calculate what day things fall on
	


	//zellars constant
	//for months 3-12

	
	int x = (day + (13 * (month + 1) / 5) + k + (k / 4) + 5 - j)%7; 





	printf("\n=== numbers and testing===\n\n");
	printf("j is: %d\nk is: %d\n",j,k);
	printf("month value is %d\n\n", month);
	printf("zellars number is: %d\n",x);


		//now onto to if statement

		if (x == 0){
			printf("\n\n Your Birthday falls on a Sunday\n");
		}
		else if (x == 1) {
			printf("\n\n Your Birthday falls on a Monday\n");
		}
		else if (x == 2){
			printf("\n\n Your Birthday falls on a Tuesday\n");
		}
		else if (x == 3) {
			printf("\n\n Your Birthday falls on a Wednesday\n");
		}
		else if (x == 4) {
			printf("\n\n Your Birthday falls on a Thursday\n");
		}
		else if (x == 5) {
			printf("\n\n Your Birthday falls on a Friday\n");
		}
		else if (x == 6) {
			printf("\n\n Your Birthday falls on a Saturday\n");
		}
		else {
			printf("How did you get here?");
		}

}


void welcome() {

	printf("== Welcome, I am \"DATP\"== \n");
	printf("Date.Analysis.Tracking.Program.\n");
	printf("Created By: Oliver Simm - Oct 30th 2022\n");
	printf("Press anything to continue to the instructions");
	printf("\n=====eg. 2006, 3 , 19 =====\n");
	scanf_s("since this is just waiting for anything to be pressed nothing is required in it");

}

int reset = 1;

int main() {
	//print a neat looking guide (what numbers to put in)
	if (reset == 1) {
		welcome();

		enterdate();

		reset = 0;
	}
	printf("\n\nEnter 1 to reset: ");
	scanf_s("%d", &reset);
	main();

	return 0;

}


//=============================================
// ======== - Need to fix - ==================

// - make guide that pops up before u enter anything

