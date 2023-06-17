
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int ac, char **argv)
{
    if (ac == 4)
    {
        string file_name = argv[1];
        string s1 = argv[2];
        string s2 = argv[3];
        
        std::ifstream file(file_name, std::ios::in);
        if(file.is_open())
        {
            std::ofstream new_file(file_name + ".replace");
            string line;
            while (std::getline(file, line))
            {
                if(line.find(s1) == std::string::npos)
                    new_file << line << endl;
                else
                {
                    new_file << line.substr(0, line.find(s1));
                    new_file << s2;
                    new_file << line.substr(line.find(s1) + s1.length()) << endl;
                }
            }
        }
        else
            cout << "Wrong file name!" << endl;
    }
    else
        cout << "Wrong arguments!" << endl;
}