#pragma once
#include <string>
#include <vector>

struct Rooms
{
	Rooms(const std::string& room_name);

	std::vector<std::string> GetRooms(std::string& room);
	void SetRooms();

	std::string roomName;
	std::vector<std::string> rooms;
};

