#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxprofit=max(maxprofit,prices[i]-mini);
            

            }
            return maxprofit;
            
        }

int main(){
    vector<int> prices={1,5,3,8,21};
    int profit=maxProfit(prices);
    cout<<profit;

    return 0;
}
    