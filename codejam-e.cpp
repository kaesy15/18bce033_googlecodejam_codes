#include <bits/stdc++.h>



using namespace std;




bool result;
int mat[100][100];
int n, k, t;
bool row_s[100][100], col_s[100][100];






void calc(int row, int col, int m)
 {
            if (row == n && col == n + 1 && m == k && !result) {

                result = true;

                cout << "Case #" << t << ": " << "POSSIBLE\n";

                for (int i = 1; i <= n; ++i) {

                    for (int j = 1; j <= n; ++j) {

                        cout << mat[i][j] << " ";

                    }

                        cout << "\n";

                }
        return;
    }
     else if (row > n)
     {
        return;
    }
    else if (col > n)
        {
        calc(row + 1, 1, m);
    }
    for (int i = 1; i <= n && !result; ++i) {

        if (!row_s[row][i] && !col_s[col][i]) {

            row_s[row][i] = col_s[col][i] = true;

                if (row == col) {
                    m += i;
                }

                mat[row][col] = i;

                calc(row, col + 1, m);

                row_s[row][i] = col_s[col][i] = false;
            if (row == col)
                {
                m -= i;
                }
            mat[row][col] = 0;
        }
    }
}





int main() {
    int T;

    cin>>T;

    for (t = 1; t <= T; ++t) {
        cin>>n>>k;
        calc(1, 1, 0);

        if (!result)
        {

            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";

        }


        result = false;
    }
    return 0;
}
