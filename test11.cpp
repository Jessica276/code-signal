#include<iostream>
#include<vector>

using namespace std;

vector<int> solution(vector<int> a);

int main(){
    vector<int>s{-1,150,190,170,-1,-1,160,180};
    solution(s);
    

    return 0;
}

vector<int> solution(vector<int> a){
    for(int i=0;i<int(a.size());i++){
        if(a[i] != -1){
            for(int j=i+1;j<int(a.size());j++){
                if(a[j]!=-1){
                    if(a[i]>a[j]){
                        int temp =0;
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
        }
    }

    for(int i=0;i<int(a.size());i++){
        cout<<a[i]<<" ";
    }

    return a;
}