
#include <boost/fusion/container.hpp>
#include <boost/fusion/view.hpp>

namespace fusion = boost::fusion;
namespace t2sdk
{
	namespace keys
	{
		struct Person0;
		struct Person1;
		struct Person2;
		struct Person3;
		struct Person4;
		struct Person5;
		struct Person6;
		struct Person7;
		struct Person8;
		struct Person9;
		struct Person10;

		struct Car0;
		struct Car1;
		struct Car2;
		struct Car3;
		struct Car4;
		struct Car5;
		struct Car6;
		struct Car7;
		struct Car8;
		struct Car9;
		struct Car10;

		struct Room0;
		struct Room1;
		struct Room2;
		struct Room3;
		struct Room4;
		struct Room5;
		struct Room6;
		struct Room7;
		struct Room8;
		struct Room9;
		struct Room10;
	}
}

struct PersonInfo
{
	int age;
};

struct CarInfo
{
	double distance;
};

struct RoomInfo
{
	char* name;
};

typedef fusion::map<
	fusion::pair<t2sdk::keys::Person0, PersonInfo>,
	fusion::pair<t2sdk::keys::Person1, PersonInfo>,
	fusion::pair<t2sdk::keys::Person2, PersonInfo>,
	fusion::pair<t2sdk::keys::Person3, PersonInfo>,
	fusion::pair<t2sdk::keys::Person4, PersonInfo>,
	fusion::pair<t2sdk::keys::Person5, PersonInfo>,
	fusion::pair<t2sdk::keys::Person6, PersonInfo>,
	fusion::pair<t2sdk::keys::Person7, PersonInfo>,
	fusion::pair<t2sdk::keys::Person8, PersonInfo>,
	fusion::pair<t2sdk::keys::Person9, PersonInfo>
> PersonMap_t;

typedef fusion::map<
	fusion::pair<t2sdk::keys::Car0, CarInfo>,
	fusion::pair<t2sdk::keys::Car1, CarInfo>,
	fusion::pair<t2sdk::keys::Car2, CarInfo>,
	fusion::pair<t2sdk::keys::Car3, CarInfo>,
	fusion::pair<t2sdk::keys::Car4, CarInfo>,
	fusion::pair<t2sdk::keys::Car5, CarInfo>,
	fusion::pair<t2sdk::keys::Car6, CarInfo>,
	fusion::pair<t2sdk::keys::Car7, CarInfo>,
	fusion::pair<t2sdk::keys::Car8, CarInfo>,
	fusion::pair<t2sdk::keys::Car9, CarInfo>
> CarMap_t;

typedef fusion::map<
	fusion::pair<t2sdk::keys::Room0, RoomInfo>,
	fusion::pair<t2sdk::keys::Room1, RoomInfo>,
	fusion::pair<t2sdk::keys::Room2, RoomInfo>,
	fusion::pair<t2sdk::keys::Room3, RoomInfo>,
	fusion::pair<t2sdk::keys::Room4, RoomInfo>,
	fusion::pair<t2sdk::keys::Room5, RoomInfo>,
	fusion::pair<t2sdk::keys::Room6, RoomInfo>,
	fusion::pair<t2sdk::keys::Room7, RoomInfo>,
	fusion::pair<t2sdk::keys::Room8, RoomInfo>,
	fusion::pair<t2sdk::keys::Room9, RoomInfo>
> RoomMap_t;

