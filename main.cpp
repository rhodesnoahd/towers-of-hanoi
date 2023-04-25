/** Noah Rhodes Hanoi study */
#include <iostream>

/** procedure Hanoi solves the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,A,D} & E={(S,A), (A,S), (A,D), (D,A), (S,D), (D,S)} 
 * 
 * (simplest case is fully connected)
 * 
 *      S. --- .D
 *        \   /
 *          .
 *          A
 */
void Hanoi(int n, const std::string& start, const std::string& auxiliary, const std::string& destination) {
    if(n==0) {return;}
    else {
        Hanoi(n-1, start, destination, auxiliary); // move n-1 disks from start to auxiliary using destination
        std::cout << "move disk " << n << " from " << start << " to " << destination << '\n';
        Hanoi(n-1, auxiliary, start, destination); // move n-1 disks from auxiliary to destination using start
    }
}
/** end Hanoi solution */




/** procedures Hanoi1_H3 & Hanoi1_H2 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,A1,A2,D} & E={(S,A1), (A1,A2), (A2,D), (D,S)}
 *      
 *      S->A1->A2->D
 *      ^          |
 *      |          | 
 *       ---------- 
 */
void Hanoi1_H2(int, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi1_H3(int n,const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << destination << '\n';
    }
    else if (n>=2) {
        Hanoi1_H3(n-1, start, auxiliary1, auxiliary2, destination);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        Hanoi1_H2(n-1, destination, start, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << destination << '\n';
        Hanoi1_H2(n-1, auxiliary1, auxiliary2, destination, start);
    }
}
void Hanoi1_H2(int n,const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
    }
    else if(n>=2) {
        Hanoi1_H3(n-1,start, auxiliary1, auxiliary2, destination);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        Hanoi1_H3(n-1, destination, start, auxiliary1, auxiliary2);

    }
}
/** end Hanoi1 solution */




/** procedures Hanoi2_H4, Hanoi2_H3, & Hanoi2_H2 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,A1,A2,A3,D} & E={(S,A1), (A1,A2), (A2,A3), (A3,D), (D,S)}
 *    
 *      S->A1->A2->A3->D
 *      ^              |
 *      |              | 
 *       -------------- 
 */
void Hanoi2_H2(int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi2_H3(int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi2_H4(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3,const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
    }
    else if(n>=2) {
        Hanoi2_H4(n-1, start,  auxiliary1, auxiliary2, auxiliary3, destination);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        Hanoi2_H3(n-1, destination, start, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
        Hanoi2_H2(n-1, auxiliary2, auxiliary3,  destination, start, auxiliary1);
    }
}
void Hanoi2_H3(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3,const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
    }
    else if(n>=2) {
        Hanoi2_H4(n-1, start, auxiliary1, auxiliary2, auxiliary3, destination);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        Hanoi2_H4(n-1, destination, start, auxiliary1, auxiliary2, auxiliary3);
    }
}
void Hanoi2_H2(int n, const std::string& start,  const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3,const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
    }
    else if(n>=2) {
        Hanoi2_H4(n-1, start, auxiliary1, auxiliary2, auxiliary3, destination);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        Hanoi2_H3(n-1, destination, start, auxiliary1, auxiliary2, auxiliary3);
    }
}
/** end Hanoi2 solution */



/** procedures Hanoi3_H3, & Hanoi3_H2 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,A1,A2,D} & E={(S,A1), (A1,S), (A1,A2), (A2,A1), (A2,D)}
 *    
 *      S<->A1<->A2->D
 */
