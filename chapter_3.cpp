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

void rock_paper_scissor() {
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
void revolving_credit_account() {
	int account_balance{}, bank_due{}, minimum_amount{};
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
		if (account_balance > 1000) {
			bank_due = (account_balance - 1000) * 0.015 + 1000 * 0.01;
		}
		else if (account_balance <= 1000 &&
			account_balance > 10) {
			bank_due = account_balance * 0.01;
		}
		else {
			bank_due = 0;
		}
		if ((account_balance + bank_due) > 10) {
			minimum_amount = (account_balance + bank_due) / 10.0;
		}
		else {
			minimum_amount = 10;
		}
		std::cout << "Result:\n" <<
			"Bank percent is " << bank_due << std::endl <<
			"Minimum amount to pay: " << minimum_amount << std::endl;
	} while (answer == "yes" || answer == "YES");
}
int main() {
	rock_paper_scissor();
	revolving_credit_account();
}