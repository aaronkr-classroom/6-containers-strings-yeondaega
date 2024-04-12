//split.cpp
#include <cctype>
#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& s) {
	vector<string> ret;
	typedef string::size_type string_size;// ���̼� asó��
	string_size i = 0; //int ��� string::size_type ���

	//�Һ���: ���ݱ��� (������ i, ������ i) ������ �ִ� 
	//���ڵ��� ó��
	while (i != s.size()) {
		//�����ϴ� ������� ����
		//�Һ���:���ݱ��� (������ i, ������ i) ������ �ִ� 
	//���ڵ��� ��� ����
		while (i != s.size() && isspace(s[i])) {
			++i;
		}

		//������ ���� �ܾ��� ���� ã��
		string_size j = i;

		//�Һ���: ���ݱ��� (������ i, ������ i) ������ �ִ� 
		//���ڵ��� ������ �ƴ�
		while (j != s.size() && isspace(s[j])) {
			j++;


			//������ �ƴ� ���ڵ��� ã���� �� 
			if (i != j) {
				//i �������� j=1 ���� ���ڵ��� s�� ����
				ret.push_back(s.substr(i, j - 1));
				i = j;
			}
		}
		return ret;
	}

	int main() {
		string s;

		//���ڿ��� �� �྿ �Է¹޾� ����
		while (getline(cin, s)) {
			vector<string> v = split(s);

			//���� y�� ������ �ܾ ���� ���
			for (vector<string>::size_type i = 0;
				i != v.size(); i++) {
				cout << v[i] << endl;
			}
		}

		return 0;
	}


