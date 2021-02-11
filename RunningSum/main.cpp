#include <iostream>
using namespace std;

int main()
{
    std::cout<<"Test Template"<<std::endl;
    int arr1[]{1,2,3,4};
    
    int arr2[4]{};
    
    for(int i{0};i<4;i++){
        int sum{0};
        for(int j{i};j>=0;j--){
            
            sum+=arr1[j];
            
        }
        arr2[i]={sum};
    }
    
    for(int i:arr2){
        cout<<i<<endl;
    }
    
	
	return 0;
}
