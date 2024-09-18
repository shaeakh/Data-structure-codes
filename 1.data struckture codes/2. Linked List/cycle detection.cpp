#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

        struct ListNode {
            int val;
            ListNode *next;
            ListNode(int x) : val(x), next(NULL) {}
        };


        ListNode * detectCycle(ListNode* A) {
            if(!A->next)return NULL;
            
            ListNode *tortoise=A;
            ListNode *hare=A;
            
            //check if there is a cycle
            while(hare){
                if(hare->next and hare->next->next)
                    hare=hare->next->next;
                else
                    return NULL; //no cycle
                tortoise=tortoise->next;
                if(hare==tortoise)break; //cycle exists
            }
            
            ListNode* tortoise2 = A;
            while(tortoise2 != tortoise){
                tortoise2 = tortoise2->next;
                tortoise = tortoise->next;
            }
            return tortoise;
        }



int main()
{
    
}
/* problem link: */