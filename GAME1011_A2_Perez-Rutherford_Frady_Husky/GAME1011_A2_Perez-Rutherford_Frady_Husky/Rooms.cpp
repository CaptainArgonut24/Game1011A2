#include "Rooms.h"

Rooms::Rooms(const std::string& room_name) : roomName(room_name) {}

std::vector<std::string> Rooms::GetRooms(std::string& room)
{
	return rooms;
}

void Rooms::SetRooms()
{
	rooms.push_back("Wizard's House");
	rooms.push_back("Winton's Dungeon");
	rooms.push_back("Carl's Aquarium");
}
