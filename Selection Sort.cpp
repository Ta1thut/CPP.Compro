//������§������� Arrray
#include <iostream>
using namespace std;
// �ѧ��ѹ���������Ѻ������§�ӴѺ�����Ըա�� selection sort ����������
void selectionSort(int arr[], int size) {
	int p = 0;
    for (int i = 0; i < size - 1; i++) {
        // ���Ҥ�ҹ����ش���ǹ�ͧ�����������ѧ���١���§
        int minIndex = i;
   
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[minIndex]) {
                minIndex = j;
            }
        }
        // ��Ѻ��ҹ����ش��辺�Ѻͧ���á���ǹ����ѧ���١���§
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
    // ���¡��ѧ��ѹ selectionSort �������§�ӴѺ��������
    selectionSort(arr, size);

    cout << "Array after sorting: ";
    for (int i = 0; i < size; i++) {
         cout << arr[i] << " ";

    }

    return 0;
}