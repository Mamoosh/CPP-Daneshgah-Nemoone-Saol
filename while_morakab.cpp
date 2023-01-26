#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

void morakabat(int n){
    int sum = 0;
    int i = 1;
    while(i<=n){
        int Morakab = i*i*i;
        sum = Morakab + sum;
        if(i<n)cout<<Morakab<<" + ";
        else cout<<Morakab<<" = "<<sum;
        
        i += 1;
    }
}

int main(){
   int n;
   cout<<"Adad ra vared konid : ";
   cin>>n;
   morakabat(n);
}