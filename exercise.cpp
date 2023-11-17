#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>

using namespace std;

int main()
{
    int CPS=0,TIM1=0,TIM2=0;;
    cout<<"=====        <电报机使用训练系统>         =====\n";
    cout<<"请在接下来的10.00sec内按照电报机的密文敲击键盘按键\n";
    cout<<"按下任意键触发\n\n\n";
    while(!kbhit()){
	}
    cout<<"测试已开始! 计时10.00sec\n";
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
    cout<<"您的CPS:"<<CPS/10<<'.'<<CPS%10<<endl;
    while(1){
        system("pause");
    }
    return 0;
}
