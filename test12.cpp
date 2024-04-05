#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string solution(string inputString);

int main(){
    string input;
    cout<<solution("foo(batyr)((abc))baz");

    return 0;
}

string solution(string inputString){
    int cursor1=0,cursor2=0;

    
    while(find(inputString.begin(),inputString.end(),'(') != inputString.end()){
        for(int i=0;i<int(inputString.size());i++){
            if(inputString[i] == '('){
                cursor1=i;
            }
            else if(inputString[i] == ')'){
                cursor2=i;
                reverse(inputString.begin() + cursor1+1,inputString.begin() + cursor2);
                inputString.erase(inputString.begin()+cursor1,inputString.begin()+cursor1+1);
                inputString.erase(inputString.begin()+cursor2-1,inputString.begin()+cursor2);
                break;
            }

        }
    }

    return inputString;
}
