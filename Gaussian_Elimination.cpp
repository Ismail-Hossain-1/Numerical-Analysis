#include <bits/stdc++.h>
using namespace std;


int main(){

        float mat[3][4], ans[3], ratio=0;

        //After converting the given function to linear system with the given values,
        // we make augmented matrix from the system
        cout<<"Enter the matrix:\n";
        for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                cin >> mat[i][j];
            }
        }

        for(int i=0; i<2; i++){
            if(mat[i][i]=0){
                cout<<"Can't calculate with the matrix\n";
                break;
            }
            for(int j=i+1; j<3; j++){
                ratio = mat[j][i]/mat[i][i];

                for(int k=0; k<4; k++){

                    mat[j][k]=mat[j][k]-ratio*mat[i][k];
                }
            }
            ans[2]=mat[2][3]/mat[2][2];
            for(int i=1; i>=0; i--){
                ans[i]=mat[i][3];
                for(int j=i+1; j<=3; j++){
                    ans[i]=ans[i]-mat[i][j]*ans[j];
                }
                ans[i]=ans[i]/mat[i][i];
            }

            float velocity=ans[0]*6*6+ans[1]*6+ans[2];
            cout<<" velocity at t=6 :"<<velocity<<endl;
        }


}
