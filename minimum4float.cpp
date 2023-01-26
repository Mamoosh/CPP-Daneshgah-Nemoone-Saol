#include <iostream>
#include<conio.h>
using namespace std;

float min(float num_1,float num_2,float num_3,float num_4){
    float min;
    min = num_1;
    if(min > num_2){
        min = num_2;
    }
    if(min > num_3){
        min = num_3;
    }
    if(min > num_4){
        min = num_4;
    }

    return min;
}

int main()
{
    float num_1 , num_2 , num_3 , num_4 ;
    cout<<"Adad 1 :";
    cin>>num_1;
    cout<<"Adad 2 :";
    cin>>num_2;
    cout<<"Adad 3 :";
    cin>>num_3;
    cout<<"Adad 4 :";
    cin>>num_4;

    cout<<endl<<"Minimum = "<<min(num_1 , num_2 , num_3 , num_4 );
    
    return 0;
}




