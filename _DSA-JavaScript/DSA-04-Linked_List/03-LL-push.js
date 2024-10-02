class CreateNode{
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class LL{
    constructor(value){
        const newNode =new CreateNode(value);
        this.head =newNode;
        this.tail=newNode;
        this.length=1;
    };

    // push or add node at the end
    push(value){
        const newNode =new CreateNode(value);
        if(this.head ===null){
            this.head = newNode;
            this.tail = newNode;
        }else{
            this.tail.next=newNode;
            this.tail=newNode; 
        }
        this.length++;
        return this;
    }
};


let myLL=new LL(null);
myLL.push(4);
myLL.push(4);
console.log(myLL)