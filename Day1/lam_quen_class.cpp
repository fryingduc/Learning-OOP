/**
 *	author: fryingduc 
 *	created:29.05.2022 15:51:22
**/
#include <bits/stdc++.h>
using namespace std;
class human{
public:
    vector<string> ten;
    int tuoi;
    human();
    human(string s, int t){
        tuoi = t; 
        stringstream ss(s);
        string str;
        while(ss >> str){
           ten.push_back(str);
        }
    }
    friend ostream& operator<<(ostream& out, const human &h);
    friend istream& operator>>(istream& in, human &h);
};
human::human(){
    ten = vector<string>();
    tuoi = 0;
}
ostream& operator<<(ostream &out, const human &h){
    out << "Ten cua ban co " << h.ten.size() << " chu, bao gom" << ": ";
    int counter = 0;
    for(string i:h.ten){
        ++counter;
        out << i << (counter == (int)h.ten.size() ? "" : ", "); 
    }
    out << "\nBan " << h.tuoi << " tuoi\n";
    return out;
}
istream& operator>>(istream &in, human &h){
    string s;
    getline(in, s);
    stringstream ss(s);
    string str;
    while(ss >> str){
        h.ten.push_back(str);
    }
    int t;
    in >> t;
    h.tuoi = t;
    return in;
}
int main(){
    human hs;
    cin >> hs;
    cout << hs; 
}

