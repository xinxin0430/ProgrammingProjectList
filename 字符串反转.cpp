#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str("");
	string newStr("");
	cout << "input your message :";
	cin >> str;
	for (int i = (str.length() - 1); i >= 0; i--) {
		newStr += str[i];
	}
	cout << newStr << endl;
	cin.ignore(6);
}
