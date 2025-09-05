class Solution {
  public:
    int binaryToDecimal(string &b) {
      int decimal=0;
      for(int digit:b)
      {
          decimal=decimal*2+(digit-'0');
      }
      return decimal;
    }
};
