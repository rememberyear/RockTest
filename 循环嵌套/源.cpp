#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

// һ�����Ҽ��Σ�
// 24Сʱ��ÿ��һ��
int main(void) {
	int count = 0;

	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				count++;
				cout << i << ":" << j << ":" << k
					<< " �����" << count << "��" << endl;
				Sleep(100);
			}
		}
	}

	cout << "һ������" << count << "��" << endl;

	system("pause");
	return 0;
}
