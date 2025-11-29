import java.util.Scanner;

public class Sum_of_2DArr{
    public static void main(String [] args){
        Scanner sc = new Scanner (System.in);
        int a[][]=new int [100][100];
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=sc.nextInt();
        }
    }
    int S=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            S+=a[i][j];
        }
    }
    System.out.print(S);
    }
}
