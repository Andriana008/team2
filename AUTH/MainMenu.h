#pragma once
void mainMenu()
{
	system("cls");
	cout << " \tif you want to create a new profile ,  enter 1 . \n ";
	cout << " \tif you want to log in ,  enter 2 . \n ";
	cout << " \tif you want to view all adverrisement ,  enter 3 . \n ";
	cout << " \tif you want to exit ,  enter 4 . \n ";
	cout << "  Action : ";
	char action;
	cin >> action;

	bool checkCorrectInput = false;
	while (!checkCorrectInput)
	{
		switch (action)
		{
		case '1':
		{
			checkCorrectInput = true;
			registration();
			mainMenu();

		}
		case '2':
		{
			checkCorrectInput = true;

			system("cls");
			cout << " \t\t\t Log in \n ";
			User user;
			string pass, email; 
			cout << " enter your email  : \n";
			cout << "\t";
			cin >> email;
			cout << " enter your password : \n\t";
			cin >> pass;


			logIn(email, pass);
			if (checkIfCorrect(email, pass) == true)
			{
				putAdvertisementInformationIntoTxtFile(user);
			}
			
			mainMenu();
			break;
		}
		case '3':
		{
			checkCorrectInput = true;
			cout << "\tHere you can find all available advertisement \n";
			vector<Advertisement> vectWithAllInformation;
			getAllAdvertisementWith1FromFile(vectWithAllInformation);
		
			
			mainMenu();
			break;
		}

		case '4':
		{
			checkCorrectInput = true;
			exit();
			break;
		}
		default:

		{
			cout << "enter action (1,2,3,4) : ";
			cin >> action;
		}


		}
	}
}