package MINMAX;

import java.util.Scanner;
import java.util.Stack;

public class nextGreaterElement {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int a[] = { 2, 5, 8, 0, 2, 3, 5, 2 };

        Stack<Integer> stack = new Stack<Integer>();
        stack.push(a[0]);

        int ele = -1;
        for (int i = 1; i < a.length; i++) {

            if (stack.isEmpty() == false) {
                ele = stack.pop();
                while (ele < a[i]) {
                    System.out.println(ele + "-->" + a[i]);
                    if (stack.isEmpty()) {
                        break;
                    }
                    ele = stack.pop();
                }

                if (ele > a[i]) {
                    System.out.println(ele + "--> -1");
                    // stack.push(ele);
                }
            }
            stack.push(a[i]);
            if (i == a.length - 1)
                System.out.println(a[i] + "--> -1");
            // System.out.println(stack.peek());
            // System.out.println("i is :" + i);

        }

        sc.close();
    }
}