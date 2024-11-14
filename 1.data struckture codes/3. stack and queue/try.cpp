#include <bits/stdc++.h>
using namespace std;

void printNextGreaterElements(const vector<int>& nums) {

    int n = nums.size();

    /*
        1 2 4 2 3
        2 4 -1 3 -1
    */
    vector<int> result(n, -1);
    /* 
        1-> 4
        2 -> 
        3 -> 
        4 -> 
    */
    
    /*time complexity : O(n) */
    stack<int> st;

    for (int i = 0; i < n; i++) {
        /* */
        while (!st.empty() && nums[i] > nums[st.top()]) {
            result[st.top()] = nums[i];
            /*
            */
            st.pop();
        }
        /*
            stack : 1

            vector : 
                0 -> 2
            
         */
        st.push(i);
    }

    
    cout << "Next Greater Elements: \n";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " -> " << result[i] << endl;
    }
}

int main() {
    vector<int> nums = {1,2,4,2,3};
    printNextGreaterElements(nums);
    return 0;
}
