package Java_STMIK;

import java.util.Scanner;

public class Tugas_pert5_do_while {
    
    public static void main(String[] args) {
        System.out.println("===Perulangan do-while input variabel===");
        int x = 1;
        int count ;
        Scanner inp = new Scanner(System.in);
        System.out.print("Input angka : ");
        count = inp.nextInt();
        do{
            System.out.println("count :"+x);
            x++;
        }while(x < count);
        System.out.println("========================================");
    }
}
