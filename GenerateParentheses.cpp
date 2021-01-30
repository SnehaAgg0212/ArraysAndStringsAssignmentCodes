#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>f(int n)
    {
        string s = "";
        vector<string>res;
        res.push_back(s);
        if(n==0)
            return res;
        
        res.pop_back();
        for(int i=0;i<n;++i)
        {
             vector<string>res1 =f(i) ;
            vector<string>res2=f(n-1-i);
            for(auto str1:res1)
            {
                for(auto str2:res2)
                {
                    res.push_back(str1+"("+str2+")");
                }
            }
        } 
        return res;
    }

    vector<string> generateParenthesis(int n) {
        return f(n);
    }

    int main(){
        cout << "Enter the number to generate parenthesis" << endl;
        int n;
        cin >> n;
        vector<string> ans = generateParenthesis(n);
        for(int i = 0; i< ans.size(); i++){
            cout << ans[i] << endl;
        }

    }