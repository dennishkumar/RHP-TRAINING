import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        boolean[] letters = new boolean[26];
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch >= 'a' && ch <= 'z') {
                int index = ch - 'a';

                if (!letters[index]) {
                    letters[index] = true;
                    count++;
                }
            }
            else if (ch >= 'A' && ch <= 'Z') {
                int index = ch - 'A';

                if (!letters[index]) {
                    letters[index] = true;
                    count++;
                }
            }
        }

        if (count == 26)
            System.out.println("Pangram");
        else
            System.out.println("Not Pangram");
    }
}