#pragma once
#include <map>
#include <string>

struct Rooms
{
	Rooms(const std::string& room_name);

	Rooms* GetRooms(std::string& location);
	void SetRooms(Rooms* winton_dungeon, Rooms* wizard_house, Rooms* carl_aquarium, Rooms* baller_stadium);

	std::string roomName;
	std::map<std::string, Rooms*> rooms;
};

