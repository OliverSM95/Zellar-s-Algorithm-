# Zellar-s-Algorithm-

Imput dates and find out the day of the week you were born on (or any other dates past or furture)

Test Log: (Can also be found at the bottom of the code)

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
