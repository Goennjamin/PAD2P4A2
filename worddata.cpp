//
// Created by leonw on 03.01.2022.
//

#include <iostream>
#include "worddata.h"

void worddata::countWords(std::vector<std::string>) {

}

worddata::worddata(int counter, const std::string &word) : counter(counter), word(word) {}

int worddata::getCounter() const {
    return counter;
}

void worddata::setCounter(int counter) {
    worddata::counter = counter;
}

const std::string &worddata::getWord() const {
    return word;
}

void worddata::setWord(const std::string &word) {
    worddata::word = word;
}

bool worddata::cmp(std::pair<std::string, int> &a, std::pair<std::string, int> &b) {
    return a.second < b.second;
}

void worddata::sort(std::map<std::string, int> &M) {
// Declare vector of pairs
    std::vector<std::pair<std::string, int> > A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto& it : M) {
        A.push_back(it);
    }



    // Print the sorted value
    for (auto& it : A) {

        std::cout << it.first << ' '
             << it.second << std::endl;
    }
}

//bool worddata::checkWord(std::vector<std::string> list, std::vector<worddata> finallist) {

  //  for(int i = 0; i < finallist.size(); i++){

    //    for(int j = 0; j < list.size(); j++){

      //      if(list.at(j) == finallist.at(i).getWord()){
        //        return true;
          //  }

        //}

   // }


    //return false;
//}
