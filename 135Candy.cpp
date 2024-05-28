class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
       // vector<int> count(n,1);
        //for(int i=1;i<n-1;i++
        /*for(int i=1;i<n-1;i++){
            if(ratings[i]>ratings[i-1] && ratings[i]>ratings[i+1]){
                if(ratings[i+1]>ratings[i-1]){
                    if(ratings[i]>ratings[i+1])
                    count[i]+=ratings[i];
                    else
                    count[i]+=ratings[i+1];
                }
                else{
                    if(ratings[i]>ratings[i-1])
                    count[i]+=ratings[i];
                    else
                    count[i]+=ratings[i-1];
                }
            }

        }
        if(ratings[0]>ratings[1]){
            if(ratings[0]>ratings[1])
            count[0]++;
            else
            count[0]=count[1]+1;
        }
         if(ratings[n-1]>ratings[n-2]){
            if(ratings[n-1]>ratings[n-2])
            count[n-1]++;
            else
            count[n-1]=count[n-2]+1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=count[i];
        }
        return sum;*/
        vector<int> vec(ratings.size(),1);

        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                vec[i]=vec[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                vec[i]=max(vec[i+1]+1,vec[i]);
            }
        }
        return accumulate(vec.begin(),vec.end(),0);

    }
};