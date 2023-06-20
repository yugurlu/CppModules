
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

std::string wordChange(string &str, string &searchWord, string &replaceWord)
{
    string result;
    int startPos = 0;
    int foundPos = str.find(searchWord, startPos);

    while ((std::string::size_type)foundPos != std::string::npos)
    {
        result.append(str, startPos, foundPos - startPos);
        result.append(replaceWord);

        startPos = foundPos + searchWord.length();
        foundPos = str.find(searchWord, startPos);
    }
    result.append(str, startPos);

    return result;
}

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
                line = wordChange(line, s1, s2);
                new_file << line << endl;
            }
        }
        else
            cout << "Wrong file name!" << endl;
    }
    else
        cout << "Wrong arguments!" << endl;
}