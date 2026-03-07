/* min and mix in an array ;
  https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/0
  */
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n = arr.size();
        int min=arr[0],max =arr[0];
       for(int i =0;i<n;i++){
           if(arr[i]>max){
               max=arr[i];
               
           }
           if(arr[i]<min){
               min =arr[i];
           }
        
        }
        return{min,max};
        
    }
};