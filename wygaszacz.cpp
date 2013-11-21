#include <iostream>
#include <windows.h>
#define TIME 100

using namespace std;

int main()
{
    while(1)
    {
        for(int k = 0; k < 10; k++)
        {
            for(int i = 0; i < k; i++)
            {
                cout << "     ";
            }
            cout << "penis" << endl;
            Sleep(TIME);
        }
        for(int k = 10; k > 0; k--)
        {
            for(int i = 0; i < k; i++)
            {
                cout << "     ";
            }
            cout << "penis" << endl;
            Sleep(TIME);
        }
    }
}
