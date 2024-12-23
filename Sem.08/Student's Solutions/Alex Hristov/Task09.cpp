#include <iostream>

using namespace std;

const int MaxSize = 1024;

void GetWord(char str[], char maxWord[]){
    if(str == nullptr){
        return;
    }

    int currWordLength = 0, maxWordLength = 0;
    
    char currWord[MaxSize];
     
    while (*str != '\0') {
        
        if (*str != ' ' && *str != '\t') {
            currWord[currWordLength] = *str;
            currWordLength++;
        } else {
            currWord[currWordLength] = '\0';
            
            if(currWordLength > maxWordLength){
                maxWordLength = currWordLength;
                
                for(int i = 0 ; i < currWordLength; i++){
                    maxWord[i] = currWord[i];        
                }
                
                maxWord[currWordLength] = '\0';
            }
            
            currWordLength = 0;
        }
        
        str++;
    }
    
    currWord[currWordLength] = '\0';
    if(currWordLength > maxWordLength){
        maxWordLength = currWordLength;
        for(int i = 0 ; i < currWordLength; i++){
            maxWord[i] = currWord[i];        
        }
        maxWord[currWordLength] = '\0';

    }
    
}

int main() {
    char str[MaxSize];
    
    char maxWord[MaxSize];
    cout<<"Enter symbols:";
    cin.getline(str,MaxSize);
    
    GetWord(str,maxWord);
    
    cout<<endl;
    cout<<maxWord;
    
    return 0;
}
