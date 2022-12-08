#include <limits>
#include <fstream>
#include "Position.h"
using namespace std;

int main() {
 Position bot1 (2, 3, 5, 5); // a bot initialized at 2,3 in a 5*5 grid
	Position bot2 (3, 7); // a bot initialized at 3,7 in a 10*10 grid
    Position bot3; // a bot initialized at 0,0 in a 10*10 grid
	bot1.display;
	bot1.move(7);
	bot1.move(5);
	bot1.display();

	if (bot1 == bot2) cout << "Bot 1 is equivalent to Bot 2\n";
	else
		cout << "Bot 1 is not equivalent to Bot 2\n";
	return 0;
}