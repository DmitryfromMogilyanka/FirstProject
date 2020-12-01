
#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /*char letter;

    cout << "Введите букву:";
    cin >> letter;

    switch (letter)
    {

     case 'a': cout << "Гласная"; break;
     case 'b': cout << "Согласная"; break;
     case 'c': cout << "Согласная"; break;
     case 'd': cout << "Согласная"; break;
     case 'e': cout << "Гласная"; break;
     case 'f': cout << "Согласная"; break;
     case 'g': cout << "Согласная"; break;
     case 'h': cout << "Согласная"; break;
     case 'i': cout << "Гласная"; break;
     case 'j': cout << "Согласная"; break;
     case 'k': cout << "Согласная"; break;
     case 'l': cout << "Согласная"; break;
     case 'm': cout << "Согласная"; break;
     case 'n': cout << "Согласная"; break;
     case 'o': cout << "Гласная"; break;
     case 'p': cout << "Согласная"; break;
     case 'q': cout << "Согласная"; break;
     case 'r': cout << "Согласная"; break;
     case 's': cout << "Согласная"; break;
     case 't': cout << "Согласная"; break; 
     case 'u': cout << "Гласная"; break;
     case 'v': cout << "Согласная"; break;
     case 'x': cout << "Согласная"; break;
     case 'y': cout << "Гласная"; break;
     case 'z': cout << "Согласная"; break;

    }*/


    char letter;

    cout << "Введите букву:";
    cin >> letter;

    switch (letter)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y': cout << "Гласная"; break;
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
    case 'z': cout << "Согласная"; break;
    default: cout << "Неизвестная буква"; break;

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