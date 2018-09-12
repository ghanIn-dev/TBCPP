#include <algorithm>
#include <iterator>
#include <limits>
#include <utility>

using namespace std;

double bearing(const Coordinate first_coordinate, const Coordinate second_coordinate)
{
	const double lon_diff =
		static_cast<double>(toFloating(second_coordinate.lon - first_coordinate.lon));
	const double lon_delta = detail::degToRad(lon_diff);
	const double lat1 = detail::degToRad(static_cast<double>(toFloating(first_coordinate.lat)));
	const double lat2 = detail::degToRad(static_cast<double>(toFloating(second_coordinate.lat)));
	const double y = std::sin(lon_delta) * std::cos(lat2);
	const double x =
		std::cos(lat1) * std::sin(lat2) - std::sin(lat1) * std::cos(lat2) * std::cos(lon_delta);
	double result = detail::radToDeg(std::atan2(y, x));
	while (result < 0.0)
	{
		result += 360.0;
	}

	while (result >= 360.0)
	{
		result -= 360.0;
	}
	// If someone gives us two identical coordinates, then the concept of a bearing
	// makes no sense.  However, because it sometimes happens, we'll at least
	// return a consistent value of 0 so that the behaviour isn't random.
	/*
	누군가가 우리에게 두 개의 동일한 좌표를 주면 베어링의 개념
	이치에 맞지 않는다. 그러나 때때로 발생하기 때문에 최소한
	동작이 무작위가 아니도록 0의 일관된 값을 반환합니다.
	*/
	
	return result;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum;
}

int main()
{
	cout << multiplyTwoNumbers(6, 2) << endl;
	return 0;
}

