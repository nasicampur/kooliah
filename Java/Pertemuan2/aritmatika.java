import java.util.Scanner;

public class aritmatika{
    public static void main(String[] args) {
        
        int angka1, angka2, hasil;
        Scanner inp = new Scanner(System.in);
        
        System.out.print("Input angka 1: ");
        angka1 = inp.nextInt();
        System.out.print("Input angka 2: ");
        angka2 = inp.nextInt();
    
        hasil = angka1 + angka2;
        System.out.print("Hasil penjumlahan: " + hasil);
    }
}