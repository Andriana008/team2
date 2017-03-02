#pragma once 

void registration()
{
	system("cls");
	cout << " \t\t\t Welcome! \n" << "\t You need to fill a few fields to create an account \n ";
	cout << " \n if you agree , enter 1 ;\n";
	cout << " if you want to back to main menu, enter 2 ;\n";
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
			User user;
			user.inputInformationAboutUser();
			putInformationIntoTxtFile(user);
			cout << " \n \t\t Registration successfully completed ! \n";
			break;
		}
		case '2':
		{
			checkCorrectInput = true;
			cout << " \n \t\t You will be returned to main page \n";
			break;
		}
		default:
		{
			cout << "enter action (1,2,3) : ";
			cin >> action;
		}
		}
	}


	Sleep(3000); //затримка на 3 секунди

}
