
var removeNthFromEnd = function(head, n) {
    let hare=head, tortoise=head;
    let previous=new Node();
    // previous.next=head;
    let i=0;
    while(hare!=null){
        if(i<n){
            hare=hare.next;
        }
        else{
            hare=hare.next;
            previous=tortoise;
            tortoise=tortoise.next;
        }
        i++;
    }
    if(tortoise===head){
        head=head.next;
    }
    else{
        previous.next=tortoise.next;
    }
    return head;
};

class Node{
    constructor(val,next=null){
        this.val=val;
        this.next=next;
    }
}

const n1=new Node(5);
const n2=new Node(6);
const n3=new Node(2);
const n4=new Node(9);
const n5=new Node(7);
const n6=new Node(10);

n1.next=n2;
n2.next=n3;
n3.next=n4;
n4.next=n5;
n5.next=n6;

console.log(removeNthFromEnd(n1,4));