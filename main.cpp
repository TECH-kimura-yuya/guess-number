#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand();
	int passNum1 = (rand() % 10);
	int passNum2 = (rand() % 10);

	cout << "–é’†‚É‚±‚Á‚»‚èƒQ[ƒ€‚ğ‚µ‚Ä‚¢‚½‚ç‚¨•ê‚³‚ñ‚É‚Î‚ê‚Ä–vû‚³‚ê‚¿‚á‚Á‚½I\n";
	cout << "‹àŒÉ‚ÌˆÃØ”Ô†‚ğ“–‚Ä‚ÄƒQ[ƒ€‚ğæ‚è–ß‚»‚¤I\n";

	int playCount = 0;
	int guess1, guess2;
	do
	{
		++playCount;
		cout << "”š‚ğ2‚Â“ü—Í‚µ‚æ‚¤\n";
		cout << "1‚Â‚ß: ";
		cin >> guess1;
		cout << "2‚Â‚ß: ";
		cin >> guess2;

		if (passNum1 == guess1 && passNum2 == guess2)
			break;
		if(passNum1 != guess1)
		{
			cout << "1‚Â‚ß‚Ì”š‚ª‚ ‚Á‚Ä‚È‚³‚»‚¤‚¾...\n";
		}
		if (passNum2 != guess2)
		{
			cout << "2‚Â‚ß‚Ì”š‚ª‚ ‚Á‚Ä‚È‚³‚»‚¤‚¾...\n";
		}

	} while (passNum1 != guess1 || passNum2 != guess2);

	cout << "‚â‚Á‚½‚ËI " << playCount <<" ‰ñ–Ú‚Å‹àŒÉ‚ªŠJ‚¢‚½‚æI\n";
	
}	