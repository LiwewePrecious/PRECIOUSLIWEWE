#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>

using namespace std;

int getVowelCount(const string &content){
      int vowelcount =0;
      string vowels = "AEIOUaeiou";
      for (char character : content) {
        if (vowels. find(character) !=string :: npos){
            vowelcount++;
        }
      }
      return vowelcount;
}

int getWordCount(const string &content){
    stringstream contentStream(content);
    string singleword;
    int wordcount = 0;
    while (contentStream >> singleword){
        wordcount++;
    }
    return wordcount;
}
string reverseContent(const string &content){
    return string(content.rbegin(),content.rend());
}
string captalizesecondCharacter(const string &content){
    stringstream contentStream(content);
    string word, adjustedContent;

    while(contentStream >> word){
        if (word.length() > 1){
            word[1] = toupper(word[1]);
        }
        adjustedContent += word + " ";
    }
    if (!adjustedContent.empty()){
         adjustedContent.pop_back();
    } 
    return adjustedContent;
}

int main(){
    string textData;
    ifstream
 inputFile("textFile.txt");
    if (!inputFile.is_open()){
        cerr << "Error opening file" << endl;

        return 1;

    } 
    string filedata;
    getline(inputFile, filedata);
    inputFile.close();

    cout << "number of vowels: " << getVowelCount(filedata) << endl;
    cout << "number of words: " << getWordCount(filedata) <<endl;
    cout << "Reversed text:" << reverseContent(filedata) <<endl;
    cout << "Text with second letter captalised:" << captalizesecondCharacter(filedata) <<endl;

    return 0;

     

}

