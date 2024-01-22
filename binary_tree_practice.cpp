// #include<bits/stdc++.h>
// using namespace std;

// struct treeNode
// {
//     public:
//     int data;
//     treeNode* left_child;
//     treeNode* right_child;

//     treeNode(int val)
//     {
//         left_child=NULL;
//         right_child=NULL;
//         data=val;
//     }
// };



// treeNode* createTree()
// {
//     treeNode* root=NULL;
//     int n;
//     cout<<"enter the value of the root : ";
//     cin>>n;
//     root=new treeNode(n);
//     queue<treeNode *>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         treeNode* cur=q.front();
//         q.pop();
//         int x,y;
//         cout<<"enter leftchild and right child of "<<cur->data<< " " ;

//         cin>>x>>y;
//         treeNode* n1=NULL;
//         treeNode* n2=NULL;
//         if(x!=-1)
//         {
//             n1=new treeNode(x);
//         }
//         if(y!=-1)
//         {
//             n2=new treeNode(y);
//         }
//         if(n1!=NULL)
//         {
//             q.push(n1);
//         }
//         if(n2!=NULL)
//         {
//             q.push(n2);
//         }
//         cur->left_child=n1;
//         cur->right_child=n2;

//     }
//     return root;

// }

// int main()
// {
//      treeNode *root = createTree();
// }


// #include<bits/stdc++.h>
// using namespace std;
// struct treeNode
// {
//     public:
//     int data;
//     treeNode* left_child;
//     treeNode* right_child;

//     treeNode(int val)
//     {
//         data=val;
//         left_child=NULL;
//         right_child=NULL;
//     }


// };

// treeNode* createTree()
// {
//     treeNode* root=NULL;
//     int n;
//     cout<<"enter the value of the root :";
//     cin>>n;
//     root = new treeNode(n);
//     queue<treeNode *>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         treeNode* cur=q.front();
//         q.pop();
//         int x,y;
//         cout<<"enter the value of left and rightchild of " << cur->data <<" : ";
//         cin>>x>>y;
//         treeNode* n1=NULL;
//         treeNode* n2=NULL;
//         if(x!=-1)
//         {
//             n1= new treeNode(x);
//         }
//         if(y!=-1)
//         {
//             n2= new treeNode(y);
//         }
//         cur->left_child=n1;
//         cur->right_child=n2;
//         if(n1 != NULL)
//         {
//             q.push(n1);
//         }
//         if(n2 != NULL)
//         {
//             q.push(n2);
//         }

//     }
//     return root;

// }
// int main()
// {
//     treeNode* root=createTree();
// }
// #include<bits/stdc++.h>
// using namespace std;
// class treeNode
// {
//     public:
//     int data;
//     treeNode* left_child;
//     treeNode* right_child;

//     treeNode(int val)
//     {
//         data=val;
//         left_child=NULL;
//         right_child=NULL;
//     }
// };

// treeNode* create_Tree()
// {
//     treeNode* root=NULL;
//     int n;
//     cout<<"enter the root value :";
//     cin>>n;
//     root=new treeNode(n);
//     queue<treeNode*>q;
//     q.push(root);
    
//     while(!q.empty())
//     {
//         treeNode* cur=q.front();
//         q.pop();
//         int x,y;
//         cout<<"enter the value of left and right child of "<< cur->data<<" : ";
//         cin>>x>>y;

//         treeNode* n1=NULL;
//         treeNode* n2=NULL;

//         if(x != -1)
//         {
//             n1=new treeNode(x);  
//         }
//         if(y != -1)
//         {
//             n2=new treeNode(y);
//         }

//         if(n1 != NULL)
//         {
//            q.push(n1);
//         }
//         if(n2 != NULL)
//         {
//             q.push(n2);
//         }
//         cur->left_child=n1;
//         cur->right_child=n2;
//     }
// }
// int main()
// {
//    treeNode* root=create_Tree();
// }
#include<bits/stdc++.h>
using namespace std;
struct treeNode
{
    public:
    int data;
    treeNode* left_child;
    treeNode* right_child;

    treeNode(int val)
    {
        data=val;
        left_child=NULL;
        right_child=NULL;
    }
};

treeNode* create_tree()
{
    treeNode* root=NULL;
    int n;
    cout<<"enter root value :";
    cin>>n;
    queue<treeNode*>q;
    q.push(root);
    while (!q.empty())
    {
        treeNode* cur=q.front();
        q.pop();
        int x,y;
        cout<<"enter the left and right child of "<<cur->data<<" : ";
        cin>>x>>y;
        treeNode* n1=NULL;
        treeNode* n2=NULL;
        if(x != -1)
        {
            n1=new treeNode(x);
        }
        if(y != -1)
        {
            n2=new treeNode(y);
        }
        if(n1 != NULL)
        {
            q.push(n1);
        }
        if(n2 != NULL)
        {
            q.push(n2);
        }
      cur->left_child=n1;
      cur->right_child=n2;
    }
    return root;

}