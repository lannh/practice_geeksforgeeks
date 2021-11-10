#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  
    Node* reverseList(Node* head)
    {
        Node* prev = nullptr;
        Node* cur = head;
        Node* next = head;
        while(cur!=nullptr)
        {
            next = cur->next;
            cur->next = prev;
            
            prev = cur;
            cur = next;
        }
     
        return prev;
    }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int n = 0;
        Node* tmp = head;
        while(tmp!=nullptr)
        {
            ++n;
            tmp = tmp->next;
        }
        
        Node* midNode = head;
        if(n%2!=0)
        {
            n/=2;
            ++n;
        }
        else n/=2;

        for(int i=0; i<n; ++i)
            midNode = midNode->next;

        midNode = reverseList(midNode);
        
        
        tmp = head;
        while(midNode!=nullptr)
        {
            if(tmp->data != midNode->data)
                return false;
            tmp = tmp->next;
            midNode = midNode->next;
        }

        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends