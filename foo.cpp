#include <iostream>
#include <type_traits>

int main() {
#if defined(__clang__)
	std::cout << "clang\n";
#elif defined(__GNUC__) || defined(__GNUG__)
	std::cout << "gcc\n";
#else
	std::cout << "unknown\n";
#endif
	return !std::is_trivially_copyable<int>::value;
}
