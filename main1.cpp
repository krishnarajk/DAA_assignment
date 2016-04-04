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
	cout<<" result='[[\"Batch Length\",\"bubble_sort\",\"selection_sort\",\"quick sort\"] "	;
	for(int i=1000;i<10000;i+=500){
		int array[i];
		long int stime,etime,time_sel,time_bub,time_quk;
		struct timeval tp;

		for(int j=0; j<i; j++){ 
	        array[j] = (rand()%100)+1; 
	         
	    //    cout << array[i] << endl;
	 	} 
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	bubble_sort(array,i);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	time_bub=etime-stime;
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	selection_sort(array,i);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	time_sel=etime-stime;
	 	gettimeofday(&tp, NULL);
	 	stime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	quick(array,0,i-1);
	 	gettimeofday(&tp, NULL);
	 	etime=tp.tv_sec * 1000 + tp.tv_usec / 1000;
	 	time_quk=etime-stime;
	 	cout<<",["<<i<<","<<time_bub<<","<<time_sel<<","<<time_quk<<"]";
	}
	cout<<"]';";
}