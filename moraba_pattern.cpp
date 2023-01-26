#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

void Moraba_Pattern( int n ){
   int i, j;
   for( i = 1; i <= n; i++ ) {
      for( j = 1; j <= n; j++ ) {
         if( i == 1 || i == n ) {
            cout<<setw(2)<<"*"<<setw(2);
         } else if( j == 1 || j == n ) {
            cout<<"*"<<setw(2);
         } else {
            cout<<setw(2*(n-1));
         }
      }
      cout << endl;
   }
}

int main(){
   int n;
   cout<<"Andaze Har zel ra vared konid : ";
   cin>>n;
   cout<<endl<<endl;
   Moraba_Pattern(n);
}