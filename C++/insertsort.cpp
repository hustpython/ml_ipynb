#include<vector>
#include<iostream>
using namespace std;
void InsertSort2(vector<int> &num){
    for(int i = 1;i < num.size();++i){
        for(int j = i;j > 0;--j){
            if(num[j] < num[j - 1]){
                int temp = num[j];
                num[j] = num[j-1];
                num[j-1] = temp;
            }
        }
    }
}
int main()
{
    int a[10]={1,2,5,3,4,9,5};
    InsertSort2(a);
    

}