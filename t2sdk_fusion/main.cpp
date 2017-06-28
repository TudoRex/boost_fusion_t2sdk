#include "stdafx.h"
#include "t2sdk_platform.h"

int main()
{
	PersonMap_t person_map;
	CarMap_t car_map;
	RoomMap_t room_map;

	fusion::joint_view<
		PersonMap_t,
		CarMap_t,
		RoomMap_t
	> view(person_map, car_map, room_map);
}