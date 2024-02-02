#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char *argv[])
{
    string filepath = "todo.bin";
    if (argc == 1)
    {
        string line;
        ifstream myfile(filepath);
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << line << '\n';
            }
            myfile.close();
            return 0;
        }
        else
            cout << "Unable to open file, check if " << filepath << " exists\n";
    }
    else if (argc >= 2)
    {
        if (string(argv[1]) == "help")
        {
            cout << "Usage: " << endl;
            cout << string(argv[0]) << " - to list tasks" << endl;
            cout << string(argv[0]) << "help - to display this" << endl;
            cout << string(argv[0]) << "add <item> - to add item" << endl;
            cout << string(argv[0]) << "completed <line> - to mark a task as completed" << endl;
            return 0;
        }
        else if (string(argv[1]) == "add")
        {
            ofstream MyFile(filepath, ios::app);
            MyFile << string(argv[2]) << "\n";
            cout << "written " << string(argv[2]) << endl;
            MyFile.close();
        }
        else if (string(argv[1]) == "completed")
        {
            string line;
            ifstream myfile(filepath);
            ofstream temp("temp.txt");
            int i = 0;
            if (myfile.is_open())
            {
                while (getline(myfile, line))
                {
                    if (i == stoi(string(argv[2])) - 1)
                    {
                    }
                    else
                    {
                        temp << line << "\n";
                    }
                    i++;
                }
                myfile.close();
                temp.close();
                const char *newName = filepath.c_str();
                remove(newName);
                rename("temp.txt", newName);
            }
            else
                cout << "Unable to open file";
        }
        else
            cout << "Unable to open file";
        return 0;
    }
}
