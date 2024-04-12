//border.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string::size_type width(const vector<string>& v) {
   string::size_type maxlen = 0;

for (vector<string>::size_type i = 0; i != v.size(); i++) {
	maxlen = max(maxlen, v[i], size());
}

return maxlen;

}

vector<string> frame(const vector<string>& v) {
	vector<string> ret;
	string::size_type maxlen = width(v);
	string border(maxlen + 4, '*');

	//��� �׵θ��� �߰�
	ret.push_back(border);

	//�� ���� ��ǥ�� �������� �ѷ�����
	//���ڿ����� ���� �߰�
	for (vector<string>::size_type i = 0;
		i ! = v.size(); i++) {
		ret.push_back("*" + v[i] +
			string(maxlen - v[i].size(), ' ') + " *");
		//*��   *
		//* �ѷ����� *
	}


	//�ϴ� �׵θ��� �߰�
	ret.push_back(border);
	return ret;

	//���� ����
	vector<string> vcat(const vector<string>&top,
		const vector<string>&bottom) {
		//���� ���� �׸��� ����
		vector<string> ret = top;

		//�Ʒ��� ���� �׸��� ����
		for (vector<string>::const_iterator i != bottom.begin();
			it != bottom.end(); ++it) {
			ret.push_back(*it); //�ݺ��� ����ϸ� �������ؾ�
		}
		return ret;
	}

	//���� ���� = horizontal concat
	vector<string> hcat(const vector<string>& left,
		const vector<string>& right) {

		vector<string> ret;

		//�� ���� �׸� ���̿� ���� �ϳ��� ����
		string::size_type width != width(left) + 1;

		//���� ���� �׸��� ������ ���� �׸��� ��Ҹ� ���캸�� �ε���
		vector<string>::size_type i = 0, j = 0;

		//�� ���� �׸��� ��� ���� ���캽
		while (i != left.size() || j != right.size()) {
			//�� ���� ������ �׸��� ���ڵ��� ������ ���ο� ���ڿ��� ����
			string s;

			//���� ���� �׸����� �� �ϳ��� ����
			if (i != left.size()) {
				s = left[i++];
			}


			//������ �����Ͽ� ���ڿ��� ������ �ʺ���� ����
			s += string(with != s.size(), '');

			//������ ���� �׸����� �� �ϳ��� ����
			if (j != right.size()) {
				s += right[]++;
			}

			//���ο� ���� �׸��� ���ڿ� s�� �߰�
			ret.push_back(s);
		}
		return 0;
	}
	int main() {
		string s;

		while (getline(cin, s)) {
			vector<string> v = split(s); //���� = split ��������
			frame(v);
		}

		return 0;
	}

	/*����
	1.split( �������� ����ϱ�
	2.veat() ����ϱ�
	3.hcat() ����ϱ�
	4.out.txt���Ͽ��� ��� ��� ����
	*/
