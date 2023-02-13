#include <list>
#include <iostream>

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

list<int> Reversed(list<int> nums){
  nums.reverse();
  return nums;
}

int main()
{
    list<int>nums;
    int num;
    while (cin >> num){
        nums.push_back(num);
    }
    cout << "Sum of nums      : " << Sum(nums) << endl;
    cout << "Product of nums  : " << Product(nums) << endl;
    return 0;
}
