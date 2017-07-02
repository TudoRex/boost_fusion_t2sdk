#define BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS
#define BOOST_MPL_LIMIT_VECTOR_SIZE 50

#include <boost/fusion/container.hpp>
#include <boost/fusion/view.hpp>
#include <boost/mpl/vector.hpp>
#include <type_traits>

namespace fusion = boost::fusion;
namespace mpl = boost::mpl;

	namespace keys
	{
		struct Type0    { typedef std::integral_constant<int, 0> index_type; };
		struct Type1	 { typedef std::integral_constant<int, 1> index_type;} ;
		struct Type2	 { typedef std::integral_constant<int, 2> index_type;} ;
		struct Type3	 { typedef std::integral_constant<int, 3> index_type;} ;
		struct Type4	 { typedef std::integral_constant<int, 4> index_type;} ;
		struct Type5	 { typedef std::integral_constant<int, 5> index_type;} ;
		struct Type6	 { typedef std::integral_constant<int, 6> index_type;} ;
		struct Type7	 { typedef std::integral_constant<int, 7> index_type;} ;
		struct Type8	 { typedef std::integral_constant<int, 8> index_type;} ;
		struct Type9	 { typedef std::integral_constant<int, 9> index_type;} ;
		struct Type10	 { typedef std::integral_constant<int, 10> index_type;} ;
		struct Type11	 { typedef std::integral_constant<int, 11> index_type;} ;
		struct Type12	 { typedef std::integral_constant<int, 12> index_type;} ;
		struct Type13	 { typedef std::integral_constant<int, 13> index_type;} ;
		struct Type14	 { typedef std::integral_constant<int, 14> index_type;} ;
		struct Type15	 { typedef std::integral_constant<int, 15> index_type;} ;
		struct Type16	 { typedef std::integral_constant<int, 16> index_type;} ;
		struct Type17	 { typedef std::integral_constant<int, 17> index_type;} ;
		struct Type18	 { typedef std::integral_constant<int, 18> index_type;} ;
		struct Type19	 { typedef std::integral_constant<int, 19> index_type;} ;
		struct Type20	 { typedef std::integral_constant<int, 20> index_type;} ;
		struct Type21	 { typedef std::integral_constant<int, 21> index_type;} ;
		struct Type22	 { typedef std::integral_constant<int, 22> index_type;} ;
		struct Type23	 { typedef std::integral_constant<int, 23> index_type;} ;
		struct Type24	 { typedef std::integral_constant<int, 24> index_type;} ;
		struct Type25	 { typedef std::integral_constant<int, 25> index_type;} ;
		struct Type26	 { typedef std::integral_constant<int, 26> index_type;} ;
		struct Type27	 { typedef std::integral_constant<int, 27> index_type;} ;
		struct Type28	 { typedef std::integral_constant<int, 28> index_type;} ;
		struct Type29	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type30	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type31	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type32	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type33	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type34	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type35	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type36	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type37	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type38	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type39	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type40	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type41	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type42	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type43	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type44	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type45	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type46	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type47	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type48	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type49	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type50	 { typedef std::integral_constant<int, 0> index_type;} ;
						
		struct Type51	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type52	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type53	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type54	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type55	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type56	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type57	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type58	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type59	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type60	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type61	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type62	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type63	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type64	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type65	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type66	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type67	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type68	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type69	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type70	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type71	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type72	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type73	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type74	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type75	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type76	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type77	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type78	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type79	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type80	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type81	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type82	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type83	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type84	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type85	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type86	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type87	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type88	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type89	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type90	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type91	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type92	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type93	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type94	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type95	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type96	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type97	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type98	 { typedef std::integral_constant<int, 0> index_type;} ;
		struct Type99	 { typedef std::integral_constant<int, 0> index_type;} ;
	}//namespace keys


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



