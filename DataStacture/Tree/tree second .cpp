#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;

    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printTree(treeNode* root, int level)
{

}

int main()
{
    int n;
    cin>>n;
    treeNode* allNodes[n];

    for(int i=0; i<n; i++)
    {
        allNodes->data = -1;
    }

    for(int i=0; i<n; i++)
    {
        int value,left,right;
        cin>>value>>left>>right;
        allNodes[i]->data = value;

        if(left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if(right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }

    }

    printTree(allNodes[0],0);
    return 0;
}
