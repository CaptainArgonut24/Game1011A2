
#include <iostream>
#include <fstream>
#include <string>

#include "StoryBase.h"




using namespace std;

int main()
{

	
	StoryStart beginStory;


	

	cout << "---------------------------------------------" << endl;
	cout << "GAME1017 - Advanced Programming Assignment 2" << endl;
	cout << "     " << endl;
	cout << "Instructions:" << endl;
	cout << "1. Use FullScreen For Best Results" << endl;
	cout << "2. There will be 4 scenarios." << endl;
	cout << "3. You must make a choice out of the list in each scenario." << endl;
	cout << "4. You MUST type exactly how the choice is displayed. Text is case sensitive! or use NUM if you want to be lazy" << endl;
	cout << "5. Once you go through the story scenarios, the program will print the ending in a txt file depending on your actions!" << endl;
	cout << "----------Hit The Enter Key To Start]-------------" << endl;
	getchar();



	//Start game
	system("Pause");
	system("CLS");
	beginStory.startStory();







}