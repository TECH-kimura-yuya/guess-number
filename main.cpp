#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand();
	int passNum1 = (rand() % 10);
	int passNum2 = (rand() % 10);

	cout << "�钆�ɂ�������Q�[�������Ă����炨�ꂳ��ɂ΂�Ėv�����ꂿ������I\n";
	cout << "���ɂ̈Ïؔԍ��𓖂ĂăQ�[�������߂����I\n";

	int playCount = 0;
	int guess1, guess2;
	do
	{
		++playCount;
		cout << "������2���͂��悤\n";
		cout << "1��: ";
		cin >> guess1;
		cout << "2��: ";
		cin >> guess2;

		if (passNum1 == guess1 && passNum2 == guess2)
			break;
		if(passNum1 != guess1)
		{
			cout << "1�߂̐����������ĂȂ�������...\n";
		}
		if (passNum2 != guess2)
		{
			cout << "2�߂̐����������ĂȂ�������...\n";
		}

	} while (passNum1 != guess1 || passNum2 != guess2);

	cout << "������ˁI " << playCount <<" ��ڂŋ��ɂ��J������I\n";
	
}	