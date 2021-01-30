#include<iostream>
#include<vector>
using namespace std;

void backtrack(vector<vector<int> >& res, vector<int>&curr, int target, vector<int>& c, int start = 0)
{
    if(target == 0) 
    {
        res.push_back(curr);
        return;
    }
    
    for(int i = start; i<c.size(); i++)
    {
        if(target-c[i] < 0) continue;
        curr.push_back(c[i]);
        backtrack(res, curr, target - c[i], c, i);
        curr.pop_back();
    }
    
}
vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
    vector<vector<int> > res;
    vector<int>curr;
    
    backtrack(res, curr, target, candidates);
    return res;    
}

int main(){
    vector<int> candidates;
    cout << "Enter the array/vector size, followed by the elements" << endl;
    int size, a, target;
    cin >> size;
    for(int i=0; i< size; i++){
        cin >> a;
        candidates.push_back(a);
    }
    cout << "Enter the target element" << endl;
    cin >> target;
    vector<vector<int> > res = combinationSum(candidates, target);
    cout << "The new resultant array is: " << endl;
    for(int i=0; i< res.size(); i++){
        for(int j=0; j< res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

}