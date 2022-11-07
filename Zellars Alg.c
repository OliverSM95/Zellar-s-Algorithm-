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

/*
_______Testing_______
My project is about Zellars algoritm which is a mathmatical statement that produces an answer of, the day of the week that 
the imputed date was that year.
The start of my code requires you to enter 3 different numbers. The first was the year you were born with "int year;"
The second is your month you were born "int month;". 1 issue with zellars algorithm is that
normaly january and febuary have to be listed
as 13 & 14 instead of the regular eg. March = 03. The final is the day "int day;"

When entering the dates the imputed numbers go through zellars equation on *line 53.

When testing the code I had 2 main problems.
- Even though I had january and febuary as 13 and 14 the dates simply wouldnt work.
-If the imputed year were to long ago roughly (1700 and less) the dates wouldnt work

Note:(I have a website to test if the dates are correct) Site: https://www.mathsisfun.com/games/dayofweek.html (dont judge my website choice)
-The website also has year inaccuracy limits (1582-4902)

When testing the code, I would first check for errors then run/build "f5"

I used the same date for most of my testing (2004 03 16) I kept it as a "parent tester" (like a porabola) 
so any time if I needed to quickly test it to see if it was woking and know strait away.
when fixing the jan feb issue with my code. I used an if statement to move imputed 1 or 2 to + 12 which wouild make them 13,14
I trial and errored it going up 1 number on the (+12) number trying to see if the date would change.
It felt hopeless as I went up with no avail. but luckly when I got to +17 it worked and the Jan/Feb issue was fixxed.
I belive that the year issue is just a fault of the equation and couldnt be changed.

Also when testing I printed useful information reguarding months and their numbers.

I also gave it some character and named the project. 

===Zellars Algorithm======
Zellars constant produces 7 numbers 
0,1,2,3,4,5,& 6
0 is Sunday and 6 is Saturday






*/