#include <iostream>
#include<conio.h>
using namespace std;


int SahihMosbatBoodan(int num) {
  while(true){
      if(num>=0){
          break;
      }
      else{
          cout<<"Enter a Positive number please ! :";
          cin>>num;
      }
  }
  return num;
}

int funbmm(int n1,int n2){
    int temp, r = 1, min , max;
    max=n1;
    min=n2;
    while(r!=0)
    {
        r=(max%min);
        max=min;
        min=r;
    }
    return max;
}

int funkmm(int n1,int n2){
  int max;

    if(n1 > n2) max = n1;
    else max = n2;
    
    while(true){
        
        if(max % n1 == 0 && max % n2 == 0) break;
        else ++max;
    }
    return max;
}


int main() {
  int num_1, num_2 , bemimmim , kemimmim;
  cout << "Type a Positive Number: ";
  cin >> num_1;
  num_1 = SahihMosbatBoodan(num_1);
  cout << "Type a Positive Number Again: ";
  cin >> num_2;
  num_2 = SahihMosbatBoodan(num_2);


  
  if(num_1 == 0 || num_2 == 0)
  {
      cout << "Really ? bemimmim va kemimmim ba 0 ? Nemishe!!";
  }
  else
  {
      bemimmim = funbmm(num_1,num_2);
      kemimmim = funkmm(num_1,num_2);
      cout << "B.M.M n1 va n2 = " << bemimmim << endl;
      cout << "K.M.M n1 va n2 = " << kemimmim;
  }
  return 0;
}