#include <iostream>
using namespace std;
#include <vector>
int main()
{
    std::cout<<"Test Template"<<std::endl;
    int nums[]{2,7,11,15};
    int numsLen{sizeof(nums)/sizeof(nums[1])};
    int target{9};
    vector <int> soln;
    cout<<sizeof(soln)<<endl;
    
    //cout<<numsLen;
    
    for(int i=0;i<numsLen;i++){
        
        for(int j{i+1};j<numsLen;j++){
            
            if(nums[i]+nums[j]==target)
            {
                soln.push_back(i);
                soln.push_back(j);
//                 cout<<i<<" "<<j<<endl;
                
            }
                
                
            
        }
    }
    
    for(int i{0};i<soln.size();i++){
        cout<<soln[i]<<endl;
        
    }
        
	
	return 0;
}
