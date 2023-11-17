#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#define setcolor SetConsoleTextAttribute
#define hc hConsole
using namespace std;
void print(string c, int clr)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setcolor(hc, clr);
	cout << c;
	setcolor(hc, 0xf);
}
string tentot(int v)
{
	string res = "";
	int vb = int(v);
	while (vb > 0)
	{
		res += (vb % 2 + 48);
		vb /= 2;
	}
	string nes = "";
	for (int i = res.size() - 1; i >= 0; i--)
	{
		nes += res[i];
	}
	return nes;
}
int main()
{
	cout << "明文,以$^结束\n\n\n";
	string ns = "";
	string rom = "";
	getline(cin, ns, '^');
	cout << "\n\n\n";
	cout << "Bit Mode : 4Bit  with  6Modes  DWORD\n";
	cout << "\t0 1 2 3 4 5 6 7 8 9 A B C D E F\n0\t";
	for (int i = 0; i < ns.size(); i++)
	{
		char tem = int(ns[i]);
		if (ns[i] >= ' ' && ns[i] <= 'z')
		{
			rom += tentot(int(tem) - 33);
			rom += '3';
		}
		else if (ns[i] <= 0)
		{
			rom += '2';
			rom += tentot(-int(tem));
			rom += '3';
		}
		else if (ns[i] == ' ')
		{
			rom += '4';
		}
		else if (ns[i] == '\n')
		{
			rom += '5';
		}
		else if (ns[i] == '$')
		{
			rom += '6';
		}
	}
	for (long long i = 0; i < rom.size(); i++)
	{
		if (rom[i] == '1')
		{
			print("1 ", 0xa0);
		}
		if (rom[i] == '2')
		{
			print("2 ", 0xf0);
		}
		else if (rom[i] == '0')
		{
			print("0 ", 0x90);
		}
		else if (rom[i] == '3')
		{
			print("3 ", 0x40);
		}
		else if (rom[i] == '4')
		{
			print("4 ", 0x60);
		}
		else if (rom[i] == '5')
		{
			printf("5 ", 0xd0);
		}
		else if (rom[i] == '6')
		{
			printf("E ", 0xf0);
		}
		if (((i + 1) % 16 == 0) && i != 0)
		{
			cout << endl
				 << (i + 1) / 16 << "\t";
		}
	}
	cout << "\n\n\n";
	system("pause");
	return 0;
}
