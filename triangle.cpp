#include <iostream>

int main() {

	//user input
	int num;
	std::cin >> num;

	//processing start
	int x;
	for (int i = 0; i < num; i++) {

		//initial spaces
		for (int spc = 1; spc < num - i; spc++) {
			std::cout << " ";
		}

		//numbers output
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				x = 1;
			}
			else {
				x = (x * (i - j + 1)) / j;
			}
			std::cout << x << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
