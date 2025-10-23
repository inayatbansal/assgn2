// part a

#include <iostream>
using namespace std;

int main() {
    int mat[4][4]={{0,0,3,0},{0,0,5,7},{0,0,0,0},{0,2,6,0}};
    int rows=4,cols=4;
    int trip[10][3];
    int k=1;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(mat[i][j]!=0) {
                trip[k][0]=i;
                trip[k][1]=j;
                trip[k][2]=mat[i][j];
                k++;
            }
    trip[0][0]=rows; trip[0][1]=cols; trip[0][2]=k-1;
    for(int i=0;i<k;i++) cout<<trip[i][0]<<" "<<trip[i][1]<<" "<<trip[i][2]<<endl;
    cout<<"Transpose:"<<endl;
    for(int i=0;i<k;i++) cout<<trip[i][1]<<" "<<trip[i][0]<<" "<<trip[i][2]<<endl;
    return 0;
}


// part b


int main() {
    int A[3][3]={{1,0,0},{0,2,0},{0,0,3}};
    int B[3][3]={{0,4,0},{0,0,5},{6,0,0}};
    int C[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// part c

int main() {
    int A[3][3]={{1,0,0},{0,2,0},{0,0,3}};
    int B[3][3]={{0,4,0},{0,0,5},{6,0,0}};
    int C[3][3]={0};
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) C[i][j]+=A[i][k]*B[k][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
