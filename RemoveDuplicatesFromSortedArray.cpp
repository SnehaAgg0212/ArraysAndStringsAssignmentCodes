#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
int main(){
    vector<int> nums;
    cout << "Enter the array/vector size, followed by the elements" << endl;
    int size, a;
    cin >> size;
    for(int i=0; i< size; i++){
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    cout << "New length is :  " << removeDuplicates(nums) << endl;
    cout << "The new array is: " << endl;
    for(int i=0; i< removeDuplicates(nums); i++){
        cout << nums[i] << " ";
    }

}