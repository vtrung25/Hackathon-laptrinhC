#include<stdio.h>
int main(){
	int choice;
	int n; 
	int arr[100];
	int value;
	int index1=1;
	int index2;
	int search;
	int temp, left, right, mid;
	int position=-1;
	int sum , count;
	int min,imin;
	do{
	
	printf("                    MENU\n");
	printf("1.Nhap so phan tu va gia tri cua mang\n");
	printf("2.In ra cac phan tu trong mang theo dang (arr[0]=1, arr[1]=5,...)\n");
	printf("3.Dem so luong cac so hoan hao co trong mang\n");
	printf("4.Tim gia tri nho thu 2 trong mang\n");
	printf("5.Them mot phan tu vao vi tri dau tien trong mang\n");
	printf("6.Xoa phan tu tai vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Tim kiem phan tu co ton tai trong mang hay khong\n");
	printf("9.Sap xep mang sao cho so le dung truoc so chan dung sau\n");
	printf("10.Dao nguoc thu tu phan tu co trong mang va hien thi theo dang (arr[0]=1-le, arr[1]=2-chan,...)\n");
	printf("11.Thoat\n");
	printf("Moi ban lua chon chuc nang ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Nhap so luong phan tu ");
			scanf("%d", &n);
			for(int i = 0; i<n; i++){
				printf("Nhap gia tri cua phan tu thu %d ", i+1);
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for(int i = 0; i<n; i++){
				printf("arr[%d] = %d\n", i, arr[i]);
			}
			printf("\n");
			break;
		case 3:
		sum = 0;
		for(int i = 0; i<n; i++){
			for(int j = 1;j<=arr[i]/2;j++){
				if(arr[i]%j==0){
					sum+=j;
				}
			}
			if(sum==arr[i]){
				count++;
			}
		}
		printf("So luong so hoan hao co trong mang la %d ", count);
		    break;
		case 4:
			for(int i = 0;i<n;i++){
				if(min<arr[i]){
					min = arr[i];
				}
			}
			for(int i =0; i<n; i++){
				if(imin<arr[i]&&arr[0]!=min){
					imin=arr[i];
				}
			}
		    break;
		case 5:
			printf("Nhap gia tri can them vao vi tri dau tien trong mang ");
			scanf("%d", &value);
			for(int i = n; i>=index1; i--){
				arr[i]=arr[i-1];
			}
			arr[index1-1]=value;
			n++;
			for(int i = 0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			
			
		
			break;
		case 6:
		printf("Nhap vi tri phan tu muon xoa ");
		scanf("%d", &index2);
		if(index2<0 || index2>n+1){
			printf("Khong co vi tri nay trong mang");
		}else{
			for(int i = index2 - 1; i<n; i++ ){
				arr[i]=arr[i+1];
			}
			n--;
		}
		for(int i = 0; i<n; i++){
		printf("%d\t", arr[i]);
	}
			break;
		case 7:
		for(int i=0;i<n;i++){
		              int minIndex =i;
		              for(int j=i;j<n;j++){
			            if(arr[j]>arr[minIndex]){
				           minIndex = j;
			    }
		        }
		        if(minIndex!=i){
			      int temp;
			      temp = arr[minIndex];
			      arr[minIndex]=arr[i];
			      arr[i]=temp;
		        }
	            }
				
				


			break;
		case 8:
		for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Mang duoc sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("Tim kiem : ");
    scanf("%d", &search);
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == search) {
            position = mid;  
            break;
        }
        if (arr[mid] > search) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", search, position + 1);
    } else {
        printf("Phan tu %d khong ton tai trong mang \n", search);
    }
			break;
		case 9:
		
			break;
		case 10:
			
			break;
		default:
			printf("Lua chon khong hop le");
		
	}
}while(choice!=11);
	
	return 0;
}
