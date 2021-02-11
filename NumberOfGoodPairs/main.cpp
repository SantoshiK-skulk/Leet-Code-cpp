#include <iostream>

using namespace std;
#include <vector>

int main()
{
    std::cout<<"Test Template"<<std::endl;
    int nums[]{1,2,3,1,1,3};
    int count{};
    
    for(int i{0};i<6;i++){
        for(int j{i+1};j<6;j++){
            count =(nums[i]==nums[j])?count+1:count;
        }
    }
	cout<<count;
    
    vector<int> nums1(3,6);
    
    for(int i{0};i<nums1.size();i++){
        cout<<nums1[i];
        
    }
    
	return 0;
    
    
}
