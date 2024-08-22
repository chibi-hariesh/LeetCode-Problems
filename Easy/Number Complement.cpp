//https://leetcode.com/problems/number-complement/description/?envType=daily-question&envId=2024-08-22

class Solution {
public:
    int findComplement(int num) {
       
        unsigned int mask = ~0; 
        while (num & mask) {
            mask <<= 1;
        }
        return ~num & ~mask;
    }
};


