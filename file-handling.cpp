#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ofstream file("color.txt", ios::out);

    if (file.is_open())
    {
        file << "Red\n";
        file << "Green\n";
        file << "Blue\n";
        file << "Yellow\n";
        file << "Pink\n";
        file.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    ifstream infile("color.txt", ios::in);
    ofstream copyFile("color_copy.txt", ios::out);

    if (copyFile.is_open() && infile.is_open())
    {
        string line;

        while (getline(infile, line))
        {
            copyFile << line << endl;
        }
        cout << "File copied successfully." << endl;
        copyFile.close();
        infile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;
}