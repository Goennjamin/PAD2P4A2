#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include "vector"
#include "worddata.h"

bool checkWord(std::vector<std::string> vector1, std::vector<worddata> vector2);

int main() {

    std::map<std::string, int> wordlist;
    std::map<std::string ,int>::iterator it;
    std::ifstream file;
    file.open((R"(C:\Users\leonw\CLionProjects\Praktikum4_2\text.txt)"));

    std::string word;

    while (file >> word){ // >> operator skips whitespaces

        std::pair<std::string, int> p1(word,1);

        it = wordlist.find(word);

        if(it != wordlist.end()){
            it->second ++;
            word.clear();
        }else{
            wordlist.insert(p1);
            word.clear();
        }
    }

    file.close();

    std::vector<std::pair<std::string, int> > arr;
    for (const auto &item : wordlist) {
        arr.emplace_back(item);
    }

    std::sort(arr.begin(), arr.end(),
              [] (const auto &x, const auto &y) {return x.second > y.second;});

    std::ofstream output;
    output.open(R"(C:\Users\leonw\CLionProjects\Praktikum4_2\p4a2.txt)");

    for (const auto & [key, value] : arr) {
        output << key <<"-"<< value << std::endl;
    }
    output.close();




}