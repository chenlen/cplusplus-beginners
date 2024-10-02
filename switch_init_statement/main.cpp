// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

size_t HowManyAreInYourParty()
{
    cout << "How many are in your party?";
    size_t num = 0;
    cin >> num;
    return num;
}

int main()
{
	const int price = 399;
	switch (int num = HowManyAreInYourParty(); num)
	{
	case 1:
		cout << "單身狗用餐金額$" << price + 50;
		break;
	case 2:
	case 3:
	case 4:
		cout << num << "人用餐金額$" << price * num;
		break;
	default:
		cout << num << "人用餐金額9折，折扣後$" << price * 0.9 * num;
		break;
	}
}
