#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{
	string temp = "";
	string str("0123456789asdf@");
	for (int i = 0; i < str.size(); ++i) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9')) {
			temp = temp + str[i];
		}
	}
	str = temp;
	for (int i = 0; i < temp.length(); i += 3) {
		cout << temp.substr(i, 3) << endl;
	}
}