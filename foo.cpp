#include <type_traits>

int main() {
	return std::is_trivially_copyable<int>::value;
}
