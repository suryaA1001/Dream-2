import java.util.*;
class main {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int r = sc.nextInt();
         int c = sc.nextInt();
         int c1=1;
         int c2=2;
         for(int i=1;i<=r;i++)
         {
             for(int j=1;j<=i;j++)
             {
                 if(i%2!=0){
                 System.out.print(c1);
                 c1+=2;
                 }
                 else{
                     System.out.print(c2);
                     c2+=2;
                 }
             }
             System.out.println();
         }
    }
}