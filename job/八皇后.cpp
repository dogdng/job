#include <iostream>
#include <vector>

using namespace std;

class EightQueen {
public:
	EightQueen(int nQueen) {
		this->nQueen = nQueen;
		inColumn.resize(nQueen, false);
		mainDiagonal.resize(2 * nQueen - 1, false);
		minorDiagonal.resize(2 * nQueen - 1, false);
	}
	~EightQueen() {}
	int process() {
		int *path = new int[nQueen];
		calculate(path, 0);
		delete[] path;
		return 0;
	}
	void calculate(int *path, int row) {
		if (row == nQueen) {
			solution.push_back(vector<int>(path, path + nQueen));
			return;
		}
		for (int col = 0; col < nQueen; col++) {
			if (canLay(row, col)) {//当前位置可放置
				path[row] = col;
				inColumn[col] = true;//当前皇后所在列
				minorDiagonal[row + col] = true;//皇后所在位置的横纵坐标之和对应的次对角线
				mainDiagonal[nQueen - 1 + row - col] = true;//皇后所在位置的横纵坐标之和对应的主对角线
				calculate(path, row + 1);//下一列上的皇后
				inColumn[col] = false;
				minorDiagonal[row + col] = false;
				mainDiagonal[nQueen - 1 + row - col] = false;
			}
		}
	}
	bool canLay(int row, int col) {
		return !inColumn[col] && !minorDiagonal[row + col] && !mainDiagonal[nQueen - 1 + row - col];
	}
	void print() {
		for (int i = 0; i < solution.size(); i++) {
			cout << "solution " << i << " : " << endl;
			for (int row = 0; row < nQueen; row++) {
				for (int col = 0; col < solution[i][row]; col++) {
					cout << "O ";
				}
				cout << "X ";
				for (int col = solution[i][row] + 1; col < nQueen; col++) {
					cout << "O ";
				}
				cout << endl;
			}
			cout << endl << endl;
		}
	}
private:
	int nQueen;
	vector<bool> inColumn;
	vector<bool> mainDiagonal;
	vector<bool> minorDiagonal;
	vector<vector<int> > solution;
};

int main()
{
	EightQueen queen(8);
	queen.process();
	queen.print();
	return 0;
}