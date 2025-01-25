#include<bits/stdc++.h>
using namespace std;

//  return true if key is present in the matrix
// bool linearSearch(int mat[3][4],int rows,int col,int key){

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (mat[i][j]==key)
//             {
//                 return true;
//             }
            
//         }
        
//     }
//     return false;
// }

// returning a pair of index
pair<int,int> linearSearch(int mat[][4],int row,int col,int key){
    pair<int,int>p;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j]==key)
            {
                p.first=i;
                p.second=j;

            }else{
                p.first=-1;
                p.second=-1;

            }
            
        }
        
    }
    
    return p;
}


int main(){
    int matrix[3][4]={{1,2,3,11},{4,5,6,12},{7,8,9,13}};
    int row=3;
    int col=4;
    int n=13;

    // cout<<linearSearch(matrix,row,col,n);

    pair<int,int>ans=linearSearch(matrix,row,col,n);
    cout <<"{"<< ans.first << " " << ans.second <<"}" <<endl;

    return 0;
}