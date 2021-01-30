#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool isPalindrome(string s) {
        int i = 0;
	int j = s.size() - 1;

	while (i < j)
		if (!isalnum(s[i]))
			++i;
		else if (!isalnum(s[j]))
			--j;
		else if (tolower(s[i++]) != tolower(s[j--]))
			return false;

	return true;  
    } 

    int main(){
        string str;
        cout << "Enter the string" << endl;
        cin >> str;

    cout << "The given string is a valid palindrome? " << (isPalindrome(str)?"true":"False") << endl;
    }