#include<iostream>
#include<cstdlib>
#include<sys/time.h>
#include<ctime>
#include<algorithm>
#include "bubble.h"
#include "selection.h"
#include "quick.h"
using namespace std;

int main(){
	for(int i=1000;i<6000;i+=1000){
		int array[i];
		long int stime,etime;
		struct timeval tp;

		for(int j=0; j<i; j++){ 
	        array[j] = (rand()%100)+1; 
	         
	    //    cout << array[i] << endl;
	 	} 
	 	cout<<endl<<"Number of elements is "<<i<<endl;
	 	cout<<"------------------------"<<endl;
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	bubble_sort(array,i);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	cout<<"Time for bubble sort :"<<etime-stime<<"ms"<<endl;
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	selection_sort(array,i);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	cout<<"Time for selection sort :"<<etime-stime<<"ms"<<endl;
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	quick(array,0,i-1);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	cout<<"Time for quick sort :"<<etime-stime<<"ms"<<endl;
 	}
}