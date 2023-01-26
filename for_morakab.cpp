#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

void morakabat(int n){
    int sum = 0;
    for(int i = 1 ; i<=n ; i += 1){
        int Morakab = i*i*i;
        sum = Morakab + sum;
        if(i<n)cout<<Morakab<<" + ";
        else cout<<Morakab<<" = "<<sum;
        
        }
}

int main(){
   int n;
   cout<<"Adad ra vared konid : ";
   cin>>n;
   morakabat(n);
}