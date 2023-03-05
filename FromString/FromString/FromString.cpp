#include <string>
#include <sstream>
#include <exception>
using namespace std;

// exception class description bad_from_string
class bad_from_string : public std::exception
{
	std::string info;
public:
	bad_from_string(std::string e = "from_string except") : info(e) {}
	const char* what() const noexcept {
		return info.c_str();
	}
};

// function from_string
template<class T>
T from_string(std::string const& s)
{
	std::istringstream is(s);
	T t;
	is >> std::noskipws >> t;

	if (is.fail() || is.peek() != EOF)
		throw bad_from_string(s);

	return t;
}


int main() {

	string s1("123");
	int    a1 = from_string<int>(s1); // a1 = 123
	double b1 = from_string<double>(s1); // b1 = 123.0
	string c1 = from_string<string>(s1); // c1 = "123"

	string s2("12.3");
	int    a2 = from_string<int>(s2); // exception
	double b2 = from_string<double>(s2); // b2 = 12.3
	string c2 = from_string<string>(s2); // c2 = "12.3"

	string s3("abc");
	int    a3 = from_string<int>(s3); // exception
	double b3 = from_string<double>(s3); // exception
	string c3 = from_string<string>(s3); // c3 = "abc"
}
