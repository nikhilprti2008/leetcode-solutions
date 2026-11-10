class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int Lsum = 0, Rsum = 0 , Maxsum = 0;
        int size = cardPoints.size();

        for(int i =0; i<k; i++){
            Lsum += cardPoints[i];
            
        }
        Maxsum = Lsum;
        int Rindex = size - 1;

        for(int i = k - 1; i>= 0; i--){
            Lsum = Lsum - cardPoints[i];
            Rsum = Rsum + cardPoints[Rindex];
            Rindex = Rindex - 1;
            Maxsum = max(Maxsum, Lsum + Rsum);
            
      }
      return Maxsum;
        
    }
    
};