#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand();
	int passNum1 = (rand() % 10);
	int passNum2 = (rand() % 10);

	cout << "夜中にこっそりゲームをしていたらお母さんにばれて没収されちゃった！\n";
	cout << "金庫の暗証番号を当ててゲームを取り戻そう！\n";

	int playCount = 0;
	int guess1, guess2;
	do
	{
		++playCount;
		cout << "数字を2つ入力しよう\n";
		cout << "1つめ: ";
		cin >> guess1;
		cout << "2つめ: ";
		cin >> guess2;

		if (passNum1 == guess1 && passNum2 == guess2)
			break;
		if(passNum1 != guess1)
		{
			cout << "1つめの数字があってなさそうだ...\n";
		}
		if (passNum2 != guess2)
		{
			cout << "2つめの数字があってなさそうだ...\n";
		}

	} while (passNum1 != guess1 || passNum2 != guess2);

	cout << "やったね！ " << playCount <<" 回目で金庫が開いたよ！\n";
	
}	