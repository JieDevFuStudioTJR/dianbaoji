#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define setcolor SetConsoleTextAttribute
#define hc hConsole
using namespace std;
void print(string c,int clr)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setcolor(hc,clr);
	cout<<c;
	setcolor(hc,0xf);
}
char BIN_TO_CHAR(string BIN)
{
	int cvs=0;
	int io=-1;
	for(int i=BIN.size()-1;i>=0;i--)
	{
		io++;
		if(BIN[i]=='1')
		{
			 cvs+=pow(2,io);
		}
	}
	cvs+=33;
	return cvs;
}
int main()
{
	cout<<"[0]0  [1]1  [2]GBKcode  [3]/  [4]space  [5]enter  [6]decode\n";
	string decoder_temp="",decoder_ROM="";
	cout<<"\t0 1 2 3 4 5 6 7 8 9 A B C D E F\n";
	long long i=0;
	bool gbk=false;
	cout<<"0\t";
	while(1)
	{
		if(kbhit())
		{
			char w=getch();
			if(w=='1')//1
			{
				print("  ",0xa0);
				i++;
				decoder_temp+=w;
			}
			else if(w=='0')//0
			{
				print("  ",0x90);
				i++;
				decoder_temp+=w;
			}
			else if(w=='2')
			{
				print("  ",0xf0);
				i++;
				gbk=true;
			}
			else if(w=='3')//offset
			{
				print("  ",0x40);
				i++;
				if(gbk==false)
				{
					decoder_ROM+=BIN_TO_CHAR(decoder_temp);
				}
				else if(gbk==true)
				{
					decoder_ROM+=char(-int(BIN_TO_CHAR(decoder_temp))+33);
				}
				gbk=false;
				decoder_temp="";
			}
			else if(w=='4')//space
			{
				decoder_ROM+=' ';
				print("  ",0x60);
				i++;
				decoder_temp="";
			}
			else if(w=='5')//next line
			{
				decoder_ROM+='\n';
				print("  ",0x50);
				i++;
				decoder_temp="";
			}
			else if(w=='6')//finish 
			{
				break;
			}
			if(i%16==0)
			{
				cout<<'\n';
				cout<<i/16<<'\t';
			}
		}
	}
	cout<<endl<<endl<<endl;
	print(decoder_ROM,0xf0);
	print("\n\n\n³ÌÐò½áÊø\n\n\n",0xf);
	system("pause");
	return 0;
}
