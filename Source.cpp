#include <iostream>

using namespace std;

void Del(char*& str, int num)
{
    int size = strlen(str)-1;
   
     char* buf = new char[size];

    for (int i = 0, j = 0; i <= size; ++i, j++)
    {
        if (i != num-1)
            buf[j] = str[i];
        else
            --j;
    }

    buf[size] = '\0';

     str= buf;
         
     
}



void main()
{
    setlocale(0, "");

   
    char* str = new char[256];

    
    cout << "������� ������: ";
    cin >> str;
    cout << endl;

    int num;
    cout << "������� ����� ������� ������� ������� ������ �������: ";
    cin >> num;
    cout << endl;
    cout << endl;
        

     Del(str, num);

     cout << str;

    
   
}

/*������� 1:
�������� �������, ������� ������� �� 
������ ������ � �������� �������.*/