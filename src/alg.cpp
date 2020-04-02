int cbinsearch(int *arr, int size, int value) {
	int pfirst=0;
	int plast=size-1;
	int sum=0;
	while (pfirst<=plast){
		int mid=pfirst+(plast-pfirst)/2;
		if (arr[mid]==value){
			sum=sum+1;
			int k=1;
			while ((arr[mid+k])==value) {
				sum=sum+1;
				k++;
			}
			k=1;
			while ((arr[mid-k])==value) {
				sum =sum +1;
				k++;
			}
		}
		if (arr[mid]<value)
			pfirst= mid+1;
		else plast= mid-1;
	}
}
