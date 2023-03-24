var middleNode = function(head) {
    let hare=head;
    let tortoise=head;
    while(hare!=null && hare.next!=null){
      hare=hare.next.next;
      tortoise=tortoise.next;
    }
    return tortoise;
};

var removeNth = function(head, n) {
    let current=head;
    let previous=null;
    let i=1;
    while(i<n ){
        i++;
        previous=current;
        current=current.next;
    }
    previous.next=current.next;
    return head;
};

var removeNthFromLinkedList = function(head, n) {
    let current = head;
    let previous = null;
    let i = 1;
    while (i < n && current !== null) {
        i++;
        previous = current;
        current = current.next;
    }
    if (i < n || current === null) {
        // n is greater than the length of the linked list
        return head;
    }
    if (previous === null) {
        // removing the first node
        head = current.next;
    } else {
        previous.next = current.next;
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

console.log(removeNthFromEnd(n1,2));


// hare and tortoise method

