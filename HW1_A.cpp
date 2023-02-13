#include <list>

using namespace std;

int Sum(list<int>nums){
  int rt = 0;
  for(int x : nums){
    rt+=x;
  }
  return rt;
}

int Product(list<int> nums){
  int rt = 1;
  for (int x : nums){
    rt *= x;
  }
  return rt;
}
