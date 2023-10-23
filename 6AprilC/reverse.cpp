#include<iostream>
#include<string>
using namespace std;

void reverse(string& s){
    int i = 0;
    int j = s.size() - 1;
    while(i < j){
        char s_last = s[j];
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return;
}

int main(){
    string s1;
    cout << "Enter String : ";
    getline(cin, s1);
    reverse(s1);
    cout << "Reverse String : " << s1 << "\n";
    reverse(s1);
    cout << "Original String : " << s1 << "\n";
    return 0;
}