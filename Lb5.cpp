
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /*char letter;

    cout << "������� �����:";
    cin >> letter;

    switch (letter)
    {

     case 'a': cout << "�������"; break;
     case 'b': cout << "���������"; break;
     case 'c': cout << "���������"; break;
     case 'd': cout << "���������"; break;
     case 'e': cout << "�������"; break;
     case 'f': cout << "���������"; break;
     case 'g': cout << "���������"; break;
     case 'h': cout << "���������"; break;
     case 'i': cout << "�������"; break;
     case 'j': cout << "���������"; break;
     case 'k': cout << "���������"; break;
     case 'l': cout << "���������"; break;
     case 'm': cout << "���������"; break;
     case 'n': cout << "���������"; break;
     case 'o': cout << "�������"; break;
     case 'p': cout << "���������"; break;
     case 'q': cout << "���������"; break;
     case 'r': cout << "���������"; break;
     case 's': cout << "���������"; break;
     case 't': cout << "���������"; break; 
     case 'u': cout << "�������"; break;
     case 'v': cout << "���������"; break;
     case 'x': cout << "���������"; break;
     case 'y': cout << "�������"; break;
     case 'z': cout << "���������"; break;

    }*/


    char letter;

    cout << "������� �����:";
    cin >> letter;

    switch (letter)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y': cout << "�������"; break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'x':
    case 'z': cout << "���������"; break;
    default: cout << "����������� �����"; break;

    }


    /*double a, x, c, b, F;

    cout << "Input a:";
    cin >> a;

    cout << "Input x:";
    cin >> x;

    cout << "Input c:";
    cin >> c;

    cout << "Input b:";
    cin >> b;

    if (x < 6 && b + 6 != 0)
    {
        F = a * pow(x, 3) / c + b;
    }
     
    else
    {
        if (x > 6 && b + c == 0)
        {
           F = a * pow(x, 2) - c / b;
        }

        else
        {
          F = x / -c + 2;
        }
    }
    cout << F << endl;*/

    
}