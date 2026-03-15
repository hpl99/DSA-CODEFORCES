import java.util.Scanner;
public class Equal{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int []arr = new int[n+1];
            for(int i=1; i<=n; i++){
                arr[i] = sc.nextInt();
            }
            int []count_arr = new int[n+1];
            for(int i=1; i<=n; i++){
                count_arr[arr[i]]++;
            }
            int min = Integer.MAX_VALUE;
            int max = 0;
            for(int i=1; i<=n; i++){
                if(count_arr[i]!=0 && min>count_arr[i]){
                    min = count_arr[i];
                    int count = 0;
                    for(int j=1; j<=n; j++){
                        if(count_arr[j]>=min){
                        count++;
                        }
                    }
                    min = min * count;
                    max = Math.max(max,min);
                }
            }
            System.out.println(max);
        }
    }
}