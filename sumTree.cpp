class Solution
{
    public:
    pair<bool,int> is(Node* root)
    {
         if(root==NULL)
         {
             pair<bool,int> p = make_pair(true,0);
             return p;
         }
         if(root->left==NULL && root->right==NULL)
         {
             pair<bool,int> p =  make_pair(true,root->data);
             return p;
         }
    pair<bool,int> p =  is(root->left);
    pair<bool,int> q =  is(root->right);
    bool l = p.first;
    bool r = q.first;
    bool an = root->data == q.second  + p.second;
    pair<bool,int> ans ;
    
    if(l&&r&&an)
    {
        ans.first = true;
        ans.second = 2*root->data;
    }
    else
    {
        ans.first =false;
        
    }
    return ans;
    }
     bool isSumTree(Node* root)
    {
         return is(root).first;
    }
    
    
};