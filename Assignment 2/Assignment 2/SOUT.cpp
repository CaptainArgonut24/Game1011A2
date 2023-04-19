
#include "SOUT.h"

#include <iostream>
#include <fstream>
#include <ostream>
#include "PlayerUData.h"

using namespace std;


void StoryOutcome::Bad()
{
	ofstream endingFile("ending.txt");



	Facts();

	endingFile << "-------------BAD ENDING----------------" << endl;
	endingFile << "Your memories return and you remember the events that happened that led to where you are." << endl;
	endingFile << "Unable to cope with your past and the events that happened there," << endl;
	endingFile << "You feel completely empty and run away. Your fate was unknown" << endl;




	endingFile.close();
};

void StoryOutcome::Good()
{
	ofstream endingFile("ending.txt");



	Facts();

	endingFile << "-------------GOOD ENDING----------------" << endl;
	endingFile << "Your memories return and you remember the events that happened that led to where you are." << endl;
	endingFile << "You fall to your knees crying in sadness" << endl;
	endingFile << "The officer comforts you and takes you to a hospital upon rescue" << endl;
	endingFile << "Months after, you feel like you can move on from the events that transpired." << endl;




	endingFile.close();
};

void StoryOutcome::Facts()
{
	ofstream endingFile("ending.txt");
	endingFile << "--------------------------------Story Background----------------------------------------" << endl;
	endingFile << "You find out that you are a survivor of a plane crash and you are one of the two survivors. You were an amnesiac" << endl;
	endingFile << "You were hallucinating visions of your past and were seeing things that were not there" << endl;
	endingFile << "----------------------------------------------------------------------------------------" << endl;
	endingFile << "First Scenario: The man who was bleeding was the other survivor of the plane crash. It is unknown what happened to him" << endl;
	endingFile << "" << endl;
	endingFile << "Second Scenario: The girl you saw was your girlfriend. You enjoyed playing games together alot." << endl;
	endingFile << "She was on the plane with you as you two wanted to go to Punta Cana for a vacation date. Unfortunately she didn't survive" << endl;
	endingFile << "" << endl;
	endingFile << "Third Scenario: The house was actually never there. It was a vision of your house that was burnt down in your past due to an arson. " << endl;
	endingFile << "You were the child of a family that did not survive the fire. The children were your siblings  " << endl;
	endingFile << "" << endl;
	endingFile << "Final Scenario: The hooded figure was actually an officer, part of a rescue unit responding to the crash" << endl;
	endingFile << "--------------------------------------------------------------------------------------------" << endl;

	endingFile.close();

};