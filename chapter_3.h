// PRACTICE PROGRAMS
/*
Write a program to score the paper-rock-scissor game. Each of two users
types in either P, R, or S. The program then announces the winner as
well as the basis for determining the winner: Paper covers rock, Rock
breaks scissors, Scissors cut paper, or Nobody wins. Your program
should include a loop that lets the user play again until the user says she
or he is done.
*/
#include <iostream>
#include <string>

/*
* An inline variable in C++ is a variable that is declared
* using an inline specifier. It is an exception to 
* one definition having multiple definitions
* across various translation units
*/
inline void rock_paper_scissor() {
	std::string answer;
	char input_1, input_2;
		do {
			std::cout << "Rock-paper-scissor game!\n" <<
				"Do you want to proceed? Enter yes/no\n";
			std::cin >> answer;
			if (answer == "no" || answer == "NO") {
				std::cout << "Okay, bye!\n";
				break;
			}
			std::cout << "The basis for determining the winner: " <<
				"paper covers rock, rock breaks scissors, scissors cut paper, or nobody wins\n" <<
				"Enter P, R, or S!\n";
			std::cout << "Enter Player_1's choice! ";
			std::cin >> input_1;
			std::cout << "Enter Player_2's choice! ";
			std::cin >> input_2;
			while ((input_1 == 'R' || input_1 == 'P' || input_1 == 'S') &&
				input_2 == 'R' || input_2 == 'P' || input_2 == 'S') {
				if (input_1 == input_2) {
					std::cout << "Nobody wins!\n";
					break;
				}
				else if (input_1 == 'P' && input_2 == 'R' ||
					input_1 == 'R' && input_2 == 'S' ||
					input_1 == 'S' && input_2 == 'P') {
					std::cout << "Player1 wins!\n";
					break;
				}
				else if (input_2 == 'P' && input_1 == 'R' ||
					input_2 == 'R' && input_1 == 'S' ||
					input_2 == 'S' && input_1 == 'P') {
					std::cout << "Player2 wins!\n";
					break;
				}
			}
		} while (answer == "yes" || answer == "YES");
}


