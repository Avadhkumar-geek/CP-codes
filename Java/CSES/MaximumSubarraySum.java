package CSES;

import static java.lang.System.out;

import java.io.*;

public class MaximumSubarraySum {

    // ============================ CODE STARTS HERE ============================

    public static void main(String[] args) throws Exception {
        FastScanner in = new FastScanner();
        int T = in.nextInt();
        int[] arr = new int[T];
        for (int i = 0; i < T; i++) {
            arr[i] = in.nextInt();
        }
        long sum = arr[0];
        long max = arr[0];
        for (int i = 1; i < T; i++) {
            sum = Math.max(sum + arr[i], arr[i]);
            max = Math.max(max, sum);
        }
        out.println(max);
    }

    // ============================ CODE STARTS HERE ============================

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
    }
}