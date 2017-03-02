#pragma once

#include"../Entity/Advertisement.h"
#include<windows.h> 

Advertisement::Advertisement()
{
	title = "";
	mainText = "";
	status = 0;
	email = "";
}

Advertisement::Advertisement(string title, string mainText, bool status) 
{
	this->title = title;
	this->mainText = mainText;
	this->status = status;
}

Advertisement::Advertisement(const Advertisement&x) 
{
	this->title = x.title;
	this->mainText = x.mainText;
	this->status = x.status;
}

string Advertisement::getTitle()
{
	return title;
}

string Advertisement::getMainText()
{
	return mainText;
}

void Advertisement::setStatus(bool status)
{
	this->status = status;
}

bool Advertisement::getStatus()
{
	return this->status;
}

string Advertisement::getEmail()
{
	return email;
}

void Advertisement::setEmail(string email)
{
	this->email = email;
}

void Advertisement::setTitle(string title)
{
	this->title = title;
}

void Advertisement::setMainText(string mainText)
{
	this->mainText = mainText;
}


void Advertisement::input()
{
	system("cls");
	cout << " \t\t\t Welcome! \n" << "\t Do you want to create an advertisement? \n ";
	cout << " \n if you want to start , enter 1 ;\n";
	cout << " if you want return to main menu, enter 2 ;\n";
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
			cout << "enter title: \n";
			cin >> title;
			cout << "enter advertisement : \n";
			while (getline(cin, mainText))
			{
				char ch;
				ch = cin.get();
				cout << "press enter to save information: ";
				if (ch == '\n')
				{
					break;
				}
			}
			cout << "Do you want to save or send your advertisement to server? \n enter 1 or 2 :\n";
			char action;
			cout << "Action :  ";
			cin >> action;
			    switch (action)
			    {
			    case '1':
			    {
				    this->status = 0;
				    break;
			    }
			    case '2':
			    {
				    this->status = 1;
				    break;
			    }
			    default:
			    {
				    cout << "\n You will be retnrned to previos page \n";

			    }
		    cout << " \n \t\t You did it ! \n";
			Sleep(3000);
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
	}
}


void Advertisement::print()
{
	cout << "\n_____________";
	cout << "\n\t" << title << "\n";
	cout << mainText << "\n";
	cout << " \t" << email << "\n";
	cout << "\t" << status;
}