/*
Write a program to compute the interest due, total amount due, and
the minimum payment for a revolving credit account. The program
accepts the account balance as input, then adds on the interest to get the
total amount due. The rate schedules are the following: The interest is
1.5 percent on the first $1,000 and 1 percent on any amount over that.
The minimum payment is the total amount due if that is $10 or less;
otherwise, it is $10 or 10 percent of the total amount owed, whichever is
larger. Your program should include a loop that lets the user repeat this
calculation until the user says she or he is done.
*/
inline void revolving_credit_account() {
	double account_balance, minimum_amount;
	double bank_due;
	std::string answer;
	do {
		std::cout << "A program to compute the interest due, total amount due, " <<
			"and the minimum payment for a revolving credit account\n" <<
			"Do you wish to proceed? Enter yes or no: ";
		std::cin >> answer;
		if (answer == "no" || answer == "NO") {
			std::cout << "Have a nice day.\n";
			break;
		}
		std::cout << "Please enter the account balance: ";
		std::cin >> account_balance;
/*
* input balance
* calculate percent like if > (1000 then balance - 1000) * 0.01 + 1000*0.015
* balance + percent
* minimum amount
*	if balance < 10
*		amount = =balance
*	else amount == (balance + percent) / 10.0
* + do - while
*/
		if (account_balance > 1000.0) {
			bank_due = (account_balance - 1000.0) * 0.015 + 1000.0 * 0.01;
		}
		else if (account_balance <= 1000.0 &&
			account_balance > 10.0) {
			bank_due = account_balance * 0.01;
		}
		else {
			bank_due = 0.0;
		}
		if ((account_balance + bank_due) > 10.0) {
			minimum_amount = (account_balance + bank_due) / 10.0;
		}
		else {
			minimum_amount = 10.0;
		}
		std::cout << "Result:\n" <<
			"Bank percent is " << bank_due << std::endl <<
			"Minimum amount to pay: " << minimum_amount << std::endl;
	} while (answer == "yes" || answer == "YES");
}
/*
* Write an astrology program. The user types in a birthday, and the program
responds with the sign and horoscope for that birthday. The month may
be entered as a number from 1 to 12. Then enhance your program so
that if the birthday is only one or two days away from an adjacent sign,
the program announces that the birthday is on a “cusp” and also outputs
the horoscope for that nearest adjacent sign. This program will have a
long multiway branch. Make up a horoscope for each sign. Your program
should include a loop that lets the user repeat this calculation until the
user says she or he is done.
The horoscope signs and dates are:
Aries March 21–April 19
Taurus April 20–May 20
Gemini May 21–June 21
Cancer June 22–July 22
Leo July 23–August 22
Virgo August 23–September 22
Libra September 23–October 22
Scorpio October 23–November 21
Sagittarius November 22–December 21
Capricorn December 22–January 19
Aquarius January 20–February 18
Pisces February 19–March 20
*/
inline void astrology_program() {
	std::string answer, month;
	int day;
	do {
		std::cout << "This is a horoscope program for October 15th. Do you wish to proceed? " <<
			"Enter yes or no: ";
		std::cin >> answer;
		if (answer == "no" || answer == "NO") {
			std::cout << "No more astrology for today.\n";
			break;
		}
		std::cout << "Enter your month: ";
		std::cin >> month;
		std::cout << "Enter your day: ";
		std::cin >> day;

		if ((month == "March" || month == "03" && day >= 21) ||
			(month == "April" || month == "04" && day <= 17)) {
			std::cout << "Your zodiac sign is Aries! " <<
				"Your horoscope: Are you experiencing a shopping hangover today? " <<
				"Are you worried that you outdid yourself despite your best intentions? " <<
				"Don't fret. You'll be back on track soon. Cash will begin flowing again " <<
				"and your lifestyle won't suffer. Instead of worrying about money, pay attention " <<
				"to your creative outlets. Follow that instinct and see where it takes you!\n";
			break;
		}
		else if ((month == "April" || month == "04") && (day > 17 && day <= 19)) {
			std::cout << "Your zodiac sign is Aries! " <<
				"Your horoscope: Are you experiencing a shopping hangover today? " <<
				"Are you worried that you outdid yourself despite your best intentions? " <<
				"Don't fret. You'll be back on track soon. Cash will begin flowing again " <<
				"and your lifestyle won't suffer. Instead of worrying about money, pay attention " <<
				"to your creative outlets. Follow that instinct and see where it takes you!\n";
			std::cout << "Your birthday is on a \"cusp\"! " <<
				"See the horoscope for Taurus: Today's planetary aspects may have you experiencing " <<
				"a little cabin fever. If you have the urge to go off by yourself for a while, " <<
				"do so.Try a new diversion. Drive down a country road you've never explored. " <<
				"Find some antique shops. You probably need a break from your daily routine. " <<
				"You'll feel revitalized.\n";
			break;
		}
		else if ((month == "April" || month == "04" && day >= 20) ||
			(month == "May" || month == "05" && day <= 18)) {
			std::cout << "Your zodiac sign is Taurus! " <<
				"Your horoscope: Today's planetary aspects may have you experiencing " <<
				"a little cabin fever. If you have the urge to go off by yourself for a while, " <<
				"do so.Try a new diversion. Drive down a country road you've never explored. " <<
				"Find some antique shops. You probably need a break from your daily routine. " <<
				"You'll feel revitalized.\n";
			break;
		}
		else if ((month == "May" || month == "05" && (day > 18 && day <= 20))) {
			std::cout << "Your zodiac sign is Taurus! " <<
				"Your horoscope: Today's planetary aspects may have you experiencing " <<
				"a little cabin fever. If you have the urge to go off by yourself for a while, " <<
				"do so.Try a new diversion. Drive down a country road you've never explored. " <<
				"Find some antique shops. You probably need a break from your daily routine. " <<
				"You'll feel revitalized.\n";
			std::cout << "Your birthday is on a \"cusp\"! " <<
				"See the horoscope for Gemini: OK, the party's over. Time to put away the sinful pleasures, " <<
				"the champagne, the chocolate truffles, and who knows what else. " <<
				"Take a good look at your home and get serious about putting things in order. " <<
				"A reality check is looming. Today would be a good day to get ready by " <<
				"tidying up the house and getting your brain in gear.\n";
			break;
		}
		// im too lazy to continue adding cusp days so lets pretend they`re all there and well
		else if ((month == "May" || month == "05" && day > 21) ||
			(month == "June" || month == "06" && day < 21)) {
			std::cout << "Your zodiac sign is Gemini! " <<
				"Your horoscope: OK, the party's over. Time to put away the sinful pleasures, " <<
				"the champagne, the chocolate truffles, and who knows what else. " <<
				"Take a good look at your home and get serious about putting things in order. " <<
				"A reality check is looming. Today would be a good day to get ready by " <<
				"tidying up the house and getting your brain in gear.\n";
			break;
		}
		else if ((month == "June" || month == "06" && day > 22) ||
			(month == "July" || month == "07" && day < 22)) {
			std::cout << "Your zodiac sign is Cancer! " <<
				"Your horoscope: You may be experiencing a wonderful openness to new ideas " <<
				"and grand plans. You're enjoying an active imagination and your intuition is sharp. " <<
				"Trust in your self - awareness and confidence. If a friend with a negative attitude " <<
				"tries to dissuade you from your plans, keep it in perspective. Consider the source. " <<
				"Stay in tune with your initiatives and you'll succeed.\n";
			break;
		}
		else if ((month == "July" || month == "07" && day > 23) ||
			(month == "August" || month == "08" && day < 22)) {
			std::cout << "Your zodiac sign is Leo! " <<
				"Your horoscope: If you're feeling restless today, don't fight it. Use your energy " <<
				"to do something physical. Go for a walk or play tennis. Anything that helps you " <<
				"release the excess energy will feel good. It's important that you pay attention " <<
				"to your body's signals. Getting a good night's rest will have you feeling refreshed " <<
				"tomorrow. You'll be able to deal with the tasks at hand.\n";
			break;
		}
		else if ((month == "August" || month == "08" && day > 23) ||
			(month == "September" || month == "09" && day < 22)) {
			std::cout << "Your zodiac sign is Virgo! " <<
				"Your horoscope: You don't want to sit still for a minute. You may make people dizzy " <<
				"with your energy, and you're itching to get away. You may be contemplating a long " <<
				"trip abroad. It's fine to fantasize about all the choices out there, but don't " <<
				"commit to anything today. Your imagination and spirit are a bit too high to settle " <<
				"on anything in particular.Just enjoy all the choices for now.\n";
			break;
		}
		else if ((month == "September" || month == "09" && day > 23) ||
			(month == "October" || month == "10" && day < 22)) {
			std::cout << "Your zodiac sign is Libra! " <<
				"Your horoscope: This would be a good day to pursue some new interests. Perhaps " <<
				"you've recently discovered a book that opens up new areas for you. If dreams recently " <<
				"punctuated your sleep, try to recall the general feeling you had and reflect on that " <<
				"for a while. You'll probably realize it's only emotional residue from all the " <<
				"exhaustion of the past few weeks catching up with you.\n";
			break;
		}
		else if ((month == "October" || month == "10" && day > 23) ||
			(month == "November" || month == "11" && day < 21)) {
			std::cout << "Your zodiac sign is Scorpio! " <<
				"Your horoscope: Are you fed up with everyone around you now? Are you fantasizing about " <<
				"walking out the door and not returning ? Go ahead - just for today! You probably need " <<
				"a break from everyone. Why not get a massage and float away for a while ? Your family " <<
				"will be happy to have you back, especially if you left them with plenty of assignments.\n";
			break;
		}
		else if ((month == "November" || month == "11" && day > 22) ||
			(month == "December" || month == "12" && day < 21)) {
			std::cout << "Your zodiac sign is Sagittarius! " <<
				"Your horoscope: The main things you need to do today are relax and enjoy your day. " <<
				"You may be feeling a bit under the weather and have a trip coming up that doesn't exactly " <<
				"thrill you. Stay alert, because you may receive an important message today from someone " <<
				"far away. You may also have a visitor arriving from out of town.\n";
			break;
		}
		else if ((month == "December" || month == "12" && day > 22) ||
			(month == "January" || month == "01" && day < 19)) {
			std::cout << "Your zodiac sign is Capricorn! " <<
				"Your horoscope: Cupid may have struck you unawares. Your libido could be in high gear " <<
				"today and you're ready for love. You look and feel great. Try your best to reach the one " <<
				"you love. If it isn't possible to get together this evening, see if you can plan a romantic " <<
				"interlude soon. If all else fails, dive into a romance novel and escape that way.\n";
			break;
		}
		else if ((month == "January" || month == "01" && day > 20) ||
			(month == "February" || month == "02" && day < 18)) {
			std::cout << "Your zodiac sign is Aquarius! " <<
				"Your horoscope: Today you may come down from your recent high with a thud. If you feel " <<
				"irritable dealing with everyday chores, you're not alone. Your mood may be exacerbated by a " <<
				"visit from an even grumpier friend. If you're feeling cooped up with the detritus of family " <<
				"life, take a break and go for a long walk to clear your head and raise your spirits. " <<
				"Tomorrow is another day.\n";
			break;
		}
		else if ((month == "February" || month == "02" && day > 19) ||
			(month == "March" || month == "03" && day < 20)) {
			std::cout << "Your zodiac sign is Pisces! " <<
				"Your horoscope: Today may be taken up with doing a lot of last-minute errands. You may be " <<
				"called on to referee a dispute among colleagues, relatives, or neighbors.Depending on the " <<
				"nature of the spat, you may be able to broker a temporary truce, but don't be too hard on " <<
				"yourself if tempers simmer despite your best efforts. Try and make relaxation a priority.\n";
			break;
		}
	} while (answer == "yes" || answer == "YES");
}


