import java.util.*;

class Main {
    static void combinations(String str, String curr, int index) {
        if (curr.length() > 0)
            System.out.println(curr);

        for (int i = index; i < str.length(); i++) {
            combinations(str, curr + str.charAt(i), i + 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        combinations(str, "", 0);
    }
}