#include <boost/lexical_cast.hpp>
#include <string>
#include <iostream>

struct stringize_functor {
private:
	std::string& result;

public:
	explicit stringize_functor(std::string& res)
		: result(res)
	{}

	template <class T>
	void operator()(const T& v) const {
		result += boost::lexical_cast<std::string>(v);
	}
};


#include <boost/fusion/include/for_each.hpp>
#include <boost/fusion/adapted.hpp>
template <class Sequence>
std::string stringize(const Sequence& seq) {
	std::string result;
	boost::fusion::for_each(seq, stringize_functor(result));
	return result;
}

namespace keys
{
	struct Name;
	struct Age;
}

BOOST_FUSION_DEFINE_ASSOC_STRUCT(
	(demo),
	myst,
	(std::string, name, keys::Name)
	(int		, age, keys::Age)
)

struct Visitor
{
	template<typename T>
	void operator() (const T& t) const
	{
		std::cout << typeid(T).name() << std::endl;
	}
};

#include <cassert>
#include <boost/fusion/adapted/boost_tuple.hpp>
#include <boost/fusion/adapted/std_pair.hpp>

#include <boost/fusion/container/vector/vector.hpp>
#include <boost/fusion/adapted/mpl.hpp>
#include <boost/fusion/container/generation/make_vector.hpp>
#include <boost/fusion/container/generation/make_list.hpp>
#include <boost/fusion/container/map/convert.hpp>
#include <boost/fusion/container/vector/convert.hpp>
#include <boost/fusion/algorithm/transformation/push_back.hpp>
#include <boost/fusion/sequence/comparison/equal_to.hpp>
#include <boost/fusion/sequence/intrinsic/at_key.hpp>
#include <boost/fusion/sequence/io/out.hpp>
#include <boost/fusion/support/pair.hpp>

namespace fusion = boost::fusion;
int main() {
	boost::tuple<char, int, char, int> decim('-', 10, 'e', 5);
	assert(stringize(decim) == "-10e5");

	std::pair<short, std::string> value_and_type(270, "Kelvin");
	assert(stringize(value_and_type) == "270Kelvin");

	demo::myst me("amao", 18);

	fusion::for_each(fusion::as_map(me), Visitor());

}