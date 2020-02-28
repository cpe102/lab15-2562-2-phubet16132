#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findColSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findColSum(dPtr,result,N,M); 
	showData(result,1,M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *data,int row,int col){
	
	for(int i =0 ;i<(col*row);i++){
		
		double r =rand()%101;
			
		*(data+i)=r/100 ;
			
			
	}
	
	
	
	
	
	
}

void findColSum(const double *data,double *sum,int row ,int col){
	
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			
			*(sum+j)+=*(data+j+i*row);
			
		}
		
	}
	
	
}

void showData(double *data,int row ,int col){
	
	
	for(int i =0 ;i<(col*row);i++){
		cout<<*(data+i)<<"\t";

		if (i%col==col-1 ){
			cout<<endl;		
		}
		
			
		
		
		
	}
	
	
}






