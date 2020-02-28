#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()

void randData(double *data,int row,int col){
	
	for(int i =0 ;i<(col*row);i++){
		
		double r =rand()%101;
			
		*(data+i)=r/100 ;
			
			
	}
	
	
	
	
	
	
}

void findRowSum(const double *data,double *sum,int row ,int col){
	
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			
			*(sum+i)+=*(data+j+i*row);
			
		}
		
	}
	
	
}

void showData(double *data,int row ,int col){
	
	
	for(int i =0 ;i<(col*row);i++){
		
		if(i==0){
			cout<<*(data)<<"\t";
		}
		else if (i%col==0 ){
			cout<<endl;
			cout<<*(data+i)<<"\t";
			
			
		}
		
		else if(i%48==0){
			cout<<*(data+i)<<"\t";
			cout<<endl;
		}
		else{
			cout<<*(data+i)<<"\t";
		}
		
		
	}
	
	
}
















