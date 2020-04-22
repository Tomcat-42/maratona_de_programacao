#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    string temp;
    set<string> text;
    while(cin >> c){
        if((c >= 65 && c <= 90)||(c >= 97 && c<= 122)){
            temp += tolower(c);
        } else{
            text.insert(temp);
            temp.clear();
        }
    }
    if(!temp.empty()){
        text.insert(temp);
        temp.clear();
    }
    for(set<string>::iterator i = text.begin(); i != text.end(); i++){
        if(i == text.begin()) i++;
        if(*i != "\n")
            cout << *i << endl;
    }
    return 0;
}
