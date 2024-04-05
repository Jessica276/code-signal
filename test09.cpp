#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<stdexcept>
#include<algorithm>

using namespace std;

int solution(string s1,string s2){
    int solutions=0; 
    map<char,int> occurrence_s1;
    map<char,int> ::iterator im;
    map<char,int> occurrence_s2;
    map<char,int> ::iterator it;
    vector<map<char,int>>Vector;

    for(int i=0,j=0;i<int(s1.size()) || j<int(s2.size()) ;i++,j++){
        if(i<int(s1.size())){
            occurrence_s1[s1[i]]++;
        }
        if(j<int(s2.size())){
            occurrence_s2[s2[j]]++;
        }
    }

    Vector.push_back(occurrence_s1);
    Vector.push_back(occurrence_s2);

    for(auto it=Vector[0].begin();it!=Vector[0].end();it++){
        auto key = it->first;
        try{
            cout<<Vector[0].at(key) << " " << Vector[1].at(key) <<endl;
            solutions += min(Vector[0].at(key),Vector[1].at(key));
        }
        catch(const out_of_range& e){
            cerr<<"0 "<<endl;
        }  
    }


    return solutions;
}

int main(){
    int s;
    s=solution("aac","abbaf");
    cout<<"Solution: "<<s;

    return 0;
}