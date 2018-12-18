#include <iostream>
#include <string>

using namespace std;

void parsString(string str, char ch)
{
    int strLength = 0;
    while(strLength <= str.size())
    {
        if(str[strLength] == ch) cout << endl;
        else if(str[strLength-1] == ch && str[strLength] ==' '){strLength++;continue;}//continue;
        else cout << str[strLength];
        strLength++;
    }

}
int main()
{
    setlocale(0,"");
    cout << "Hello, team! \n" << endl;
    string str;
    char ch;
    while(1)
    {
        str = "";ch = ' ';
        cout << "\nInput the string(or \"exit\" for close the programm):\n# ";
        getline(cin, str);
        if(str == "exit")break;
        //if(str == "")continue;
        cout << "Input a character:\n# ";
        ch = cin.get();
        cout << "Result: \n";
        parsString(str,ch);
        cin.ignore(); // getline любит отлавливать конец строки, это, для того, что бы так не происходило.
    }
    cout << "\nY.D.O.\n";
    return 0;
}
