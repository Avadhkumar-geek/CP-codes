import static java.lang.System.out;

import java.util.*;
import java.io.*;

public class B {

    // ============================ CODE STARTS HERE ============================

    public static void main(String[] args) throws Exception {
        FastScanner in = new FastScanner();
        int T = in.nextInt();
        while (T-- > 0) {
            int n = in.nextInt();
            long k = in.nextLong();
            long b = in.nextLong();
            long s = in.nextLong();
            solve(n, k, b, s);
        }
    }

    static void solve(int n, long k, long b, long s) {
        long[] ans = new long[n];

        if (s < k * b || s > k * b + (n * (k - 1))) {
            out.println(-1);
            return;
        } else {
            ans[0] = k * b;
            s -= k * b;
            if (s > 0) {
                ans[0] += Math.min(s, k - 1);
                s -= ans[0];
            }
            for (int i = 1; i < n; i++) {
                if (s > 0) {
                    ans[i] = Math.min(s, k - 1);
                    s -= ans[i];
                } else {
                    ans[i] = 0;
                }
            }
        }

        for (long i : ans) {
            out.print(i + " ");
        }
        out.println();
    }

    // ============================ CODE ENDS HERE ============================

    public static int[] readArr(int N, BufferedReader infile, StringTokenizer st) throws Exception {
        int[] arr = new int[N];
        st = new StringTokenizer(infile.readLine());
        for (int i = 0; i < N; i++)
            arr[i] = Integer.parseInt(st.nextToken());
        return arr;
    }

    public static void printArr(int[] arr) {
        for (int x : arr)
            out.print(x + " ");
        out.println();
    }

    public static long[] readArr2(int N, BufferedReader infile, StringTokenizer st) throws Exception {
        long[] arr = new long[N];
        st = new StringTokenizer(infile.readLine());
        for (int i = 0; i < N; i++)
            arr[i] = Long.parseLong(st.nextToken());
        return arr;
    }

    public static boolean isPrime(long n) {
        if (n < 2)
            return false;
        if (n == 2 || n == 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        long sqrtN = (long) Math.sqrt(n) + 1;
        for (long i = 6L; i <= sqrtN; i += 6) {
            if (n % (i - 1) == 0 || n % (i + 1) == 0)
                return false;
        }
        return true;
    }

    public static long gcd(long a, long b) {
        if (a > b)
            a = (a + b) - (b = a);
        if (a == 0L)
            return b;
        return gcd(b % a, a);
    }

    public static void sort(int[] arr) {
        ArrayList<Integer> ls = new ArrayList<Integer>();
        for (int x : arr)
            ls.add(x);
        Collections.sort(ls);
        for (int i = 0; i < arr.length; i++)
            arr[i] = ls.get(i);
    }

    public static long power(long x, long y, long p) {
        long res = 1L;
        x = x % p;
        while (y > 0) {
            if ((y & 1) == 1)
                res = (res * x) % p;
            y >>= 1;
            x = (x * x) % p;
        }
        return res;
    }

    public static void push(HashMap<Integer, Integer> map, int k, int v) {
        if (!map.containsKey(k))
            map.put(k, v);
        else
            map.put(k, map.get(k) + v);
    }

    public static void pull(HashMap<Integer, Integer> map, int k, int v) {
        int lol = map.get(k);
        if (lol == v)
            map.remove(k);
        else
            map.put(k, lol - v);
    }

    public static long[][] multiply(long[][] left, long[][] right) {
        long MOD = 1000000007L;
        int N = left.length;
        int M = right[0].length;
        long[][] res = new long[N][M];
        for (int a = 0; a < N; a++)
            for (int b = 0; b < M; b++)
                for (int c = 0; c < left[0].length; c++) {
                    res[a][b] += (left[a][c] * right[c][b]) % MOD;
                    if (res[a][b] >= MOD)
                        res[a][b] -= MOD;
                }
        return res;
    }

    public static long[][] power(long[][] grid, long pow) {
        long[][] res = new long[grid.length][grid[0].length];
        for (int i = 0; i < res.length; i++)
            res[i][i] = 1L;
        long[][] curr = grid.clone();
        while (pow > 0) {
            if ((pow & 1L) == 1L)
                res = multiply(curr, res);
            pow >>= 1;
            curr = multiply(curr, curr);
        }
        return res;
    }

    static class FastScanner {
        private int BS = 1 << 16;
        private char NC = (char) 0;
        private byte[] buf = new byte[BS];
        private int bId = 0, size = 0;
        private char c = NC;
        private double cnt = 1;
        private BufferedInputStream in;

        public FastScanner() {
            in = new BufferedInputStream(System.in, BS);
        }

        public FastScanner(String s) {
            try {
                in = new BufferedInputStream(new FileInputStream(new File(s)), BS);
            } catch (Exception e) {
                in = new BufferedInputStream(System.in, BS);
            }
        }

        private char getChar() {
            while (bId == size) {
                try {
                    size = in.read(buf);
                } catch (Exception e) {
                    return NC;
                }
                if (size == -1)
                    return NC;
                bId = 0;
            }
            return (char) buf[bId++];
        }

        public int nextInt() {
            return (int) nextLong();
        }

        public int[] nextInts(int N) {
            int[] res = new int[N];
            for (int i = 0; i < N; i++) {
                res[i] = (int) nextLong();
            }
            return res;
        }

        public long[] nextLongs(int N) {
            long[] res = new long[N];
            for (int i = 0; i < N; i++) {
                res[i] = nextLong();
            }
            return res;
        }

        public long nextLong() {
            cnt = 1;
            boolean neg = false;
            if (c == NC)
                c = getChar();
            for (; (c < '0' || c > '9'); c = getChar()) {
                if (c == '-')
                    neg = true;
            }
            long res = 0;
            for (; c >= '0' && c <= '9'; c = getChar()) {
                res = (res << 3) + (res << 1) + c - '0';
                cnt *= 10;
            }
            return neg ? -res : res;
        }

        public double nextDouble() {
            double cur = nextLong();
            return c != '.' ? cur : cur + nextLong() / cnt;
        }

        public double[] nextDoubles(int N) {
            double[] res = new double[N];
            for (int i = 0; i < N; i++) {
                res[i] = nextDouble();
            }
            return res;
        }

        public String next() {
            StringBuilder res = new StringBuilder();
            while (c <= 32)
                c = getChar();
            while (c > 32) {
                res.append(c);
                c = getChar();
            }
            return res.toString();
        }

        public String nextLine() {
            StringBuilder res = new StringBuilder();
            while (c <= 32)
                c = getChar();
            while (c != '\n') {
                res.append(c);
                c = getChar();
            }
            return res.toString();
        }

        public boolean hasNext() {
            if (c > 32)
                return true;
            while (true) {
                c = getChar();
                if (c == NC)
                    return false;
                else if (c > 32)
                    return true;
            }
        }
    }
}