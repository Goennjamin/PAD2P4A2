//
// Created by leonw on 03.01.2022.
//

#ifndef PRAKTIKUM4_2_WORDDATA_H
#define PRAKTIKUM4_2_WORDDATA_H
#include <string>
#include "vector"
#include "map"
class worddata {

private:
    int counter;
    std::string word;
public:
    int getCounter() const;

    void setCounter(int counter);

    const std::string &getWord() const;

    void setWord(const std::string &word);

public:
    void countWords(std::vector<std::string>);
    worddata(int counter, const std::string &word);
    bool cmp(std::pair<std::string, int>& a, std::pair<std::string, int>& b);
    void sort(std::map<std::string, int>& M);
    //bool checkWord(std::vector<std::string> list, std::vector<worddata> finallist);
};


#endif //PRAKTIKUM4_2_WORDDATA_H
