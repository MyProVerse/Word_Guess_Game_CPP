
#include <iostream>

using namespace std;

int main()
{
	char array1[20] = { "ELEPHANT" };
	char array2[20] = { '\0' };

	char choice;
	int level;
	cout << "\t\tWELLCOME TO HANGMAN" << endl;
	cout << "press 1 for easy " << endl << "press 2 for hard" << endl;
	cin >> level;

	int count3 = 0;
	int count4 = 0;

	if (level == 1){

		do
		{
			int index = 0;
			int tries = 1;
			int i = 5;
			int count = 0;
			do{
				cout << " HINT: it is the name of animal in capital letters" << endl;
				cout << "ELEP*AN*" << endl;

				cout << endl;

				cout << "please guess the word: ";
				cin >> array2;

				cout << endl;

				while (array2[index] != '\0'&&array2[index] != '\0'){
					if (array2[index] != array1[index])
						break;
					index++;

				}

				if (array2[index] == array1[index]){
					cout << "you have won the game!" << endl;
					count3++;

					break;
				}
				else

					cout << "try again you " << endl << endl << "You have tried " << tries++ << " time now " << --i << "  left" << endl;
				count4++;

				count++;
			} while (count < 5);

			cout << "please input Y to play more and N for exit" << endl;
			cin >> choice;


		} while (!(choice == 'N' || choice == 'n'));
	cout << count3 << " number of winnings" << endl;
		cout << count4 << " number of losses " << endl;
		if(count3<=0)
		{
			cout<< " The word was: "<< array1 << endl;
		}


	}


	if (level == 2){

		do
		{
			int index = 0;
			int tries = 1;
			int i = 5;
			int count = 0;
			do{
				cout << " HINT: it is the name of animal in capital letters" << endl;
				cout << "\tELE**AN*" << endl;

				cout << endl;

				cout << "please guess the word: ";
				cin >> array2;

				cout << endl;

				while (array2[index] != '\0'&&array2[index] != '\0'){
					if (array2[index] != array1[index])
						break;
					index++;

				}

				if (array2[index] == array1[index]){
					cout << "you have won the game!" << endl;
					count3++;

					break;
				}
				else

					cout << "try again you " << endl << endl << "You have tried " << tries++ << " time now " << --i << "  left" << endl;
				count4++;

				count++;
			} while (count < 5);

			cout << "please input Y to play more and N for exit" << endl;
			cin >> choice;


		} while (!(choice == 'N' || choice == 'n'));


		cout << count3 << " number of winnings" << endl;
		cout << count4 << " number of losses " << endl;
		if(count3<=0)
		{
			cout<< " The word was: "<< array1 << endl;
		}
		
	}

	//ALI ZAMAN L1F21BSCS1119//

	system("pause");
	return 0;
}