void Hanoi3_H2(int, const std::string&, const std::string&, const std::string&);
void Hanoi3_H3(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& destination) {
    if(n==1) {
        std::cout << " move disk " << n << " from " << start << " to " << auxiliary1 << std::endl;
        std::cout << " move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        std::cout << " move disk " << n << " from " << auxiliary2 << " to " << destination << std::endl;
    }
    else if(n>=2) {
        Hanoi3_H2(n-1, start, auxiliary1, auxiliary2);
        std::cout << " move disk " << n << " from " << start << " to " << auxiliary1 << std::endl;
        Hanoi3_H2(n-1, auxiliary2, auxiliary1, start);
        std::cout << " move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        std::cout << " move disk " << n << " from " << auxiliary2 << " to " << destination << std::endl;
        Hanoi3_H3(n-1,start, auxiliary1, auxiliary2, destination);
    }
}
void Hanoi3_H2(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2) {
    if(n==1) {
        std::cout << " move disk " << n << " from " << start << " to " << auxiliary1 << std::endl;
        std::cout << " move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
    }
    else if(n>=2) {
        Hanoi3_H2(n-1, start, auxiliary1, auxiliary2);
        std::cout << " move disk " << n << " from " << start << " to " << auxiliary1 << std::endl;
        Hanoi3_H2(n-1, auxiliary2, auxiliary1, start);
        std::cout << " move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        Hanoi3_H2(n-1, start, auxiliary1, auxiliary2);
    }
}
/** end Hanoi3 solution */




/** procedures Hanoi4_H4, Hanoi4_H3, & Hanoi4_H2 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,D,A1,A2,A3} & E={(S,D) (D,A1), (A1,A2), (A2,A3), (A3,S)}
 *    
 *      S->D->A1->A2->A3
 *      ^              |
 *      |              | 
 *       -------------- 
 */
