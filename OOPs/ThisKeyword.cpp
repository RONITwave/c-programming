// #include<iostream>
// using namespace std;
// class cricketer{
// public:
//     string name;
//     int runs;
//     cricketer(string name, int runs){
//         this->name = name;
//         this->runs = runs; 
//     }
// };
// int main(){ 
//     cricketer c1("Virat",25000);
//     cricketer c2("Rohit sharma",16000);

//     cout<<"Name of the player is : "<<c1.name<<"\nAnd the score is : " <<" "<<c1.runs<<endl;
//     cout<<"\nName of the player is : "<<c2.name<<"\nAnd the score is : "<<" "<<c2.runs<<endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution{
// public:
//     vector<int> twoSum(vector<int>& nums , int target)
//     {
//         int n = nums.size();
//         for(int i = 0 ; i < n; i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 if(nums[i]+nums[j] == target)
//                 {
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };
// int main()
// {
//     Solution S;
//     vector<int> arr = {0,1,2,3,4,5,6};
//     vector<int> result = S.twoSum(arr,6);
//     if(result.size() == 2)
//     {
//         cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;
//     }
//     else
//         cout<<"No Pair Found"<<endl;
//         return 0;
// }