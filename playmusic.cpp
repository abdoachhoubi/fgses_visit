#include "./visite.hpp"

int main()
{
    int i;
    char *str;
    string congrats = "./.congrats.mp3";
    string qawiti = "./.qawiti.mp3";
    char command[256];

    i = 0;
    while (1)
    {
        system("osascript -e 'set volume output volume (output volume of (get volume settings) + 100)'");
        str = readline("Enter password: ");
        if (strcmp(str, "FGSESX1337") == 0)
        {
            cout << "Congrats 🥳🎉!" << endl;
            sprintf(command, "afplay %s", congrats.c_str());
            system(command);
            break;
        }
        else
        {
            cout << "Wrong password 😵" << endl;
            i++;
        }
        if (i == 3 || strcmp(str, "WEARELEET0000") == 0 || strcmp(str, "FTTRANSCENDANCE") == 0)
        {
            cout << "Waaaaa qawiiiiti 🙂\nTkayss lina 3la lpissi asmitek 😂" << endl;
            sprintf(command, "afplay %s", qawiti.c_str());
            system(command);
            i = 0;
        }
    }
    return 0;
}
