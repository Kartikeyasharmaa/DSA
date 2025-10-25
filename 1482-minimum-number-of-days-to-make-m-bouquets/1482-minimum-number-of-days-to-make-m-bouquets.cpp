class Solution {
private:
    int noOfBouquets(vector<int>& bloomDay, int day, int k){
        int cnt = 0;
        int no_of_bouquets = 0;
        
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                no_of_bouquets += cnt / k;
                cnt = 0;
            }
        }
        no_of_bouquets += cnt / k;
        return no_of_bouquets;
    }
    
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int size = bloomDay.size();
        
        // Check if it's possible to make m bouquets
        if(double(size) < (double(m) * k)) return -1;

        int min_day = *min_element(bloomDay.begin(), bloomDay.end());
        int max_day = *max_element(bloomDay.begin(), bloomDay.end());

        int left = min_day;
        int right = max_day;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            
            if(noOfBouquets(bloomDay, mid, k) >= m){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        
        return left;
    }
};