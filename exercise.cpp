#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

int main()
{
    int CPS=0,TIM1=0,TIM2=0;;
    cout<<"=====        <�籨��ʹ��ѵ��ϵͳ>         =====\n";
    cout<<"���ڽ�������10.00sec�ڰ��յ籨���������û����̰���\n";
    cout<<"�������������\n\n\n";
    while(!kbhit()){
	}
    cout<<"�����ѿ�ʼ! ��ʱ10.00sec\n";
    TIM1=clock();
    while(1)
    {
        if(getch()>0)
        {
            cout<<"CPS+1"<<"\t"<<CPS+1<<"\n";
            CPS+=1.00;
        }
        if(clock()>=10000+TIM1)
        {
            break;
        }
    }
    system("color a");
    cout<<"����CPS:"<<CPS/10<<'.'<<CPS%10<<endl;
    while(1){
        system("pause");
    }
    return 0;
}
