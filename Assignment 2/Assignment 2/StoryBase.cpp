#include "StoryBase.h"
#include <iostream>
#include <fstream>
#include <string>
#include "PlayerUData.h"
#include "SOUT.h"

using namespace std;

void StoryStart::startStory()
{
	//Class Object
	PlayerDecision karmaCount;
	StoryOutcome storyEnd;

	//Variables
	int karmaCounter = 0;
	int lineNumber = 0;
	int playerChoice = 0;
	string line;
	string command;

	//Text File
	ifstream storyFile;

	//Open the file
	storyFile.open("Story.txt");

	//File open VALIDATION
	if (!storyFile.is_open())
	{
		cout << "ERROR OPENING Story.txt!" << endl;
		//exit(0);
	}

	else
	{
		cout << "File opened successfully" << endl;
	}


	//Story 
	for (int i = 1; i <= 4; i++)
	{
		getline(storyFile, line);
		//First Scenario
		if (i == 1)
		{
			cout << "----------------Scenario 1-----------------" << endl;
			cout << line << endl;
			cout << "-------------------------------------------" << endl;
			cout << "(Type one of the following)" << endl;
			cout << "Help Him" << endl;
			cout << "Leave Him" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("CLS");

			//IF statements for the choices
			if (command == "Help Him")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "The man thanks you for your help and walks away" << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter++;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "Leave Him")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You hear him screaming in pain from a distance" << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter--;
				karmaCount.setKarmaCounter(karmaCounter--);
			}

		}

		//Second Scenario
		if (i == 2)
		{
			cout << "-----------------Scenario 2----------------" << endl;
			cout << line << endl;
			cout << "-------------------------------------------" << endl;
			cout << "(Type one of the following)" << endl;
			cout << "Talk to her" << endl;
			cout << "Pass by" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("CLS");
			if (command == "Talk to her")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "The girl vanishes. Turns out she was holding your precious video game. You feel nostalgia and sorrow. " << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter++;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "Pass by")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "She screams at you from a distance 'It is all your fault!' and disappears. You feel guilt" << endl;
				cout << "------------------------------------------------------------" << endl;
				//karmaCounter--;
				karmaCount.setKarmaCounter(karmaCounter--);
			}
		}

		//Third Scenario
		if (i == 3)
		{
			cout << "----------------Scenario 3-----------------" << endl;
			cout << line << endl;
			cout << "-------------------------------------------" << endl;
			cout << "(Type one of the following)" << endl;
			cout << "Enter House" << endl;
			cout << "Run Away" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("CLS");


			if (command == "Enter House")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "Turns out it was children just playing. And they disappear " << endl;
				cout << "You notice this is actually a burnt out house. You find a picture frame of what it looks like a family." << endl;
				cout << "The frame is completely shattered to make out the faces" << endl;
				cout << "You hear something vanish from a distance after leaving" << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter++);
			}

			else if (command == "Run Away")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You fear of your own safety and run away. You can hear voices but can't make them out" << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter--);
			}
		}




		//Final Scenario
		if (i == 4)
		{
			cout << "----------------Scenario 4-----------------" << endl;
			cout << line << endl;
			cout << "-------------------------------------------" << endl;
			cout << "(Type one of the following)" << endl;
			cout << "Attack it" << endl;
			cout << "Run back to the forest" << endl;
			cout << "-------------------------------------------" << endl;
			getline(cin, command);
			system("CLS");

			if (command == "Attack it")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "The figure falls down and coughs up blood. You feel victorious but at the same time empty" << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter = -10);
			}

			else if (command == "Run back to the forest")
			{
				cout << "------------------------------------------------------------" << endl;
				cout << "You trip and the hooded figure seemingly captures you. You scream in a cry for help" << endl;
				cout << "------------------------------------------------------------" << endl;
				karmaCount.setKarmaCounter(karmaCounter++);
			}
		}


	}

	//After going through the four scenarios
	cout << "Ending File created. View it to see your ending and other information of the story." << endl;

	//Depending on the player's actions, output the ending into a textfile. 
	//Print Story Good End
	if (karmaCounter > 0)
	{
		storyEnd.Good();
	}

	//Print Story Bad End
	else if (karmaCounter < -3)
	{
		storyEnd.Bad();
	}
	//Close the story file after iteration
	storyFile.close();
}