#include<iostream>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        while(mid <= high) {
            
            //first condition
            if(a[mid]==0) {
                swap(a[mid], a[low]);
                mid++;
                low++;
            }
            
            //second condition
            else if(a[mid] == 1) {
                mid++;
            }
            
            //third condition
            else {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
    
};
