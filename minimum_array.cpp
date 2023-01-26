#include <iostream>
#include<conio.h>
using namespace std;

float min(float arr_nums[], int array_size){
    float min;
    float next_num;
    min = arr_nums[1];
    while(array_size>0){
        
        next_num = arr_nums[array_size];
        
        if(next_num < min){
            min = next_num;
        }
        
        array_size -= 1;
    }
    return min;
}

int main()
{
    int array_size , size , arr_size;
    float max , next_num;
    cout<<"Chand adad mikhahid vared konid ? :";
    
    cin>>array_size;
    
    size = array_size;
    
    float arr_nums[size];
    
    while(size>0){
        cout<<"Adad "<<size<<" ra vared konid :";
        cin>>arr_nums[size];
        size -= 1;
    }
    
    arr_size = array_size;
    

    cout<<endl<<"Minimum = "<<min(arr_nums , array_size);
    
    return 0;
}




