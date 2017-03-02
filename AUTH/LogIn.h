#pragma once
#include<vector>

void logIn(string email, string pass);
boolean checkIfCorrect(string email,string pass);

void logIn(string email, string pass)
{
	

	if (checkIfCorrect(  email, pass))
		{
			User obj(email, pass);
//			correctLogIn(obj);
		}
		else
		{
		cout << "this user does not exist at our base =(";
	cout << "\n you will  be returned to main menu after 2 sec .";
	Sleep(2000);
		}
	

}

boolean checkIfCorrect(string email,string pass)
{
	vector<User> passAndEmailOfAllUsers;

	getAllUsersFromFile(passAndEmailOfAllUsers);

	bool checkIflog_PasCorrect = false;

	for (int i = 0; i < passAndEmailOfAllUsers.size(); i++)
	{
		if (passAndEmailOfAllUsers[i].getEmail() == email && passAndEmailOfAllUsers[i].getPassword() == pass)
		{
			checkIflog_PasCorrect = true;
			break;
		}
	}
	return checkIflog_PasCorrect;
}
