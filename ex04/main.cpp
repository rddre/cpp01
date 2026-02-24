#include "replace.hpp"

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <string to search> < string toreplace>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::string content;

    // test open the file
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return 1;
    }

    // copier all file in content
    std::string line;
    while (std::getline(file, line))
    {
        content += line + "\n";
    }
    file.close();

    // replace s1 by s2 in content sans utiliser replace ou replace_all
    int i = 0;
    while (content[i])
    {
        if (content.compare(i, s1.length(), s1) == 0)
        {
            content.erase(i, s1.length());
            content.insert(i, s2);
            i += s2.length();
        }
        else
            i++;
    }

    // create a new file with the same name + .replace
    std::ofstream replaceFile((filename + ".replace").c_str());

    // copier content in the new file
    replaceFile << content;

    // close the files
    replaceFile.close();

    return 0;
}