//การเรียงข้อมูลใน Arrray
#include <iostream>
using namespace std;
// ฟังก์ชันที่ใช้สำหรับการเรียงลำดับด้วยวิธีการ selection sort บนอาร์เรย์
void selectionSort(int arr[], int size) {
	int p = 0;
    for (int i = 0; i < size - 1; i++) {
        // ค้นหาค่าน้อยสุดในส่วนของอาร์เรย์ที่ยังไม่ถูกเรียง
        int minIndex = i;
   
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[minIndex]) {
                minIndex = j;
            }
        }
        // สลับค่าน้อยสุดที่พบกับองค์แรกในส่วนที่ยังไม่ถูกเรียง
        int temp = arr[i];  
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
		cout << "Round : " << i + 1 << "  : ";
		for(p = 0; p < size; p++){
			cout << arr[p] << " "; 
		}
		cout << endl;

    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};  
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting : ";
    for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";
    }
    cout<<"\nSize of array : "<< size <<endl;
    // เรียกใช้ฟังก์ชัน selectionSort เพื่อเรียงลำดับอาร์เรย์
    selectionSort(arr, size);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";

    }

    return 0;
}