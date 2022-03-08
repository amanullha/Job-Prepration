class Solution{
public:

	void rearrange(int arr[], int n) {
	    // O(N) and space(N)
	    vector<int>p,n;
	   for(int i=0;i<N;i++)
	   {
	       if(arr[i]<0)n.push_back(arr[i]);
	       else p.push_back(arr[i]);
	   }
	   
	   int i=0,j=0,k=0;
	   
	   while(k<N)
	   {
	       if(i<p.size())arr[k++]=p[i++];
	       if(j<n.size())arr[k++]=n[j++];
	   }
	   
	   
	   
	}
	    
	  // O(N) and space(1)
	   // code 
	    
	   // int pivot=0,j=-1;
	   // while(pivot<n)
	   // {
	   //     if(arr[pivot]<0){
	   //         swap(arr[pivot],arr[++j]);
	   //     }
	   //     pivot++;
	   // }
	    
	   // int neg=0;
	   // j++;
	   // while(neg<j )
	   // {
	   //     swap(arr[neg],arr[j]);
	        
	   //     j++;
	   //     neg+=2;
	   // }
	}
};
