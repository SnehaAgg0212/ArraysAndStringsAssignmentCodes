#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1.clear();
            for(int k=0; k< nums2.size(); k++){
                nums1.push_back(nums2[k]);
            }
            return;
        }
        
        if(nums2.size() == 0){
            return;
        }
        
            int x = nums1.size() - m;
        while(x != 0){
                nums1.erase(nums1.end()-1);
               x--;
            }
       
        int i=0, j=0;
        while(i< nums1.size() && j< nums2.size()){
            if(nums1[i]> nums2[j]){
                nums1.insert(nums1.begin()+i, nums2[j]);
                j++;
            }
            i++;
        }
        if(i== nums1.size()){
            for(; j< nums2.size(); j++){
                nums1.insert(nums1.end(), nums2[j]);
            }
        }
    }

    int main(){
    vector<int> nums1, nums2;
    cout << "For array -1: Enter the array/vector size, followed by the elements" << endl;
    int size1, size2, a;
    cin >> size1;
    for(int i=0; i< size1; i++){
        cin >> a;
        nums1.push_back(a);
    }
    sort(nums1.begin(), nums1.end());
    cout << "For array -2: Enter the array/vector size, followed by the elements" << endl;
    cin >> size2;
    for(int i=0; i< size2; i++){
        cin >> a;
        nums2.push_back(a);
    }
    sort(nums2.begin(), nums2.end());
    merge(nums1, size1, nums2, size2);
    cout << "The new merged array is: " << endl;
    for(int i=0; i< nums1.size(); i++){
        cout << nums1[i] << " ";
    }

}