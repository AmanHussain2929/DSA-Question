// { Driver Code Starts
import java.util.Scanner;
import java.util.Stack;
class SortedStack{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			Stack<Integer> s=new Stack<>();
			int n=sc.nextInt();
			while(n-->0)
			s.push(sc.nextInt());
			GfG g=new GfG();
			Stack<Integer> a=g.sort(s);
			while(!a.empty()){
				System.out.print(a.peek()+" ");
				a.pop();
			}
			System.out.println();
		}
	}
}// } Driver Code Ends


/*Complete the function below*/
class GfG{
	public Stack<Integer> sort(Stack<Integer> s)
	{
	 if(s.size()==1) return s;
 	int t=s.peek();
	s.pop();
	sort(s);
	put(s,t);
	 return s;
	}
	public static Stack<Integer> put(Stack<Integer> s,int t)
	{
	    if(s.size()==0)
	    {
	        s.push(t);
	        return s;
	    }
	    if(s.peek()<=t)
	    {
	       s.push(t);
	        return s;  
	    }
	    int p=s.peek();
	    s.pop();
	    put(s,t);
	    s.push(p);
	    return s;
	}
}