void Hanoi4_H2(int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi4_H4(int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi4_H3(int, const std::string&, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi4_H1(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
    }
    else if(n>=2) {
        Hanoi4_H2(n-1, start, destination, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        Hanoi4_H4(n-1, auxiliary1, auxiliary2, auxiliary3, start, destination);
    }   
}
void Hanoi4_H2(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
    }
    else if(n>=2) {
        Hanoi4_H3(n-1, start, destination, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        Hanoi4_H4(n-1, auxiliary2, auxiliary3, start, destination, auxiliary1);
    }
}
void Hanoi4_H4(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << std::endl;
    }
    else if(n>=2) {
        Hanoi4_H4(n-1, start, destination, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        Hanoi4_H3(n-1, auxiliary3, start, destination, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << std::endl;
        Hanoi4_H2(n-1, auxiliary1, auxiliary2, auxiliary3, start, destination);
    }
}
void Hanoi4_H3(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2,const std::string& auxiliary3) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << '\n';
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
    }
    else if(n>=2) {
        Hanoi4_H3(n-1, start, destination, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << destination << '\n';
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << '\n';
        Hanoi4_H4(n-1, auxiliary2, auxiliary3, start, destination, auxiliary1);
    }
}
/** end Hanoi4 solution */




/** procedures Hanoi5_H1, Hanoi5_H2, & Hanoi5_H3 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,D,A1,A2} & E={(S,D) (D,A1), (A1,A2), (A2,S)}
 * 
 *      S->D->A1->A2
 *      ^          |
 *      |          | 
 *       ---------- 
 */
void Hanoi5_H2(int, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi5_H3(int, const std::string&, const std::string&, const std::string&, const std::string&);
void Hanoi5_H1(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
    }
    else if(n>=2) {
        Hanoi5_H2(n-1,start, destination, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        Hanoi5_H3(n-1, auxiliary1, auxiliary2, start, destination);
    }
}
void Hanoi5_H2(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
    }
    else if(n>=2) {
        Hanoi5_H3(n-1,start, destination, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        Hanoi5_H3(n-1, auxiliary2, start, destination, auxiliary1);
    }
}
void Hanoi5_H3(int n, const std::string& start, const std::string& destination, const std::string& auxiliary1, const std::string& auxiliary2) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
    }
    else if(n>=2) {
        Hanoi5_H3(n-1,start, destination, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << start << " to " << destination << std::endl;
        std::cout << "move disk " << n << " from " << destination << " to " << auxiliary1 << std::endl;
        Hanoi5_H2(n-1, auxiliary2, start, destination, auxiliary1);
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << std::endl;
        Hanoi5_H2(n-1, destination, auxiliary1, auxiliary2, start);
    }
}
/** end Hanoi5 solution */





/** procedures HanoiFinal_H4, HanoiFinal_H3, HanoiFinal_H3prime, & HanoiFinal_H2 solve the towers of Hanoi game for the following graph:
 * G(V,E) where V={S,A1,A2,A3,D} & E={(S,A1), (A1,A2), (A2,A1), (A2,A3), (A3,A2), (A3,D)}
 *    
 *      S->A1<->A2<->A3->D
 */
void HanoiFinal_H2(int, const std::string&, const std::string&, const std::string&);
void HanoiFinal_H3(int, const std::string&, const std::string&, const std::string&, const std::string&);
void HanoiFinal_H3prime(int, const std::string&, const std::string&, const std::string&, const std::string&);
void HanoiFinal_H4(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3, const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
    }
    else if(n>=2) {
        HanoiFinal_H3(n-1, start, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        HanoiFinal_H2(n-1, auxiliary3, auxiliary2, auxiliary1);
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
        HanoiFinal_H3prime(n-1, auxiliary1, auxiliary2, auxiliary3, destination);
    }
}
void HanoiFinal_H3(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
    }
    else if(n>=2) {
        HanoiFinal_H3(n-1, start, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        HanoiFinal_H2(n-1, auxiliary3, auxiliary2, auxiliary1);
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        HanoiFinal_H2(n-1, auxiliary1, auxiliary2, auxiliary3);
    }
}
void HanoiFinal_H3prime(int n, const std::string& auxiliary1, const std::string& auxiliary2, const std::string& auxiliary3, const std::string& destination) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
    }
    else if(n>=2) {
        HanoiFinal_H2(n-1, auxiliary1, auxiliary2, auxiliary3);
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        HanoiFinal_H2(n-1, auxiliary3, auxiliary2, auxiliary1);
        std::cout << "move disk " << n << " from " << auxiliary2 << " to " << auxiliary3 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary3 << " to " << destination << '\n';
        HanoiFinal_H3prime(n-1, auxiliary1, auxiliary2, auxiliary3, destination);
    }
}
void HanoiFinal_H2(int n, const std::string& start, const std::string& auxiliary1, const std::string& auxiliary2) {
    if(n==1) {
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
    }
    else if(n>=2) {
        HanoiFinal_H2(n-1, start, auxiliary1, auxiliary2);
        std::cout << "move disk " << n << " from " << start << " to " << auxiliary1 << '\n';
        HanoiFinal_H2(n-1, auxiliary2, auxiliary1, start);
        std::cout << "move disk " << n << " from " << auxiliary1 << " to " << auxiliary2 << '\n';
        HanoiFinal_H2(n-1, start, auxiliary1, auxiliary2);
    }
}
/** end HanoiFinal solution */


// tests for each solution confirm correctness of each algorithm
// TODO add argument parsing to run solution for given graph
int main(int argc, char* argv[]) {
    if (argc <= 0)
    {
        std::cout << "Provide graph" << std::endl;
        return 0;
    }

    int nValues[5] = {1, 2, 3, 4, 5};
    std::string start = "S", destination = "D", auxiliary1 = "A1", auxiliary2 = "A2" ,auxiliary3 = "A3";
    std::string arg = argv[1];

    // base graph Hanoi
    if (arg == "base")
    {
        std::cout << "/** procedure Hanoi solves the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,A,D} & E={(S,A), (A,S), (A,D), (D,A), (S,D), (D,S)}\n";
        std::cout << "*\n"; 
        std::cout << "* (simplest case is fully connected)\n";
        std::cout << "*\n"; 
        std::cout << "*      S. --- .D\n";
        std::cout << "*        \\   /\n";
        std::cout << "*          .\n";
        std::cout << "*          A\n";
        std::cout << "*/\n";
        std::cout << "Hanoi1 solution output:\n" << std::endl;
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi(n, start, auxiliary1, destination);
            std::cout << std::endl;
        }
        std::cout << "end" << std::endl;
        return 0;
    }

    // cycle of 4 vertices Hanoi1
    else if (arg == "cycle-4")
    {
        std::cout << "/** procedures Hanoi1_H3 & Hanoi1_H2 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,A1,A2,D} & E={(S,A1), (A1,A2), (A2,D), (D,S)}\n";
        std::cout << "*\n";      
        std::cout << "*      S->A1->A2->D\n";
        std::cout << "*      ^          |\n";
        std::cout << "*      |          |\n"; 
        std::cout << "*       ----------\n";
        std::cout << "*/\n";
        std::cout << "Hanoi1 solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi1_H3(n, start, auxiliary1, auxiliary2, destination);
            std::cout << std::endl;
        }
        std::cout << "\nend Hanoi1" << std::endl;
        return 0;
    }
    
    // cycle of 5 vertices Hanoi2
    else if (arg == "cycle-5")
    {
        std::cout << "/** procedures Hanoi2_H4, Hanoi2_H3, & Hanoi2_H2 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,A1,A2,A3,D} & E={(S,A1), (A1,A2), (A2,A3), (A3,D), (D,S)}\n";
        std::cout << "*\n";   
        std::cout << "*      S->A1->A2->A3->D\n";
        std::cout << "*      ^              |\n";
        std::cout << "*      |              |\n"; 
        std::cout << "*       --------------\n"; 
        std::cout << "*/\n"; 
        std::cout << "Hanoi2 solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi2_H4(n, start, auxiliary1, auxiliary2, auxiliary3, destination);
            std::cout << std::endl;
        }
        std::cout << "\nend" << std::endl;
        return 0;
    }

    // island of 3 vertices Hanoi3
    else if (arg == "island-3")
    {
        std::cout << "/** procedures Hanoi3_H3, & Hanoi3_H2 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,A1,A2,D} & E={(S,A1), (A1,S), (A1,A2), (A2,A1), (A2,D)}\n";
        std::cout << "*\n";    
        std::cout << "*      S<->A1<->A2->D\n";
        std::cout << "*/\n";
        std::cout << "Hanoi3 solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi3_H3(n, start, auxiliary1, auxiliary2, destination);
            std::cout << std::endl;
        }
        std::cout << "\nend" << std::endl;
        return 0;
    }
    
    // modified cycle of 5 vertices Hanoi4
    else if (arg == "cycle-5-mod")
    {
        std::cout << "/** procedures Hanoi4_H4, Hanoi4_H3, & Hanoi4_H2 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,D,A1,A2,A3} & E={(S,D) (D,A1), (A1,A2), (A2,A3), (A3,S)}\n";
        std::cout << "*\n";    
        std::cout << "*      S->D->A1->A2->A3\n";
        std::cout << "*      ^              |\n";
        std::cout << "*      |              |\n"; 
        std::cout << "*       --------------\n"; 
        std::cout << "*/\n";
        std::cout << "Hanoi4 solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi4_H1(n, start, destination, auxiliary1, auxiliary2, auxiliary3);
            std::cout << std::endl;
        }
        std::cout << "\nend" << std::endl;
        return 0;
    }

    // modified cycle of 4 vertices Hanoi4
    else if (arg == "cycle-4-mod")
    {
        std::cout << "/** procedures Hanoi5_H1, Hanoi5_H2, & Hanoi5_H3 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,D,A1,A2} & E={(S,D) (D,A1), (A1,A2), (A2,S)}\n";
        std::cout << "*\n"; 
        std::cout << "*      S->D->A1->A2\n";
        std::cout << "*      ^          |\n";
        std::cout << "*      |          |\n";
        std::cout << "*       ----------\n"; 
        std::cout << "*/\n";
        std::cout << "Hanoi5 solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            Hanoi5_H1(n, start, destination, auxiliary1, auxiliary2);
            std::cout << std::endl;
        }
        std::cout << "\nend" << std::endl;
        return 0;
    }
    
    // my final exam 2022
    else if (arg == "final")
    {
        std::cout << "/** procedures HanoiFinal_H4, HanoiFinal_H3, HanoiFinal_H3prime, & HanoiFinal_H2 solve the towers of Hanoi game for the following graph:\n";
        std::cout << "* G(V,E) where V={S,A1,A2,A3,D} & E={(S,A1), (A1,A2), (A2,A1), (A2,A3), (A3,A2), (A3,D)}\n";
        std::cout << "*\n";    
        std::cout << "*      S->A1<->A2<->A3->D\n";
        std::cout << "*/\n";
        std::cout << "HanoiFinal solution output:\n\n";
        for(int& n : nValues) {
            std::cout << "number of disks = " << n << "\n\n";
            HanoiFinal_H4(n, start, auxiliary1, auxiliary2, auxiliary3, destination);
            std::cout << std::endl;
        }
        std::cout << "\nend" << std::endl;
    }

    std::cout << "enter a valid argument" << std::endl;
    return -1;
}