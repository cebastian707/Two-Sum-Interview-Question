//BY::CEBASTIAN SANTIAGO 
//::SUM INTERVIEW QUESTION
#include<iostream>
#include<vector>


using namespace std;
//FUNCTION SUM GIVEN INDEX ARRAY AND TARGET
vector<int> sum(vector<int>& arr, int target);

int main() {
    //VECTORS
    vector<int> nums = {3,2,3};
    vector<int> two = sum(nums,6);
    //DISPLAY VECTORS
    for (int i = 0; i < two.size(); i++) {
        cout << two[i] << " ";
    }




    return 0;
}




vector<int> sum(vector<int>& arr, int target) {
    //VECTOR AND VARIABLES
    vector<int> nums;
    int low = 0;
    int high = arr.size() - 1;
    int i = 1;
    int j = 1;
    //BEGIN OF VECTOR AND END OF VECTOR INDEX
    while (low <= high) {
        
        //GRAB THE FIRST ELEMENT  AND  SECOND ELEMENT COMPARE IT 
        //TO THE  TARGET
        //IF MATCHES INSERT INDEXS INTO 
        //VECTOR AND RETURN IT
        if (arr[low] + arr[i] == target) {
            nums.push_back(low);
            nums.push_back(i);
            return nums;
            break;
        }

        //WHEN WE REACH THE END OF THE VECTOR
        //LETS RESET I AND INCREMENT LOW TO KEEP 
        //CHECKING FOR THE MATCH 
        else if (i == high) {
            low++;
            i = j;
            j++;
        }

        //INCREMENT SECOND ELEMENT TILL WE REACH THE END OF 
        //VECTOR
        i++;

    }
    //RETURN VECTOR
    return nums;
}
