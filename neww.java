public class neww {
    public static void main(String[] args) {

        int count = 0;

        for (int i = 1; i <= 100; i++) {
            String str = String.valueOf(i);

            for (int j = 0; j < str.length(); j++) {
                if (str.charAt(j) == '0') {
                    count++;
                }
            }
        }

        System.out.println("Total zeros = " + count);
    }
}