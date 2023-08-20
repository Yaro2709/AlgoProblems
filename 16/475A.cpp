#include<iostream>

using namespace std;

char output[6][30]
= {
"+------------------------+",
"|#.#.#.#.#.#.#.#.#.#.#.|D|)",
"|#.#.#.#.#.#.#.#.#.#.#.|.|",
"|#.......................|",
"|#.#.#.#.#.#.#.#.#.#.#.|.|)",
"+------------------------+"
};

int k;

int main() {
	int i, j;
	cin >> k;

	for (i = 0; i < 11; i++) {
		for (j = 0; j < 4; j++) {
			if (i >= 1 && j == 2)
				continue;
			if (k == 0)
				break;
			output[j + 1][2 * i + 1] = 'O';
			k--;
		}
		if (j < 4)
			break;
	}

	for (i = 0; i < 6; i++) {
		cout << output[i] << endl;
	}

	return 0;
}