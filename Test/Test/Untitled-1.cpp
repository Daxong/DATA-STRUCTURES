#include <iostream>
using namespace std;

struct List
{
    int num;
    List *next;
};

List *head;

void reverse(int begin, int end, List *&head)
{
    //在这个函数中编写你的代码
    if(begin>end){
        int temp=begin;
        begin=end;
        end=temp;
    }
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=head->num;
        //cout<<arr[i]<<" ";
        head=head->next;
    }
    head=NULL;
    List *p = NULL;
    List *q =NULL;
    for(int i=0;i<10;i++){
        p=new List;
        if(begin-1<i && i<end+1){///////////////////////////////
            p->num=arr[end];
            cout<<p->num<<"咋";
            end--;
        }else{
            p->num=11;
            //cout<<p->num<<"地";
        }
        if(head==NULL){
            head=p;
        }else{
            q->next=p;
        }
        q=p;
    }
    if(head!=NULL){
        q->next=NULL;
    }
    
}
List *Create()
{
    List *p = NULL;
    List *q = NULL;
    head = NULL;
    for ( int i = 0; i < 10; i++ ) {
        p = new List;
        p->num = i * 2;
        if ( head == NULL ) {
            head = p;
        }
        else {
            q->next = p;
        }
        q = p;
    }

    if ( head != NULL ) {
        q->next = NULL;
    }

    return head;
}

void displayList(List *head)
{
    while ( head != NULL ) {
        cout << head->num;
        head = head->next;
        if ( head != NULL ) {
            cout << "->";
        }
    }
    cout << endl;
}

int main() {
    Create();
    int begin, end;
    cin >> begin >> end;
    reverse(begin, end, head);
    displayList(head);
    return 0;
}