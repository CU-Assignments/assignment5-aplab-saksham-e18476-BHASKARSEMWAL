Code:-
  '''
#include <iostream>
#include <vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    for (int i = 0; i < k; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] > nums[maxIdx]) {
                maxIdx = j;
            }
        }
        swap(nums[i], nums[maxIdx]);
    }
    return nums[k - 1];
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "Kth largest element: " << findKthLargest(nums, k) << endl;
    return 0;
}



  '''
