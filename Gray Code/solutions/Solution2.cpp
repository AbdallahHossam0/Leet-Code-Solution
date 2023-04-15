class Solution {
public:
vector<int> grayCode(int n)
{

  vector<int> x(1 << n, 0);
  x[1] = 1;
  for(int i{2}; i < (1 << n); ++i){
    x[i] = i ^ (i >> 1);
  }
  return x;
}
};