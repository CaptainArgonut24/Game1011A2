#include "Rooms.h"

Rooms::Rooms(const std::string& room_name) : roomName(room_name) {}

Rooms* Rooms::GetRooms(std::string& location)
{
	return rooms.at(location);
}

void Rooms::SetRooms(Rooms* winton_dungeon, Rooms* wizard_house, Rooms* carl_aquarium, Rooms* baller_stadium)
{
	rooms["Winton's Dungeon"] = winton_dungeon;
	rooms["Wizard's House"] = wizard_house;
	rooms["Carl's Aquarium"] = carl_aquarium;
	rooms["Baller's Stadium"] = baller_stadium;
}


