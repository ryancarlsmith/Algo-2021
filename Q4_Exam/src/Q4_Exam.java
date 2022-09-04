/*
Ryan Carlsmith
Q4 Final Exam
5/13/22
 */

import java.util.Scanner;

public class Q4_Exam {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        SymbolGraph graph = SymbolGraph.readAdjacencyList(scanner);

        for (int i = 0; i < args.length; i++) {
            graph.TopoSortRunner();
            graph.longestAndShortestPaths(args[i]);
            if (i != args.length-1) {
                System.out.println();
            }

        }
    }
}
