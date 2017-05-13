#include <iostream>
using namespace std;

int main() {
	int total_coins,
		quarters = 0,
		dimes = 0,
		nickels= 0,
		pennies = 0;

	cout << "Please enter a give amount of change in cents: "; //Ask the user to give the amount of change
	cin >> total_coins; //store the amount given

	do {
		if (total_coins >= 25){
			total_coins = total_coins - 25; //Calculate the number of quarters
			++quarters; //Update the number of quarters
      }
		if (total_coins <= 25 && total_coins >= 9){
			total_coins = total_coins - 10; //Calculate the number of dimes
			++dimes;  //Update the number of dimes
		}
		if (total_coins <= 9 && total_coins >= 5){
			total_coins = total_coins - 5; //Calculate the number of nickels
			++nickels; //Update the number of nickels
		}
   	if (total_coins <= 4 && total_coins >= 1){
			total_coins = total_coins - 1; //Calculate the number of pennies
			++pennies; //Update the number of pennies
		}
	} while (total_coins > 0); //run this loop as long as there are coins remaining

	cout << "You get: " << endl;
	if (quarters >= 1) //if there are quarters present, display how many
		cout << quarters << " quarters" << endl;
	if (dimes >= 1) //if there are dimes present, display how many
		cout << dimes << " dimes" << endl;
	if (nickels >= 1) //if there are nickels present, display how many
		cout << nickels << " nickels" << endl;
	if (pennies >= 1) //if there are pennies present, display how many
		cout << pennies << " pennies" << endl;

	system("pause");

	return 0;
}
