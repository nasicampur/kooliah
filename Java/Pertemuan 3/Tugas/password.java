import java.util.Scanner;

public class password {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String username;
        int password;
        boolean hasil;
        
        System.out.print("Masukkan username: ");
        username = inp.next();
        System.out.print("Masukkan password: ");
        password = inp.nextInt();
        inp.close();
        
        if(password == 123456){
            hasil = true;
            System.out.print("Password yang anda input? " + hasil);
        } else if(password != 123456){
            hasil = false;
            System.out.print("Password yang anda input? " + hasil);
        }
    }
}
