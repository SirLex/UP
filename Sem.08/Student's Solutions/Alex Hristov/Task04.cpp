#include <iostream>

using namespace std;

const int timeFormatSize = 9;

int CheckTimeStr(char* time){
    if(time == nullptr){
        return -1;
    }
    bool hourFormat = false;
    bool minuteFormat = false;
    bool secondFormat = false;
    if(*time >= '0' && *time<='1'){
        time++;
        if(*time >= '0' && *time<='9' ){
            time++;
            hourFormat = true;
        }
        
    }else if(*time == '2'){
        time++;
        if(*time >= '0' && *time<='4' ){
            time++;
            hourFormat = true;
        }
        
    }
    if(*time == ':'){
        time++;
    }
    cout<<endl;

    if(*time >= '0' && *time<='5'){
        time++;
        
        if(*time >= '0' && *time<='9' ){
            time++;    
            minuteFormat = true;
        }
        
    }
    if(*time == ':'){
        time++;
    }
    if(*time >= '0' && *time<='5'){
        time++;
        if(*time >= '0' && *time<='9'){
            time++;    
            secondFormat = true;
        }
        
    }
    cout<<"hourFormat="<<hourFormat<<endl;
    cout<<"minuteFormat="<<minuteFormat<<endl;
    cout<<"secondFormat="<<secondFormat<<endl;
    if(hourFormat &&  minuteFormat && secondFormat){
        return 1;   
    }else{
        return -1;
    }
    
}



int main(){
    char time[timeFormatSize];
    cout << "Enter time: ";
    cin.getline(time,timeFormatSize);
    
    cout<<"Time format: "<<CheckTimeStr(time);

}
