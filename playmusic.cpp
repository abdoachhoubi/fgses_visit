#include "./visite.hpp"

int main()
{
    char *str;
    string mp3FilePath = "~/song.mp3";
    char command[256];

    while (1)
    {
        str = readline("Enter password: ");
        if (strcmp(str, "FGSESX1337") == 0)
        {
            cout << "Congrats 🥳🎉!" << endl;
            sprintf(command, "afplay %s", mp3FilePath.c_str());
            system(command);
            break;
        }
        else
        {
            cout << "Wrong password 😵" << endl;
        }
    }
    return 0;
}
