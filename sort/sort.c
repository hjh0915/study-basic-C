#include <stdio.h>
void bubble_sort(int a[], int n);
void select_sort(int a[], int n);
void insert_sort(int a[], int n);
void quick_sort(int a[], int low, int high);
void shell_sort(int a[], int n);

int main() {
    int a[] = {49, 38, 65, 97, 76, 13, 27};
	int n = sizeof(a) / sizeof(a[0]);	//数组元素个数

	// bubble_sort(a, n);
	// select_sort(a, n);
	// quick_sort(a, 0, n-1);
	shell_sort(a, n);

	int i = 0;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}

void bubble_sort(int a[], int n) {
	/*
	通过两层循环，相邻两个数进行比较，将较大的数向后移动。第一轮循环选出最大值，第二轮选出次大值，依此类推。
	因较大值不断向后移动，类似于冒泡泡，故称「冒泡排序」。
	*/

	int i, j, k;
	for(i=0; i<n-1; i++) {
		for(j=0; j<n-1-i; j++) {
			if(a[j] > a[j+1]) {
				int k = a[j];
				a[j] = a[j+1];
				a[j+1]=k;
            }
		}
    }
}

void select_sort(int a[], int n) {
	/*
	从第一个数据开始，依次选择出来与之后的数据依次比较，若小于后面的数据，则交换两者值，再继续进行比较。
	以为过程中依次选择数据，故称「选择排序」。
	*/
	int i, j, k, t;
	for(i=0; i<n-1; i++) {
		k = i;
		for(j=i+1; j<n; j++) {
			if(a[j] < a[k]) {
				k = j;
			}
		}
		if(k != i) {
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
}


void insert_sort(int a[], int n) {
	/*
	从数组中第二位开始，每次循环将待排序的元素插入到比他大的元素上一位，依次循环，直到将数据全部排序。
	以为是将待排序元素插入到已排序序列中去，故称「插入排序」。
	*/
	int i, j, temp;
	for(i=1; i<n; i++) {
		temp = a[i];
		for(j=i-1; j>=0 && a[j]>temp; j--) {
			a[j+1] = a[j];	//将前面的值往后移，后移一位
		}
		a[j+1] = temp; 		//插在a[j]的后面
	}
}

void shell_sort(int a[], int n) {
	/*
	希尔排序是特殊的插入排序，直接插入排序每次插入前的遍历步长为1，
	初始步长（两个子序列相应元素相差的距离）为要排的数的一半，之后每执行一次步长折半。
	*/
	int i, j, flag, temp;
	int gap = n;
 
	while(gap > 1) {
		gap = gap/2; 	//增量缩小，每次减半(折半)
		do {
			flag = 0;
			
			//n-gap是控制上限不让越界
			for(i = 0; i < n-gap; i++) {
				j = i + gap; 		//相邻间隔的前后值进行比较
				if(a[i] > a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					
					flag = 1;
				}
			}
			
		} while(flag != 0);
	}
}
 

void quick_sort(int a[], int low, int high) {
	/*
	在待排序的数据中，取第一个数为基准值，将小于等于和大于该基准值的数据分为两组,
	再不断对分出的这两组分别排序（需要使用到递归算法或是单独写一个函数），直到每组只剩一个数据。
	快速排序相当于是冒泡排序的一个升级，将原本从一端开始的排序优化为两侧同时进行，
	在数据量巨大时能显著提升运行速度，故称为「快速排序」。
	*/
	if(low < high) {
		int pos = find_pos(a, low, high);
		quick_sort(a, low, pos-1);
		quick_sort(a, pos+1, high);
	}
}

//查找位置
int find_pos(int a[], int low, int high) {
	//low：第一个元素下标
	//high：最后一个元素下标

	int val = a[low];
	
	while(low < high) {
		while(low<high && a[high]>=val) {		//大于移动，小于则赋值，降序则相反
			high--;
		}
		a[low] = a[high];
		
		while(low<high && a[low]<=val) {		//小于移动，大于则赋值，降序则相反
			low++;
		}
		a[high] = a[low];
	}	//终止while循环之后low和high一定是相等的
	
	//high可以改为low
	a[low] = val;
	
	return low;
}