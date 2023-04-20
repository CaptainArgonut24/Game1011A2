#pragma once
#include <iostream>
#include <vector>


class StoryStart
{
private:


public:
	static std::vector<std::string> m_dialogueTxt;
	static std::vector<std::string> m_inputActions;
	static std::vector<std::string> m_currentActions;
	static int currentGameStepThrough;
	void startStory();
	std::vector<std::string> GetDialogueText();
	std::vector<std::string> GetInputAction();
	void SetCurrentActions(std::vector<std::string> actions);
	std::vector<std::string> GetCurrentActions();
	int GetCurrentStepThrough();
	void SetCurrentSetThrough(int bleh);
};
