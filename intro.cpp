#include<bits/stdc++.h>
#include<stdio.h>
#include <windows.h>
using namespace std;
void intro()
{
cout<<"\n\t%%%%%%%%%       ##       ##  %%%%%%%%%%%  **********     %%%  %%%%   ********** ";
  cout<<"\n\t%%              ##       ##    %%     %%  **********     %%%  %%%    **********    ";
  cout<<"\n\t%%%%%%%%%%      ##       ##    %%     %%  **********     %%% %%      **********         ";
  cout<<"\n\t        %%%     ##       ##    %%     %%  **********     %%%   %%%   **********        ";
  cout<<"\n\t%%%%%%%%%%%     ###########  %%%%%%%%%%%  **********     %%%   %%%%  **********  ";

  cout<<"\n\t\t\t$$                **       %%%%  %%%%     %%%%%%%                 \n";
  cout<<"\n\t\t\t$$                ** **      %%  %%% %%     %%               \n";
  cout<<"\n\t\t\t$$$   $$$$$$$     *******     %%  %%% %%     %%%%%                    \n";
   cout<<"\n\t\t\t$$$$  $$  $$$    ****  ***    %%      %%     %%                            \n";
    cout<<"\n\t\t\t&$$$$$$&  $$$   *****  ****   %%      %%     %%%%%%%             \n";
}
int main()
{
    intro();
    //char ch;
    //cin >> ch;
    //int ch = std::cin.get();
    //int c = getch();
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
    char c;
    if(cin >> c){
    //int _getch(void);
    if(c == 110){
        system("CLS");
    }
    }
    return 0;
}
