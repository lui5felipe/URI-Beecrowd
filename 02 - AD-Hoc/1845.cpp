#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    char c, aux='A';

    while (!cin.eof())
    {
        scanf("%c",&c);
        switch (c)
        {
            case 'P':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'S':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'V':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'X':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'J':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'B':{
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                    break;
            }
            case 'Z':{
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='F';
                break;
            }
            case 'p':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 's':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'v':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'x':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'j':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'b':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'z':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            case 'F':
            {
                if(aux!='f' && aux!='F')
                    cout << 'F';
                aux='f';
                break;
            }
            case 'f':
            {
                if(aux!='f' && aux!='F')
                    cout << 'f';
                aux='f';
                break;
            }
            default:
            {
                cout << c;
                aux=c;
                break;
            }
        }
    }
    return 0;
}
