#include <iostream>
#define len 10

using namespace std;

class test{
private:
  int *ar;

public:
  test();
  void foo();
};

test :: test(){
  int arr[len];
  for (int i =0 ; i < len; i++){
    cin>>arr[i];
  }
  this->ar = arr;
}

void test::foo(){
  for(int i = 0;i<len;i++)
    cout<<this->ar[i]<<endl;
}

int main() {
  test ob;
  ob.foo();
  return 0;
}
