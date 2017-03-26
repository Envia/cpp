#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 15;
const int char_hold = 4;
const int last = 3;
void Intro(char IPv4[char_hold]);
void output(char IPv4[char_hold]);
void lastoutput(char IPv4[char_hold]);
void lastIntro(char IPv4[char_hold]);
bool checker(char IPv4[last]);


int main()
{
	char IPv4[char_hold], IPv4_2[char_hold], IPv4_3[char_hold], IPv4_4[last];
	cout << "Please enter IPv4 Address, seperated by dots (.) xxx.xxx.xxx.xxx : " << endl;
	cout << "Also tests if it's a valid ip.  MAX 255.255.255.255: " << endl;

	Intro(IPv4);
	Intro(IPv4_2);
	Intro(IPv4_3);
	lastIntro(IPv4_4);

	// only output if Ipv4 is valid max 255.255.255.255
	if (checker(IPv4) && checker(IPv4_2) && checker(IPv4_3) && checker(IPv4_4))
	{
		cout << "Reverse IPv4 is Valid: " << endl;

		lastoutput(IPv4_4);
		cout << '.';
		output(IPv4_3);
		cout << '.';
		output(IPv4_2);
		cout << '.';
		output(IPv4);

		
		cin.clear();
		cout << endl;
	}
	else
	{
		cout << "Invalid Ipv4 Address Entered, try again;" << endl;
	}

	return 0;
}
void lastoutput(char IPv4[last])
{
	for (int i = 0; i < last - 1; ++i)
	{
		if (IPv4[i] == '.')
			break;
		cout << IPv4[i];



	}
}
void lastIntro(char IPv4[last])
{

	for (int i = 0; i < last; ++i)
	{
		cin.get(IPv4[i]);

		if (IPv4[i] == '\n')
			break;

		if (i > 1)
			IPv4[i] = ' ';

	}
}
void output(char IPv4[char_hold])
{
	for (int i = 0; i < char_hold; ++i)
	{
		if (IPv4[i] == '.')
			break;
		cout << IPv4[i];

	}
}
void Intro(char IPv4[char_hold])
{

	for (int i = 0; i < char_hold; ++i)
	{
		cin >> IPv4[i];
		if (IPv4[i] == '.')
			break;
	}

}
bool checker(char IPv4[last])
{
	string holdNum;

	for (int i = 0; i < last; ++i)
	{
		holdNum += IPv4[i];
		if (IPv4[i] == '.')
			holdNum += '.';

	}

	return stoi(holdNum) >= 0 && stoi(holdNum) <= 255;
}
