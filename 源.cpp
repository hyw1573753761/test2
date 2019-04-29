//利用线性移位寄存器实现学号的加密
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int a[31];
	string str = "";
	cout << "please enter the key: " << endl;
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	ofstream ofile("F:\\a.txt");
	cout << "please enter the message: " << endl;
	cin >> str;
	ofile << str;
	string str1 = str;
	ofile.close();
	for (int j = 5; j < str.length(); j++)
		a[j] = (a[j - 2] + a[j - 5]) % 2;
	cout << "the key is:" << endl;
	for (int n = 0; n < str.length(); n++)
		cout << a[n] << endl;
	cout << "please enter your choice" << endl;
	cout << "0--encryption   1--deciphering" << endl;
	int key;
	cin >> key;
	if ((key == 0) || (key == 1))
	{
		if (key == 0)
		{
			for (int k = 0; k < str.length(); k++)
				str1[k] = str[k] ^ a[k];
			ofstream outfile("F:\\b.txt");
			outfile << str1 << endl;
			outfile.close();
		}
		if (key == 1)
		{
			for (int k = 0; k < str.length(); k++)
				str1[k] = str[k] ^ a[k];
			ofstream outfile("F:\\b.txt");
			outfile << str1 << endl;
			outfile.close();
		}
	}
	else
		cout << "wrong choice" << endl;
}