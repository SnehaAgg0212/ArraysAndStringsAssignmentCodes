#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";

        int length = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            length = (length> strs[i].size())? strs[i].size(): length;

            for (int j = 0; j < length; j++) {
                char c = strs[0][j], d = strs[i][j];

                if (c != d) {
                    length = j;
                    break;
                }
            }
        }

        return strs[0].substr(0, length);
    }

    int main(){
        vector<string> strs;
        string str;
        int size;
        cout << "Enter the array/vector size, followed by the elements" << endl;
        cin >> size;
    for(int i=0; i< size; i++){
        cin >> str;
        strs.push_back(str);
    }
    cout << "The longest common substring is: " << longestCommonPrefix(strs) << endl;
    }