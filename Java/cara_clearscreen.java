public class cara_clearscreen {

    public static void clrscr() {  
      System.out.print("\033[H\033[2J");  
      System.out.flush();  
    }
    
    public static void main(String[] args) {
      clrscr();
      System.out.println("Follow @renebaebae");
  }
}
