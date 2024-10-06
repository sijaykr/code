#include <stdio.h>

int main(){
	int num,nums[200005],l,largest=0,k;
	
	scanf("%d", &num); 
	 for(int i=0;i<num;i++){
scanf("%d",nums[i]);
	 }     
	  for(int i=0;i<num;i++){
		l=1; 
		for(int j=i+1;j<num;j++){
			if (nums[i]==nums[j]){
				l++;}
				largest=max(largest,l);
				if(largest>=l)k=i;
			
		}


	 }         	                  // Reading input from STDIN
	printf("Input number is %d.\n", nums[k]);       // Writing output to STDOUT
}
