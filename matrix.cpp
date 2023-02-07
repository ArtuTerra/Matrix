#include <iostream>
#include <chrono>
#include <thread>
const std::string green("\033[1;32m");
const std::string reset("\033[0m");

char GetChar(int iGenerator, char cBase, int iRange) {
	/* This function returns a Char value thats is in between (cBase, cBase + iRange)
	Assuring that the Char will be in between our base value and our max value. */
	return (cBase + (iGenerator % iRange));
}

 int main() {
		
	int color;
	char caRow[80];
	int j = 7;
	int k = 2;
	int l = 5;
	int m = 1;

	// While True will infinitely loop the code
	while (true) {
		int i = 0;

		// Output a random row of characters
		while (i < 80) {
			if (caRow[i] != ' ') {
				// The two last arguments of GetChar will define, respectively, the Base value and the Range of the char
				caRow[i] = GetChar(j + i*i, 33, 30);

				// 71 % chance for text to be green, and remaining chance to be white.
				if (((i*i + k) % 71) == 0) {
					color = 1;
				} else {
					color = 2;
				}
			}
			if(color==1){
				std::cout << reset << caRow[i];
			}else{
				std::cout << green << caRow[i];
			}
			
			++i;			
		}

		// Paragraph to help with spacing
		std::cout << "\n";
		
		// Pseudo randomize numbers
		j = (j + 31);
		k = (k + 17);
		l = (l + 47);
		m = (m + 67);

		// Adds streaks of spaces in the code for a more "matrix-like" effect.
		caRow[(j % 80)] = '-';
		caRow[(k % 80)] = ' ';
		caRow[(l % 80)] = '-';
		caRow[(m % 80)] = ' ';
		// Delay
		std::this_thread::sleep_for(std::chrono::milliseconds(20));
	}
    return 0;
}