#include<iostream>
#include<string>
using namespace std;
int main() {
    // string create
    string str;
    cout << "Enter here: ";

    // input
    cin >> str; // ye single word ko hi acess kr pata hai.

    // input ka best tarika
    // getline(cin, str);      // ye puri sentence ko access krta hai

    //output
    cout << str << endl;

    // important function
    cout << "length: " << str.length() << endl;
    cout << "isEmpty: " << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(0,7) << endl;  // ye substring return krega 0 index se 6 length ki.

    string a = "vinayak";
    string b = "vinay";

    if(a.compare(b) == 0){
        cout << "a nd b are exactly same strings" << endl;
    }
    else{
        cout << "a and b are not same" << endl;
    }

    string sentence = "hello jee good morning!";
    string target = "jee";

    cout << target << " Found at " <<  sentence.find(target) << " index." << endl;

    string str2 = "This is my first message" ;
    string word = "vinayak";

    str2.replace(0, 4, word);
    cout << str2 << endl;

    return 0;
}