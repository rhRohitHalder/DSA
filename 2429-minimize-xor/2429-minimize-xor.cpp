class Solution {
public:
    bool isSet(int &n , int bit){
    return n & (1 << bit);
    }
    bool setbit(int &n , int bit){
        return n |= (1 << bit);
    }
    bool unsetbit(int &n , int bit){
        return n &= (~(1 << bit));
    }
    int minimizeXor(int num1, int num2) {
        int x = num1;

        int n2setBits = __builtin_popcount(num2);
        int curr_setBits = __builtin_popcount(x);

        int bit = 0 ;//posi of bit

        if(curr_setBits < n2setBits){
            // add set bits to x 
            while( curr_setBits < n2setBits){
                if(!isSet(x,bit)){
                    setbit(x,bit);
                    curr_setBits++;
                }
                bit++;
            }
        }
        else if(curr_setBits > n2setBits){
            while(curr_setBits > n2setBits){
                if(isSet(x,bit)){
                    unsetbit(x,bit);
                    curr_setBits--;
                }
                bit++;
            }
        }
        return x;
    }
};