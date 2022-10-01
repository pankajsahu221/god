//program for roman to int in cpp

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V'] = 5;
        mp['X'] =10;
        mp['L'] =50;
        mp['C'] =100;
        mp['D'] =500;
        mp['M'] =1000;
        return tot;
    }
};

/* More efficient solution
int romanToInt(string s) 
{
    unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
   A demo code for hacktoberfest                               
   int sum = T[s.back()];
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (T[s[i]] < T[s[i + 1]])
       {
           sum -= T[s[i]];
       }
   }
   
   return sum;
}
*/
