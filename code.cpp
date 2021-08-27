int fractional_node(struct Node *head, int k)
{
    // your code here
    float count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
   // cout<<count/k;
    int p=ceil(count/k);
     temp=head;
     //cout<<p;
     while(p>1)
     {
         temp=temp->next;
         p--;
     }
     if(temp==NULL)return -1;
     return temp->data;
}