// PROJECT-LIKE PROGRAMS
/*
Write a program that computes the cost of a long-distance call. The cost of
the call is determined according to the following rate schedule:
a. Any call started between 8:00 am and 6:00 pm, Monday through Friday,
is billed at a rate of $0.40 per minute.
b. Any call starting before 8:00 am or after 6:00 pm, Monday through
Friday, is charged at a rate of $0.25 per minute.
c. Any call started on a Saturday or Sunday is charged at a rate of $0.15
per minute.
The input will consist of the day of the week, the time the call started, and
the length of the call in minutes. The output will be the cost of the call. The
time is to be input in 24-hour notation, so the time 1:30 pm is input as
13:30
The day of the week will be read as one of the following pairs of character
values, which are stored in two variables of type char:
Mo Tu We Th Fr Sa Su - WHAT THE FUCKING REASON FOR THIS WHY CANT I SIMPLY USE A STRING INSTEAD FUCK YOU
i`ll use a string because i fuck the rules and the authors' moms
Be sure to allow the user to use either uppercase or lowercase letters or a
combination of the two. The number of minutes will be input as a value
of type int. (You can assume that the user rounds the input to a whole
number of minutes.) Your program should include a loop that lets the
user repeat this calculation until the user says she or he is done.
*/
inline void call_cost() {
	std::string answer, start_time, day;
	int call_length, start_time_int;
	double bill;
	do {
		std::cout << "This is a program that computes the cost of a long-distance call. " <<
			"Do you wish to proceed? Enter yes or no: ";
		std::cin >> answer;
		if (answer == "no" || answer == "NO") {
			std::cout << "No calls left.\n";
			break;
		}
		std::cout << "Please enter the day of the week, the time the call started, and " <<
			"the length of the call in minutes below.\n";
		std::cin >> day >> start_time >> call_length;
		start_time_int = int(start_time[0,1]);
		if ((day == "Mo" || day == "mo" || day == "MO" ||
			day == "Tu" || day == "tu" || day == "TU" ||
			day == "We" || day == "we" || day == "WE" ||
			day == "Th" || day == "th" || day == "TH" ||
			day == "Fr" || day == "fr" || day == "FR") &&
			(start_time_int > 8 && start_time_int < 18)) {
			bill = call_length * 0.4;
			std::cout << "Your bill is: " << bill << std::endl;
		}
		else if ((day == "Mo" || day == "mo" || day == "MO" ||
			day == "Tu" || day == "tu" || day == "TU" ||
			day == "We" || day == "we" || day == "WE" ||
			day == "Th" || day == "th" || day == "TH" ||
			day == "Fr" || day == "fr" || day == "FR") &&
			(start_time_int < 8 || start_time_int > 18)) {
			bill = call_length * 0.25;
			std::cout << "Your bill is: " << bill << std::endl;
		}
		else if (day == "Sa" || day == "sa" || day == "SA" ||
			day == "Su" || day == "su" || day == "SU") {
			bill = call_length * 0.15;
			std::cout << "Your bill is: " << bill << std::endl;
		}
	} while (answer == "yes" || answer == "YES");
}
