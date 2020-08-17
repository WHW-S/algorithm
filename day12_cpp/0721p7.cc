#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

struct PersonInfo
{
    std::string name;
    std::vector<std::string> phones;
};

std::string format(const std::string &s){return s;}

bool valid(const std::string &s)
{
    return true;
}

int main(int argc,char *argv[])
{
    std::string line,word;
    std::vector<PersonInfo> people;
    std::ifstream f1(argv[1]);
    while(getline(f1,line))
    {
        PersonInfo info;
        std::istringstream record(line);
        record>>info.name;
        while(record>>word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    for (const auto &entry : people) 
    {
        std::ostringstream formatted, badNums;
        for (const auto &nums : entry.phones) 
        {
            if (!valid(nums)) 
            {           
                badNums << " " << nums;
            } 
            else
            {
                formatted << " " << format(nums); 
            }
        }
        if (badNums.str().empty())
        {
            std::cout<< entry.name << " "    
                << formatted.str() << std::endl;
        }     
        else
        {
            std::cerr << "input error: " << entry.name 
                << " invalid number(s) " << badNums.str() << std::endl;
        }
    }
    return 0;
}

