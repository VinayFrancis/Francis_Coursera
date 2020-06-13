#include <stdio.h>
#include "stats.h"
#define SIZE (40)

int a,b,c,d;

void main() {


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};



     a = avg1(test,SIZE);
     b = med(test,SIZE);
     c = max(test,SIZE);
     d = min(test,SIZE);
     printstats();
     srtarr(test,SIZE);
     printarr(test,SIZE);


}

void printstats(){

    	printf("Average =%d",a);

    	printf("\nMedian = %d", b);

    	printf("\nMaximum = %d", c);

    	printf("\nMinimum = %d",d);

}

int avg1(unsigned char *p,int size){
	int sum = 0;
	int average;

	for(int i =0;i<size;i++){
		sum +=*p;
		p++;
	}
	average = sum/size;
	return average;
}

int med(unsigned char *p,int size){
	int ipos;
	int fpos;
	int median;
	int i;
	if(size%2==0){
		int s=0;
		ipos =size/2;
	  fpos =ipos +1;
	  for(i =1;i<fpos+1;i++){
	    	if(i==ipos){
	    		s += *p;
			    p++;
		    }
		    else if(i==fpos){
		    	s += *p;
			    p++;
		    }
		    else{
		    	p++;
		    }
    }
	    median = s/2;
	    return median;
  }
	else{
		ipos= (size+1)/2;
		for(i = 1; i<=ipos;i++){
			if(i==ipos){
				median =*p;
			}
			p++;
		}
		return median;
	}
}

int max(unsigned char *p, int size){
	int max = 0;
	for(int i =0;i<size;i++){
		if(max==0){
			max = *p;
			p++;
		}
		else if ((*p)>max){
			max =*p;
			p++;
		}
		else{
			p++;
		}
	}
	return max;
}

int min(unsigned char *p, int size){
	int min = 0;
	for(int i =0;i<size;i++){
		if(min==0){
			min = *p;

		}
		else if ((*p)<min){
			min=*p;

		}
		p++;
	}
	return min;
}

void srtarr(unsigned char *s,int size){
	int temp;
	unsigned char *p;
	for(int a =0;a<size-1;a++){
		p=s;
		for (int i =0 ; i<size-a-1; i++){
			if(*p<*(p+1)){
				temp = *p;
			    *p = (*(p+1));
			    *(p+1)=temp;

		    }
		    p++;
	    }

	}

}
void printarr(unsigned char *p,int size){
	printf("\n");
  printf("Sorted Array\n");
  printf("\t");
	for (int i =0;i<size;i++){
		printf("%d\t",*p);
		p++;

	}
}
