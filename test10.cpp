#include<iostream>
#include<vector>

using namespace std;

bool solution(int n);

int main(){
    bool s=false;

    s = solution(2213);
    cout<<s;

    return 0;
}

bool solution(int n){
    bool sol = false;
    vector<int>digit;
    int summ=0;
    int size=0;

    while (n){
        digit.push_back(n%10);
        n=n/10;
    }

    size=digit.size(); 

    if(size%2==0){
        for(int i=0;i<size;i++){
            if(i<size/2){
                summ+=digit[i];
            }
            else{
                summ-=digit[i];
            }
        }
        if(summ==0){
            sol=true;
        }
    }


    return sol;
}