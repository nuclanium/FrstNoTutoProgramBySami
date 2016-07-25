#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include "First No Tuto Program By Sami.h"

using namespace std;

   int main()
{
	ofstream file_;
	int username;
	int password;
	
	cout << "Enter the Password: "; cin >> password;
	if (password == 7384)
	{
		cout << "Welcome To our Clan MF Clan \n";
		cout << "Open the text file Near on the Program directory";
		file_.open("OpenThisOneM8.dot");
		file_ << "First off all Welcome To our Clan! the MF Clan (Moroccan Fire Clan)!\n";
		file_ << "Here is the list of all Members of this clan :\n";
		file_ << "=> FirFox            :    Leader\n";
		file_ << "=> Nirvanna Games    : Co-Leader\n";
		file_ << "=> Nuclanium(GeTDoWn): Co-Leader\n";
		file_ << "=> HellRage          : Co-Leader\n";
		file_ << "=> Assoumi4Games     : Co-Leader\n";
		file_ << "=> Reda 'no nickname': Member\n";
		file_ << "-------------------------Clan Rules & Copyright-----------------------------\n";
		file_ << "Alpha Version Only By Sami Kamal (Nuclanium) Thats my Real Name ;)\n";
		file_.close();
		Sleep(4000);
	}
	else
	{
		cout << "Your Not Clan Member Go away jerk -_-!	";
		Sleep(2500);
	}
}
