class Solution {
public:

    int f;
    int s;

    int ni;

    vector<int> res = vector<int>(2,0);

    

    int bm(int m, int l, int r, int ro) {
        if (l==f&&s==r) {
            res[0] = min(res[0],ro+1);
            res[1] = max(res[1],ro+1);

            return 1;
        }

        int nl = l+1;
        int nr = r-1;

        if (nr>nl) {
            while ((nl<32)&&((m& (1<<nl)))) {
                nl++;
            }

            while ((nr<32&&nr>0)&&((m& (1<<nr)))) {
                nr--;
            }
        }

        int ol = nl;
        int orss = nr;

        if (nr<=nl) {
            ro++;
        }

        if (nr<=nl) {
            nl=1;
            nr=ni;

            while ((nl<32)&&((m& (1<<nl))||nl==l)) {
                nl++;
            }

            while ((nr<32&&nr>0)&&((m& (1<<nr)))) {
                nr--;
            }

            if (nr<=nl) {
                return 0;
            }
        }

        if (l!=f) {
            bm(m | (1<<l),nl,nr,ro);
        }

        

        nl = ol;
        nr = orss;

        if (nr<=nl) {
            nl=1;
            nr=ni;

            while ((nl<32)&&((m& (1<<nl)))) {
                nl++;
            }

            while ((nr<32&&nr>0)&&((m& (1<<nr))||nr==r)) {
                nr--;
            }

            if (nr<=nl) {
                return 0;
            }
        }

        if (r!=s) {
            bm(m | (1<<r),nl,nr,ro);
        }

        

        return 1;

    }

    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {

        res[0] = INT_MAX;
        res[1] = -INT_MAX;
        f = firstPlayer;
        s = secondPlayer;
        ni = n;

        bm(0,1,ni,0);

        return res;
    }
};