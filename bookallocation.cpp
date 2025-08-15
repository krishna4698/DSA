#include<iostream>
using namespace std;
#include<vector>

 bool isvalid(vector<int> arr, int n, int k, int maxallowedpages) {
        int student = 1, pages = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxallowedpages) {
                return false;
            }
            if (pages + arr[i] <= maxallowedpages) {
                pages += arr[i];
            } else {
                student++;
                pages = arr[i];
            }
        }
        return student > k ? false : true;
    }

    int findPages(vector<int> &arr, int n, int k) {
        if (k > n) {
            return -1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int ans = -1;
        int st = 0;
        int end = sum;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (isvalid(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else { 
                st = mid + 1;                
            }
        }                                  
        return ans;
    }


int main(){
  vector<int>arr={100, 200, 300, 200};
  int n=4, k=2;
  cout<< findPages(arr,n,k);

}
