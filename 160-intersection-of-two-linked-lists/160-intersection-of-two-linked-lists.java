/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
       HashSet<ListNode> hs=new HashSet<>();
        ListNode t1=headA;
        while(t1!=null)
        {
            hs.add(t1);
            t1=t1.next;
        }
   ListNode    t2=headB;
         while(t2!=null)
        {
           if(hs.contains(t2))
           {
               return t2;
           }
            t2=t2.next;
        }
        return null;
    }
}