import java.util.Scanner;

public class ganjilGenap {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int var1;
        input.close();
        
        System.out.print("Input sembarang angka: ");
        var1 = input.nextInt();

        if (var1 % 2 != 0) {
        System.out.print(var1 + " adalah angka ganjil");
        }
        
        else {
        System.out.print(var1 + " adalah angka genap");
        }
        
    }
}
