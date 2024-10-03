# 🔥 Linked List in JavaScript 

- How to Create Node
- Create Linked List 
- Performed **Push( ),  | O(1)** | add nodeNode at the end
- Performed **Pop( ), | O(n)** | remove nodeNode at the end  


<details>
    <summary>🔥01- Linked List এবং Array</summary>
    <br>

# 🔥01- Linked List এবং Array

এটি আমাদের প্রথম ডেটা স্ট্রাকচার যা আমরা তৈরি করতে যাচ্ছি, যা কিছুটা important. লিঙ্কড লিস্টগুলি পরিচয় করানোর জন্য, আমি এটি সেই ডেটা স্ট্রাকচারের সাথে তুলনা করব যা এটি সবচেয়ে বেশি তুলনা করা হয়, এবং তা হল অ্যারে।

### অ্যারের বৈশিষ্ট্য

- **index**: অ্যারেগুলির একটি index থাকে, যা প্রতিটি উপাদানকে চিহ্নিত করে।
- **মেমরিতে অবস্থান**: অ্যারে উপাদানগুলি ধারাবাহিকভাবে মেমরিতে সংরক্ষিত হয়।

### লিঙ্কড লিস্টের বৈশিষ্ট্য

- **index**: লিঙ্কড লিস্টগুলির কোনও সূচক নেই।
- **মেমরিতে অবস্থান**: লিঙ্কড লিস্টের উপাদানগুলি মেমরিতে যেকোনো জায়গায় থাকতে পারে এবং এটি ধারাবাহিক নয়।

### গ্রাফিকাল উপস্থাপন

লিঙ্কড লিস্টের উপাদানগুলিকে গ্রাফিক্যালভাবে উপস্থাপন করার জন্য, আমরা সবুজ বর্গক্ষেত্রের পরিবর্তে বেগুনি বৃত্ত ব্যবহার করব।
🔂 🔂 🔂

- **Head and Tail**: লিঙ্কড লিস্টে একটি ভেরিয়েবল থাকে যাকে "হেড" বলা হয়, যা প্রথম আইটেমকে নির্দেশ করে, এবং একটি "টেইল" থাকে, যা শেষ আইটেমকে নির্দেশ করে।
- **লিঙ্ক**: প্রতিটি আইটেম পরবর্তী আইটেমের দিকে নির্দেশ করে, এবং শেষ আইটেমটি `null` এর দিকে নির্দেশ করে। তাই আপনি "null terminated list" শব্দটি শুনতে পাবেন।

### সারসংক্ষেপ

অ্যারেগুলি ধারাবাহিকভাবে মেমরিতে সংরক্ষিত হয়, যেখানে লিঙ্কড লিস্টগুলি যেকোনো স্থানে থাকতে পারে। এই তুলনার মাধ্যমে আমরা লিঙ্কড লিস্ট এবং অ্যারের মধ্যে মৌলিক পার্থক্যগুলি বুঝতে পারি।

</details>

<details>
    <summary>🔥02- লিঙ্কড লিস্ট এবং বিগ ও (Big O)</summary>
    <br>

# 🔥02- লিঙ্কড লিস্ট এবং বিগ ও (Big O)

এটি আমাদের প্রথম ডেটা স্ট্রাকচার যা আমরা তৈরি করতে যাচ্ছি, এই সেকশনে, আমরা লিঙ্কড লিস্টের বিভিন্ন **অপারেশনের** জন্য বিগ ও বিশ্লেষণ করব।

### ✅ লিঙ্কড লিস্টে নোড যোগ করা

ধরি, আমাদের একটি লিঙ্কড লিস্ট আছে এবং আমরা একটি নতুন নোড (৪) যোগ করতে যাচ্ছি।

- **নতুন নোড যোগ করা**:
  - নতুন নোডটি শেষের দিকে যুক্ত করতে হলে, আমাদের শেষ নোডটি (tail) নতুন নোডের দিকে নির্দেশ করতে হবে।
  - এটি করার জন্য, আমরা `tail` কে নতুন নোডের দিকে নির্দেশিত করি।
  - এটি একটি ধ্রুবক সময় (O(1))।

### ✅ লিঙ্কড লিস্ট থেকে নোড মুছে ফেলা

- **শেষ থেকে মুছে ফেলা**:
  - শেষ নোডটি মুছে ফেলতে হলে, আমাদের শেষের দিকে (tail) যাওয়ার জন্য পুরো লিস্টটি পার হতে হবে।
  - তাই, এটি O(n)।

### শুরু থেকে নোড যোগ করা

- **শুরুর দিকে যোগ করা**:
  - নতুন নোডটি যুক্ত করতে হলে, হেডকে নতুন নোডের দিকে নির্দেশ করতে হবে।
  - এটি O(1)।

### শুরু থেকে নোড মুছে ফেলা

- **শুরু থেকে মুছে ফেলা**:
  - হেডকে পরবর্তী নোডের দিকে নির্দেশ করতে হবে।
  - এটি O(1)।

### মধ্যবর্তী অবস্থানে ইনসার্ট করা

- **মধ্যবর্তী অবস্থানে ইনসার্ট করা**:
  - একটি নির্দিষ্ট ইনডেক্সে ইনসার্ট করার জন্য, আমাদের হেড থেকে শুরু করে পুরো লিস্টটি পার হতে হবে।
  - তাই, এটি O(n)।

### মধ্যবর্তী অবস্থানে আইটেম মুছে ফেলা

- **মধ্যবর্তী অবস্থানে মুছে ফেলা**:
  - একইভাবে, একটি নির্দিষ্ট ইনডেক্সে আইটেম মুছে ফেলতে হলে, পুরো লিস্টটি পার হতে হবে।
  - তাই, এটি O(n)।

### আইটেম খোঁজা

- **মান দ্বারা খোঁজা**:

  - যদি আমরা মান দ্বারা খুঁজতে চাই, তাহলে হেড থেকে শুরু করে পুরো লিস্টটি পার হতে হবে।
  - এটি O(n)।

- **ইনডেক্স দ্বারা খোঁজা**:

  - ইনডেক্স দ্বারা খুঁজতে হলে, আবারও হেড থেকে শুরু করে পুরো লিস্টটি পার হতে হবে।
  - তাই, এটি O(n)।

- Push Pop works in Tail part add or remove
- unshift works in the Head part add or remove

### অ্যারে এবং লিঙ্কড লিস্টের তুলনা

| অপারেশন                      | অ্যারে (Array) | লিঙ্কড লিস্ট (Linked List) |
| ---------------------------- | -------------- | -------------------------- |
| শেষ থেকে POP করা             | O(1)           | O(n)                       |
| ইনডেক্স দ্বারা খোঁজা         | O(1)           | O(n)                       |
| শুরুতে যোগ করা               | O(n)           | O(1)                       |
| শুরুতে মুছে ফেলা             | O(n)           | O(1)                       |
| মধ্যবর্তী অবস্থানে যোগ করা   | O(n)           | O(n)                       |
| মধ্যবর্তী অবস্থানে মুছে ফেলা | O(n)           | O(n)                       |

এটি একটি দ্রুত পর্যালোচনা ছিল যে কিভাবে লিঙ্কড লিস্ট এবং অ্যারে বিভিন্ন অপারেশনের জন্য বিগ ও বিশ্লেষণে ভিন্ন।

```javascript
let myLinkedList = new LinkedList(23); // প্রথম নোডের মান 23 দিয়ে লিঙ্কড লিস্ট তৈরি করে
myLinkedList.push(7); // শেষে 7 যোগ করে  | O(1)
myLinkedList.unshift(3); // শুরুতে 3 যোগ করে
myLinkedList.insertAt(1, 11); // সূচক 1 এ 11 সন্নিবেশ করে
myLinkedList.remove(1); // সূচক 1 থেকে আইটেম অপসারণ করে (11)
```

```javascript
class LinkedList {
  constructor(value) {
    this.head = { value: value, next: null }; // হেড নোড শুরু করা
    this.length = 1; // দৈর্ঘ্য ট্র্যাক করা
  }

  push(value) {
    // শেষের দিকে নতুন নোড যোগ করার মেথড
  }

  unshift(value) {
    // শুরুতে নতুন নোড যোগ করার মেথড
  }

  insertAt(index, value) {
    // নির্দিষ্ট সূচকে একটি নোড সন্নিবেশ করার মেথড
  }

  remove(index) {
    // নির্দিষ্ট সূচক থেকে একটি নোড অপসারণ করার মেথড
  }

  pop() {
    // শেষ নোড অপসারণ করার মেথড
  }

  shift() {
    // প্রথম নোড অপসারণ করার মেথড
  }
}
```

</details>

<details>
    <summary>🔥03- লিঙ্কড লিস্টের অন্তর্নিহিত গঠন</summary>
    <br>

# 🔥03- লিঙ্কড লিস্টের Internal Structure

এখন আমরা লিঙ্কড লিস্টের অন্তর্নিহিত গঠন নিয়ে আলোচনা করব। আসুন দেখি এটি আসলে কীভাবে তৈরি হয়।

### নোডের গঠন

লিঙ্কড লিস্টের প্রতিটি উপাদানকে নোড বলা হয়। একটি নোডে দুটি প্রধান উপাদান থাকে:

1. **মান (Value)**: এটি নোডের মূল তথ্য।
2. **পয়েন্টার (Pointer)**: এটি পরবর্তী নোডের ঠিকানাকে নির্দেশ করে।

একটি নোডের গঠন নিচের মতো হতে পারে:

```javascript
{
    value: 7,
    next: <pointer to the next node>
}
```

### লিঙ্কড লিস্টে নোড যোগ করা

যখন আমরা একটি নতুন নোড (যেমন ৪) যোগ করি, তখন আমাদের প্রথমে নিশ্চিত করতে হবে যে পূর্ববর্তী নোড (যেমন ৭) নতুন নোডের দিকে নির্দেশ করে। এটি করার জন্য, আমরা ৭ এর `next` পয়েন্টারকে নতুন নোডের ঠিকানায় সেট করি।

```javascript
node7.next = node4; // ৭ নোডটি ৪ নোডের দিকে নির্দেশ করে
```

এখন, `tail` পয়েন্টারটিও নতুন নোড (৪) এর দিকে নির্দেশ করবে।

### হেড এবং টেইল

- **হেড (Head)**: এটি প্রথম নোডকে নির্দেশ করে।
- **টেইল (Tail)**: এটি শেষ নোডকে নির্দেশ করে এবং এটি সর্বদা শেষের দিকে নির্দেশিত থাকে।

### গ্রাফিক্যাল উপস্থাপন

লিঙ্কড লিস্টকে গ্রাফিক্যালভাবে উপস্থাপন করতে, আমরা সাধারণত একটি ডায়াগ্রাম ব্যবহার করি যেখানে প্রতিটি নোড একটি বৃত্তে চিত্রিত হয় এবং পয়েন্টারগুলি তীর দ্বারা চিহ্নিত করা হয়।

### উদাহরণ

নিচে একটি উদাহরণ দেওয়া হল যেখানে আমরা একটি লিঙ্কড লিস্ট তৈরি করছি:

```javascript
class Node {
  constructor(value) {
    this.value = value;
    this.next = null; // পরবর্তী নোডের জন্য পয়েন্টার
  }
}

class LinkedList {
  constructor() {
    this.head = null; // প্রথম নোড
    this.tail = null; // শেষ নোড
  }

  add(value) {
    const newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode; // শেষ নোডের পরবর্তী পয়েন্টার সেট করা
      this.tail = newNode; // টেইল আপডেট করা
    }
  }
}
```

### উপসংহার

লিঙ্কড লিস্ট হল একটি ডাইনামিক ডেটা স্ট্রাকচার যা বিভিন্ন ধরনের অপারেশন সম্পাদনের জন্য খুবই কার্যকর। প্রতিটি নোডে তথ্য এবং পরবর্তী নোডের ঠিকানা থাকে, যা আমাদেরকে সহজেই নতুন উপাদান যুক্ত করতে এবং মুছে ফেলতে দেয়। এই গঠনটি আমাদেরকে মেমরি ব্যবস্থাপনায় নমনীয়তা প্রদান করে।

এবং এটিই ছিল আমাদের লিঙ্কেড লিস্টের অন্তর্নিহিত গঠন নিয়ে আলোচনা।

</details>

<details>
    <summary>🔥04- লিঙ্কড লিস্টের Constructor</summary>
    <br>

# 🔥04- লিঙ্কড লিস্টের Constructor

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য কনস্ট্রাক্টর তৈরি করতে যাচ্ছি। আসুন শুরু করি।

### লিঙ্কড লিস্ট ক্লাস তৈরি করা

প্রথমে, আমরা আমাদের লিঙ্কড লিস্ট ক্লাসটি তৈরি করব। কনস্ট্রাক্টরের কোড লেখার আগে, আমি কিছু বিষয় উল্লেখ করতে চাই।

#### কনস্ট্রাক্টরের সাধারণ বৈশিষ্ট্য

কনস্ট্রাক্টরের কিছু সাধারণ বৈশিষ্ট্য রয়েছে যা অন্যান্য পদ্ধতিগুলির সাথে মিল রয়েছে, যেমন:

- **Push**: নতুন নোড তৈরি করে এবং সেটিকে শেষের দিকে যুক্ত করে।
- **Unshift**: নতুন নোড তৈরি করে এবং সেটিকে শুরুতে যুক্ত করে।
- **Insert**: নতুন নোড তৈরি করে এবং সেটিকে নির্দিষ্ট স্থানে সন্নিবেশ করে।

```javascript
class LinkdList {
    constructor(value){
        // create new Node;

    }
    push(value){
        // create new Node
        add Node to end

    }
    unshift(value){
        // create new Node
        add Node to begining
    }
    insert (index, value){
        // create new Node
        add Node to begining
    }
```

**সবগুলো পদ্ধতি নতুন নোড তৈরি করে,** তাই আমরা একটি আলাদা ক্লাস তৈরি করব যাকে আমরা `Node` বলব। প্রতিটি পদ্ধতি যখন একটি নোড তৈরি করতে হবে, তখন এটি এই ক্লাসটি কল করবে।

### ✅নোড ক্লাস Constructor

নোড ক্লাসের গঠন নিচের মতো হবে:

```javascript
class Node {
  constructor(value) {
    this.value = value; // নোডের মান
    this.next = null; // পরবর্তী নোডের জন্য পয়েন্টার
  }
}
```

```javascript
// node class
class MyNode {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

const newNode_4 = new MyNode(4); //{value:4, next:null}
```

### ✅ লিঙ্কড লিস্ট Constructor

এখন আসুন আমাদের লিঙ্কড লিস্টের কনস্ট্রাক্টর তৈরি করি:

```javascript
class LinkedList {
  constructor(value) {
    const newNode = new Node(value); // নতুন নোড তৈরি করা
    this.head = newNode; // হেডকে নতুন নোডের দিকে নির্দেশ করা
    this.tail = newNode; // টেইলকে একই নোডের দিকে নির্দেশ করা
    this.length = 1; // দৈর্ঘ্য ১ সেট করা
  }
}
```

### নতুন লিঙ্কড লিস্ট তৈরি করা

নতুন লিঙ্কড লিস্ট তৈরি করতে, আপনি নিচের কোডটি ব্যবহার করবেন:

```javascript
const myLinkedList = new LinkedList(4); // ৪ মান সহ একটি নতুন লিঙ্কড লিস্ট তৈরি করা
```

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি।

1. প্রথমে, আমরা `new LinkedList(4)` কল করি।
2. এটি একটি নতুন নোড তৈরি করবে যার মান ৪ এবং এটি হেড ও টেইল উভয়কেই নির্দেশ করবে।
3. যদি আমরা `myLinkedList` লিখি এবং এন্টার চাপি, তাহলে দেখতে পাব যে আমাদের একটি কাজ করছে এমন লিঙ্কেড লিস্ট আছে।

### ফলাফল

```plaintext
LinkedList {
    head: Node { value: 4, next: null },
    tail: Node { value: 4, next: null },
    length: 1
}
```

এটি দেখায় যে হেড এবং টেইল উভয়ই একই অবজেক্টকে নির্দেশ করছে এবং দৈর্ঘ্য ১।

এবং এইভাবে আমাদের একটি কার্যকরী লিঙ্কেড লিস্ট তৈরি হয়েছে!

Full Code 02-LL-Structure.js

```javascript
class CreateNode {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkdList {
  constructor(value) {
    const newNode = new CreateNode(value);
    this.head = newNode;
    this.tail = this.head;
    this.length = 1;
  }
}

let LL1 = new LinkdList(4);

/*  outPut:
LinkdList {
  head: CreateNode { value: 4, next: null },
  tail: CreateNode { value: 4, next: null },
  length: 1
}

*/
```

</details>

<details>
    <summary>🔥05- লিঙ্কড লিস্টের পুশ (Push) মেথড</summary>
    <br>

# 🔥05- লিঙ্কড লিস্টের পুশ (Push) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য পুশ (Push) মেথড তৈরি করব। আসুন প্রথমে পদক্ষেপগুলো দেখে নেওয়া যাক।

### পুশ মেথডের পদক্ষেপ

1. **নতুন নোড তৈরি করা**: প্রথমে আমাদের একটি নতুন নোড তৈরি করতে হবে।
2. **লাস্ট নোডের পয়েন্টার সেট করা**: তারপর, শেষ নোডটি নতুন নোডের দিকে নির্দেশ করবে।
3. **টেইল পয়েন্টার আপডেট করা**: টেইল পয়েন্টারটিও নতুন নোডের দিকে নির্দেশ করবে।

### corner case

আমাদের একটি এজ কেসও বিবেচনা করতে হবে, যা হল যদি আমরা একটি লিঙ্কড লিস্টে নোড যুক্ত করি যা এখনও খালি। এই ক্ষেত্রে, আমাদের হেড এবং টেইল উভয়ই নতুন নোডের দিকে নির্দেশ করবে।

### কোড লেখা

এখন আসুন কোডে প্রবেশ করি এবং পুশ মেথডটি তৈরি করি:

```javascript
push(value) {
    const newNode = new Node(value); // নতুন নোড তৈরি করা

    // যদি হেড খালি হয়
    if (!this.head) {
        this.head = newNode; // হেডকে নতুন নোডের দিকে নির্দেশ করা
        this.tail = newNode; // টেইলকেও নতুন নোডের দিকে নির্দেশ করা
    } else {
        this.tail.next = newNode; // শেষ নোডের পরবর্তী পয়েন্টারকে নতুন নোডের দিকে নির্দেশ করা
        this.tail = newNode; // টেইলকে নতুন নোডের দিকে নির্দেশ করা
    }

    this.length++; // দৈর্ঘ্য ১ বাড়ানো
    return this; // পুরো লিঙ্কড লিস্ট ফেরত দেওয়া
}
```

### কোড বিশ্লেষণ

- **নতুন নোড তৈরি**: `const newNode = new Node(value);` এই লাইনে আমরা একটি নতুন নোড তৈরি করছি।
- **হেড চেক**: `if (!this.head)` এই শর্তটি পরীক্ষা করে যে হেড খালি কি না। যদি খালি হয়, তাহলে হেড এবং টেইল উভয়ই নতুন নোডের দিকে নির্দেশ করে।
- **নতুন নোড যুক্ত করা**: যদি হেড খালি না হয়, তাহলে শেষ নোডের পরবর্তী পয়েন্টারকে নতুন নোডের দিকে নির্দেশ করি এবং টেইল আপডেট করি।
- **দৈর্ঘ্য বাড়ানো**: `this.length++` মাধ্যমে আমরা লিঙ্কেড লিস্টের দৈর্ঘ্য বাড়াচ্ছি।
- **ফিরিয়ে দেওয়া**: `return this;` পুরো লিঙ্কেড লিস্ট ফেরত দেয়।

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি:

```javascript
let myLinkedList = new LinkedList(7); // ৭ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.push(4); // ৪ মান যুক্ত করা
```

- যখন আমরা `myLinkedList.push(4)` কল করি, এটি পুরো লিঙ্কেড লিস্ট ফেরত দেবে।
- আমরা দেখতে পাব যে হেড ৭ নোডকে নির্দেশ করছে এবং টেইল ৪ নোডকে নির্দেশ করছে। দৈর্ঘ্য ২।

### ফলাফল

```plaintext
LinkedList {
    head: Node { value: 7, next: Node { value: 4, next: null } },
    tail: Node { value: 4, next: null },
    length: 2
}
```
### 🔲 Full Code 


```js
/* 
    🌟 Create a new node 
    🌟if it is first clild or head === null
        assign head pointer to the new Node
        assign tail pointer to the newNode
    🌟 else
        tail.next = newNode e point koray dibo
        tail=newNode kore dibo
    lenght =lenght+1;
    return this --> this represents the global object

*/

class CreateNode {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LL {
  constructor(value) {
    const newNode = new CreateNode(value);
    this.head = newNode;
    this.tail = newNode;
    this.length = 1;
  }

  // push or add node at the end
  push(value) {
    const newNode = new CreateNode(value);
    if (this.head === null) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
    return this;
  }
}

let myLL = new LL(null);
myLL.push(4);
myLL.push(4);
console.log(myLL);


```

এবং এইভাবে আমাদের পুশ মেথড কার্যকরী হয়েছে!

</details>

<details>
    <summary>🔥06- লিঙ্কড লিস্টের পপ (Pop) মেথড</summary>
    <br>

# 🔥06- লিঙ্কড লিস্টের পপ (Pop) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য পপ (Pop) মেথড তৈরি করব।

### 🌟 পপ মেথডের পদক্ষেপ

1. **শেষ আইটেম অপসারণ**: পপ মেথডটি শেষ আইটেমটি সরিয়ে দেবে এবং **টেইলকে** পূর্ববর্তী আইটেমের দিকে নির্দেশ করবে।
2. **অপসারিত আইটেম ফেরত দেওয়া**: অপসারিত আইটেমটি ফেরত দেওয়া হবে।

### 🌟 এজ কেস

আমাদের কিছু এজ কেস বিবেচনা করতে হবে:

1. **শূন্য আইটেম**: যদি লিঙ্কড লিস্টে কোনও আইটেম না থাকে, তাহলে আমরা কিছু অপসারণ করতে পারি না।
2. **একটি আইটেম**: যদি লিঙ্কড লিস্টে মাত্র একটি আইটেম থাকে, তাহলে আমাদের বিশেষভাবে কোড করতে হবে।

### 🌟পপ মেথডের Logic

- **টেইলকে পূর্ববর্তী আইটেমের দিকে নির্দেশ করা**: এটি কিছুটা জটিল, কারণ আমাদের টেইলকে বাম দিকে সরাতে হবে।
- **নেস্টেড অবজেক্ট হিসেবে দেখতে হবে**: টেইলকে পূর্ববর্তী আইটেমে নির্দেশ করার জন্য, আমাদের হেড থেকে শুরু করে পুরো তালিকাটি পার হতে হবে।

### 🌟 কোডিং পরিকল্পনা

1. **নতুন ভেরিয়েবল তৈরি করা**:

   - `temp`: এটি শেষ নোডকে নির্দেশ করবে।
   - `pre`: এটি শেষের পূর্ববর্তী নোডকে নির্দেশ করবে।

2. **তালিকার মধ্য দিয়ে পুনরাবৃত্তি করা**:

   - `temp` এর `next` যদি অন্য নোডকে নির্দেশ করে, তাহলে `pre` কে আপডেট করুন এবং `temp` কে পরবর্তী নোডে সরান।
   - পুনরাবৃত্তি চলতে থাকবে যতক্ষণ না `temp.next` `null` হয়।

3. **টেইল আপডেট করা**:

   - টেইলকে `pre` এর দিকে নির্দেশ করুন।
   - `tail.next` কে `null` সেট করুন, যা শেষ নোডটি সরিয়ে দেবে।

4. **অপসারিত নোড ফেরত দেওয়া**:
   - অবশেষে, `temp` ফেরত দিন, যা অপসারিত নোডকে নির্দেশ করবে।

### কোড উদাহরণ

```javascript
pop() {
    // case 0 items
    if (!this.head) {
        return undefined; // যদি তালিকা খালি হয়
    }
// case two or more items
    let temp = this.head;
    let pre = this.head;

    // তালিকার মধ্য দিয়ে পুনরাবৃত্তি করা means as long as temp !== null
    while (temp.next) {
        pre = temp; // পূর্ববর্তী নোড আপডেট করা
        temp = temp.next; // পরবর্তী নোডে যাওয়া
    }

    this.tail = pre; // টেইলকে পূর্ববর্তী নোডে নির্দেশ করা
    this.tail.next = null; // শেষ নোড অপসারণ করা
    this.length --;

    return temp; // অপসারিত নোড ফেরত দেওয়া
    
//case for one items
   this.tail = pre; // টেইলকে পূর্ববর্তী নোডে নির্দেশ করা
    this.tail.next = null; // শেষ নোড অপসারণ করা
    this.length --;
    if(this.length ===0){
        this.head =null;
        this.tail =null;
    }
    return temp


}
```

এটি ছিল আমাদের পপ মেথডের একটি সংক্ষিপ্ত বিবরণ।


## 🌟 লিঙ্কড লিস্টের পপ (Pop) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের পপ (Pop) মেথডটি কোড করব। এই মেথডটি শেষ আইটেমটি সরিয়ে দেবে এবং টেইলকে পূর্ববর্তী আইটেমের দিকে নির্দেশ করবে।

### পপ মেথডের পদক্ষেপ

1. **শূন্য আইটেম চেক করা**: প্রথমে চেক করতে হবে যে লিঙ্কড লিস্টে কোনো আইটেম আছে কিনা।
2. **একটি আইটেম চেক করা**: যদি একটি মাত্র আইটেম থাকে, তাহলে হেড এবং টেইল উভয়ই সেই আইটেমের দিকে নির্দেশ করবে।
3. **দুই বা ততোধিক আইটেম থাকা**: যদি দুটি বা তার বেশি আইটেম থাকে, তাহলে আমাদের পূর্ববর্তী নোডে যাওয়ার জন্য তালিকার মধ্য দিয়ে পুনরাবৃত্তি করতে হবে।

### কোডিং পরিকল্পনা

```javascript
pop() {
    // ১. শূন্য আইটেম চেক করা
    if (!this.head || this.length === 0) {
        return undefined; // তালিকা খালি হলে undefined ফেরত দিন
    }

    let temp = this.head; // টেম্প ভেরিয়েবল হেডকে নির্দেশ করে
    let pre = null; // পূর্ববর্তী নোডের জন্য ভেরিয়েবল

    // ২. তালিকার মধ্য দিয়ে পুনরাবৃত্তি করা
    while (temp.next) {
        pre = temp; // পূর্ববর্তী নোড আপডেট করা
        temp = temp.next; // টেম্পকে পরবর্তী নোডে সরানো
    }

    // ৩. টেইল আপডেট করা
    this.tail = pre; // টেইলকে পূর্ববর্তী নোডে নির্দেশ করা
    this.tail.next = null; // শেষ নোড অপসারণ করা

    this.length--; // দৈর্ঘ্য কমানো

    // ৪. একমাত্র আইটেম থাকলে হেড এবং টেইল আপডেট করা
    if (this.length === 0) {
        this.head = null;
        this.tail = null;
    }

    return temp; // অপসারিত নোড ফেরত দেওয়া
}
```

### কোড বিশ্লেষণ

- **শূন্য আইটেম চেক**: `if (!this.head || this.length === 0)` এই শর্তটি পরীক্ষা করে যে তালিকা খালি কি না। যদি খালি হয়, তাহলে `undefined` ফেরত দেওয়া হয়।
- **পুনরাবৃত্তি**: `while (temp.next)` এই শর্তটি ব্যবহার করে আমরা তালিকার শেষ পর্যন্ত পৌঁছানোর জন্য পুনরাবৃত্তি করি।
- **টেইল আপডেট**: `this.tail = pre` দ্বারা টেইলকে পূর্ববর্তী নোডে নির্দেশ করি এবং `this.tail.next = null` দ্বারা শেষ নোড অপসারণ করি।
- **দৈর্ঘ্য আপডেট**: `this.length--` দ্বারা দৈর্ঘ্য কমানো হয়। যদি দৈর্ঘ্য শূন্য হয়, তাহলে হেড এবং টেইল উভয়কেই `null` এ সেট করা হয়।

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি:

```javascript
let myLinkedList = new LinkedList(1); // ১ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.push(2); // ২ মান যুক্ত করা

console.log(myLinkedList.pop()); // এটি ২ নোড ফেরত দেবে
console.log(myLinkedList); // এখন হেড ১ নোডকে নির্দেশ করবে, টেইলও ১ হবে

console.log(myLinkedList.pop()); // এটি ১ নোড ফেরত দেবে
console.log(myLinkedList); // এখন তালিকা খালি হবে, হেড এবং টেইল উভয়ই null হবে

console.log(myLinkedList.pop()); // এটি undefined ফেরত দেবে কারণ তালিকা খালি
```

### ফলাফল

- প্রথম পপ কল করার সময়, এটি ২ নোড ফেরত দেয় এবং তালিকায় ১ নোড থাকে।
- দ্বিতীয় পপ কল করার সময়, এটি ১ নোড ফেরত দেয় এবং তালিকা খালি হয়ে যায়।
- তৃতীয় পপ কল করার সময়, এটি `undefined` ফেরত দেয়।

এবং এইভাবে আমাদের পপ মেথড কার্যকরী হয়েছে!

### 🔲 Full Code 


```js
/*  
Pop is O(n) operation.
    case 1: no element
    case 2: two or more elements
    case 3: 1 element


*/



class CreateNode {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkdList {
  constructor(value) {
    const newNode = new CreateNode(value);
    this.head = newNode;
    this.tail = newNode;
    this.length = 1;
  }

  // push or add node at the end
  push(value) {
    const newNode = new CreateNode(value);
    if (this.head === null) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.length++;
    return this;
  };


  // pop or remove node at the last O(n)
  pop(){

    // case 1: no element
    if(!this.head || this.length ===0){
        return undefined;
    }
    // case 2: two or more elements
    let temp =this.head;
    let pre =this.head;
    while(temp.next !==null){
        pre =temp;
        temp = temp.next;
    }
    //both case 2 and 3
    this.tail =pre;
    this.tail.next =null;
    this.length --;

    // case 3: 1 element
    if(this.length ===0){
        this.head =null;
        this.tail =null;
    }
    return temp;

  }
};

let myLinkedList =new LinkdList(1);
myLinkedList.push(23);
myLinkedList.push(26);
console.log(myLinkedList)

myLinkedList.pop()
console.log(myLinkedList);

myLinkedList.pop()
console.log(myLinkedList);

myLinkedList.pop()
console.log(myLinkedList)

myLinkedList.pop()
console.log(myLinkedList);

```

</details>



<details>
    <summary>🔥07- লিঙ্কড লিস্টের আনশিফট (Unshift) মেথড</summary>
    <br>


# 🔥07- লিঙ্কড লিস্টের আনশিফট (Unshift) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য আনশিফট (Unshift) মেথডটি লিখব। আনশিফট মেথডটি একটি নতুন নোডকে তালিকার শুরুতে যুক্ত করে।

### আনশিফট মেথডের পদক্ষেপ

1. **নতুন নোড তৈরি করা**: প্রথমে একটি নতুন নোড তৈরি করতে হবে।
2. **হেড পয়েন্টার আপডেট করা**: নতুন নোডটি বর্তমান হেডের দিকে নির্দেশ করবে।
3. **হেড এবং টেইল আপডেট করা**: যদি তালিকা খালি হয়, তাহলে হেড এবং টেইল উভয়ই নতুন নোডের দিকে নির্দেশ করবে।

### কোডিং পরিকল্পনা

```javascript
unshift(value) {
    const newNode = new Node(value); // নতুন নোড তৈরি করা

    // যদি তালিকা খালি হয়
    if (!this.head) {
        this.head = newNode; // হেডকে নতুন নোডের দিকে নির্দেশ করা
        this.tail = newNode; // টেইলকেও নতুন নোডের দিকে নির্দেশ করা
    } else {
        newNode.next = this.head; // নতুন নোডের পরবর্তী পয়েন্টারকে বর্তমান হেডের দিকে নির্দেশ করা
        this.head = newNode; // হেডকে নতুন নোডের দিকে নির্দেশ করা
    }

    this.length++; // দৈর্ঘ্য ১ বাড়ানো
    return this; // পুরো লিঙ্কড লিস্ট ফেরত দেওয়া
}
```

### কোড বিশ্লেষণ

- **নতুন নোড তৈরি**: `const newNode = new Node(value);` এই লাইনে আমরা একটি নতুন নোড তৈরি করছি।
- **হেড চেক**: `if (!this.head)` এই শর্তটি পরীক্ষা করে যে তালিকা খালি কি না। যদি খালি হয়, তাহলে হেড এবং টেইল উভয়ই নতুন নোডের দিকে নির্দেশ করে।
- **নতুন নোড যুক্ত করা**: যদি তালিকা খালি না হয়, তাহলে `newNode.next = this.head;` দ্বারা নতুন নোডের পরবর্তী পয়েন্টারকে বর্তমান হেডে নির্দেশ করি এবং পরে হেড আপডেট করি।
- **দৈর্ঘ্য বাড়ানো**: `this.length++` মাধ্যমে আমরা লিঙ্কেড লিস্টের দৈর্ঘ্য বাড়াচ্ছি।
- **ফিরিয়ে দেওয়া**: `return this;` পুরো লিঙ্কেড লিস্ট ফেরত দেয়।

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি:

```javascript
let myLinkedList = new LinkedList(11); // ১১ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.unshift(4); // ৪ মান যুক্ত করা
```

- যখন আমরা `myLinkedList.unshift(4)` কল করি, এটি পুরো লিঙ্কেড লিস্ট ফেরত দেবে।

### ফলাফল

```plaintext
LinkedList {
    head: Node { value: 4, next: Node { value: 11, next: null } },
    tail: Node { value: 11, next: null },
    length: 2
}
```

এবং এইভাবে আমাদের আনশিফট (Unshift) মেথড কার্যকরী হয়েছে!


### 🔲 Full Code 

```js
class CreateNode {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkdList {
    constructor(value) {
        const newNode = new CreateNode(value);
        this.head = newNode;
        this.tail = newNode;
        this.length = 1;
    }

    // push or add node at the end
    push(value) {
        const newNode = new CreateNode(value);
        if (this.head === null) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.length++;
        return this;
    }
    pop() {

        if (!this.head)
            return undefined;
        let temp = this.head;
        let pre = this.head;
        while (temp.next) {
            pre = temp;
            temp = temp.next;
        }
        this.tail = pre;
        this.tail.next = null;
        this.length--;

        if (this.length === 0) {
            this.head = null;
            this.tail = null;
        }
        return temp;
    };


    unshift(value){
        const newNode =new CreateNode(value);

        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            newNode.next =this.head; // pointer update
            this.head =newNode;   // new node k head banalam 
            // newNode =this.head;   // not working anymore
        }
        this.length++;
        return this; //whole linked list

    }
}

let myLinkedList = new LinkdList(1);
myLinkedList.push(20);
myLinkedList.push(70);
myLinkedList.push(40);
// console.log(myLinkedList);

myLinkedList.unshift(33);
console.log(myLinkedList);
```

</details>



<details>
    <summary>🔥08- লিঙ্কড লিস্টের শিফট (Shift) মেথড</summary>
    <br>


# 🔥08 লিঙ্কড লিস্টের শিফট (Shift) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য শিফট (Shift) মেথডটি লিখব। শিফট মেথডটি তালিকার প্রথম আইটেমটি সরিয়ে দেবে এবং সেই আইটেমটি ফেরত দেবে।

### শিফট মেথডের পদক্ষেপ

1. **শূন্য আইটেম চেক করা**: প্রথমে চেক করতে হবে যে লিঙ্কড লিস্টে কোনো আইটেম আছে কিনা।
2. **একটি আইটেম থাকা**: যদি একটি মাত্র আইটেম থাকে, তাহলে হেড এবং টেইল উভয়ই সেই আইটেমের দিকে নির্দেশ করবে।
3. **দুই বা ততোধিক আইটেম থাকা**: যদি দুটি বা তার বেশি আইটেম থাকে, তাহলে হেডকে পরবর্তী নোডের দিকে নির্দেশ করতে হবে।

### কোডিং পরিকল্পনা

```javascript
shift() {
    // ১. শূন্য আইটেম চেক করা
    if (!this.head) {
        return undefined; // তালিকা খালি হলে undefined ফেরত দিন
    }

    let temp = this.head; // টেম্প ভেরিয়েবল হেডকে নির্দেশ করে

    // ২. হেড আপডেট করা
    this.head = this.head.next; // হেডকে পরবর্তী নোডে নির্দেশ করা

    // ৩. অপসারিত নোডের পরবর্তী পয়েন্টারকে null সেট করা
    temp.next = null;

    // ৪. দৈর্ঘ্য কমানো
    this.length--;

    // ৫. যদি তালিকা খালি হয়, তাহলে টেইল আপডেট করা
    if (this.length === 0) {
        this.tail = null;
    }

    return temp; // অপসারিত নোড ফেরত দেওয়া
}
```

### কোড বিশ্লেষণ

- **শূন্য আইটেম চেক**: `if (!this.head)` এই শর্তটি পরীক্ষা করে যে তালিকা খালি কি না। যদি খালি হয়, তাহলে `undefined` ফেরত দেওয়া হয়।
- **হেড আপডেট**: `this.head = this.head.next;` দ্বারা হেডকে পরবর্তী নোডে নির্দেশ করি।
- **অপসারিত নোডের পয়েন্টার আপডেট**: `temp.next = null;` দ্বারা অপসারিত নোডের পরবর্তী পয়েন্টারকে `null` সেট করি।
- **দৈর্ঘ্য আপডেট**: `this.length--` দ্বারা দৈর্ঘ্য কমানো হয়। যদি দৈর্ঘ্য শূন্য হয়, তাহলে টেইলকেও `null` এ সেট করা হয়।

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি:

```javascript
let myLinkedList = new LinkedList(2); // ২ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.unshift(1); // ১ মান যুক্ত করা

console.log(myLinkedList.shift()); // এটি ১ নোড ফেরত দেবে
console.log(myLinkedList); // এখন তালিকায় ২ নোড থাকবে

myLinkedList.shift(); // এটি ২ নোড ফেরত দেবে
console.log(myLinkedList); // এখন তালিকা খালি হবে, হেড এবং টেইল উভয়ই null হবে

console.log(myLinkedList.shift()); // এটি undefined ফেরত দেবে কারণ তালিকা খালি
```

### ফলাফল

- প্রথম শিফট কল করার সময়, এটি ১ নোড ফেরত দেয় এবং তালিকায় ২ নোড থাকে।
- দ্বিতীয় শিফট কল করার সময়, এটি ২ নোড ফেরত দেয় এবং তালিকা খালি হয়ে যায়।
- তৃতীয় শিফট কল করার সময়, এটি `undefined` ফেরত দেয়।

এবং এইভাবে আমাদের শিফট (Shift) মেথড কার্যকরী হয়েছে!

### Full Code 

```javascript
class CreateNode {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkdList {
    constructor(value) {
        const newNode = new CreateNode(value);
        this.head = newNode;
        this.tail = newNode;
        this.length = 1;
    }


    //todo: Add Node
    // push or add node at the end
    push(value) {
        const newNode = new CreateNode(value);
        if (this.head === null) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.length++;
        return this;
    }

    // add node at the start
    unshift(value){
        const newNode =new CreateNode(value);

        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            newNode.next =this.head; // pointer update
            this.head =newNode;   // new node k head banalam 
        }
        this.length++;
        return this; //whole linked list
    }

    //todo: Delete Node 

    // remove from end
    pop() {

        if (!this.head)
            return undefined;
        let temp = this.head;
        let pre = this.head;
        while (temp.next) {
            pre = temp;
            temp = temp.next;
        }
        this.tail = pre;
        this.tail.next = null;
        this.length--;

        if (this.length === 0) {
            this.head = null;
            this.tail = null;
        }
        return temp;
    };

    //remove from first
    shift(){
        if(!this.head) 
            return this.undefined;
        let tempNode =this.head;   // tempNode pointing to the head
        this.head =this.head.next;  // move head pointer
        tempNode.next= null;   // finally ser tempNode to null for detaching from head
        this.length--;

        if(this.length ===0){
            this.tail =null;
        }
        return this;
    }
}

let myLinkedList = new LinkdList(1);
myLinkedList.push(20);

myLinkedList.unshift(33);
console.log(myLinkedList);

myLinkedList.shift();
console.log(myLinkedList);


```


</details>



<details>
    <summary>🔥09 -লিঙ্কড লিস্টের গেট (Get) মেথড</summary>
    <br>

# README.md

# 🔥09 -লিঙ্কড লিস্টের গেট (Get) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য গেট (Get) মেথডটি তৈরি করব। গেট মেথডটি একটি নির্দিষ্ট ইনডেক্সে থাকা নোডটি ফেরত দেয়।

### গেট মেথডের পদক্ষেপ

1. **ইনডেক্স চেক করা**: প্রথমে নিশ্চিত করতে হবে যে ইনডেক্সটি বৈধ কিনা।
2. **নোড খোঁজা**: যদি ইনডেক্স বৈধ হয়, তাহলে তালিকার শুরু থেকে শুরু করে নির্দিষ্ট ইনডেক্সে পৌঁছাতে হবে।
3. **নোড ফেরত দেওয়া**: নির্দিষ্ট ইনডেক্সের নোডটি ফেরত দিতে হবে।

### কোডিং পরিকল্পনা

```javascript
get(index) {
    // ১. ইনডেক্স চেক করা
    if (index < 0 || index >= this.length) {
        return undefined; // অবৈধ ইনডেক্স হলে undefined ফেরত দিন
    }

    let temp = this.head; // টেম্প ভেরিয়েবল হেডকে নির্দেশ করে

    // ২. তালিকার মধ্য দিয়ে পুনরাবৃত্তি করা
    for (let i = 0; i < index; i++) {
        temp = temp.next; // টেম্পকে পরবর্তী নোডে সরানো
    }

    return temp; // নির্দিষ্ট ইনডেক্সের নোড ফেরত দেওয়া
}
```

### কোড বিশ্লেষণ

- **ইনডেক্স চেক**: `if (index < 0 || index >= this.length)` এই শর্তটি পরীক্ষা করে যে ইনডেক্স বৈধ কিনা। যদি অবৈধ হয়, তাহলে `undefined` ফেরত দেওয়া হয়।
- **নোড খোঁজা**: `for (let i = 0; i < index; i++)` দ্বারা আমরা তালিকার মধ্য দিয়ে পুনরাবৃত্তি করি এবং `temp` ভেরিয়েবলকে পরবর্তী নোডে সরাই।
- **নোড ফেরত দেওয়া**: শেষ পর্যন্ত, `return temp;` দ্বারা নির্দিষ্ট ইনডেক্সের নোডটি ফেরত দিই।


```javascript
let myLinkedList = new LinkedList(0); // ০ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.unshift(1); // ১ মান যুক্ত করা
myLinkedList.unshift(2); // ২ মান যুক্ত করা
myLinkedList.unshift(3); // ৩ মান যুক্ত করা

console.log(myLinkedList.get(-1)); // এটি undefined ফেরত দেবে (অবৈধ ইনডেক্স)
console.log(myLinkedList.get(10)); // এটি undefined ফেরত দেবে (অবৈধ ইনডেক্স)
console.log(myLinkedList.get(2)); // এটি ২ নোড ফেরত দেবে (বৈধ ইনডেক্স)
```

### ফলাফল

- প্রথম গেট কল করার সময়, এটি অবৈধ ইনডেক্স (-1) এর জন্য `undefined` ফেরত দেয়।
- দ্বিতীয় গেট কল করার সময়, এটি অবৈধ ইনডেক্স (10) এর জন্যও `undefined` ফেরত দেয়।
- তৃতীয় গেট কল করার সময়, এটি বৈধ ইনডেক্স (2) এর জন্য ২ নোডের মান ফেরত দেয়।

এবং এইভাবে আমাদের গেট (Get) মেথড কার্যকরী হয়েছে!

</details>



<details>
    <summary>🔥10- লিঙ্কড লিস্টের সেট (Set) মেথড</summary>
    <br>

# README.md

# 🔥10- লিঙ্কড লিস্টের সেট (Set) মেথড

এখন আমরা আমাদের লিঙ্কড লিস্টের জন্য সেট (Set) মেথডটি তৈরি করব। সেট মেথডটি একটি নির্দিষ্ট ইনডেক্সে থাকা নোডের মান পরিবর্তন করে।

### সেট মেথডের পদক্ষেপ

1. **ইনডেক্স চেক করা**: প্রথমে নিশ্চিত করতে হবে যে ইনডেক্সটি বৈধ কিনা।
2. **নোড খোঁজা**: যদি ইনডেক্স বৈধ হয়, তাহলে তালিকার শুরু থেকে শুরু করে নির্দিষ্ট ইনডেক্সে পৌঁছাতে হবে।
3. **মান পরিবর্তন করা**: নির্দিষ্ট ইনডেক্সের নোডটির মান পরিবর্তন করতে হবে।
4. **ফলাফল ফেরত দেওয়া**: সফলভাবে পরিবর্তন হলে `true` ফেরত দিতে হবে, অন্যথায় `false`।

### কোডিং পরিকল্পনা

```javascript
set(index, value) {
    // ১. ইনডেক্স চেক করা
    if (index < 0 || index >= this.length) {
        return false; // অবৈধ ইনডেক্স হলে false ফেরত দিন
    }

    let temp = this.get(index); // নির্দিষ্ট ইনডেক্সের নোড খোঁজা

    // ২. নোড পাওয়া গেলে মান পরিবর্তন করা
    if (temp) {
        temp.value = value; // নোডের মান পরিবর্তন করা
        return true; // সফলভাবে পরিবর্তন হলে true ফেরত দিন
    }

    return false; // নোড না পাওয়া গেলে false ফেরত দিন
}
```

### কোড বিশ্লেষণ

- **ইনডেক্স চেক**: `if (index < 0 || index >= this.length)` এই শর্তটি পরীক্ষা করে যে ইনডেক্স বৈধ কিনা। যদি অবৈধ হয়, তাহলে `false` ফেরত দেওয়া হয়।
- **নোড খোঁজা**: `let temp = this.get(index);` দ্বারা আমরা গেট মেথড ব্যবহার করে নির্দিষ্ট ইনডেক্সের নোডটি খুঁজে বের করি।
- **মান পরিবর্তন**: `if (temp)` দ্বারা নিশ্চিত হই যে নোডটি পাওয়া গেছে এবং তারপর `temp.value = value;` দ্বারা মান পরিবর্তন করি।
- **ফলাফল ফেরত দেওয়া**: সফলভাবে পরিবর্তন হলে `true` এবং অন্যথায় `false` ফেরত দিই।

### ডেভটুলসে পরীক্ষা করা

এখন আসুন ডেভটুলসে কোডটি পরীক্ষা করি:

```javascript
let myLinkedList = new LinkedList(3); // ৩ মান সহ একটি নতুন লিঙ্কেড লিস্ট তৈরি করা
myLinkedList.unshift(2); // ২ মান যুক্ত করা
myLinkedList.unshift(1); // ১ মান যুক্ত করা

console.log(myLinkedList.set(1, 4)); // এটি true ফেরত দেবে এবং ২ নোডের মানকে ৪ এ পরিবর্তন করবে
console.log(myLinkedList.get(1)); // এটি এখন ৪ ফেরত দেবে
```

### ফলাফল

- প্রথম সেট কল করার সময়, এটি সফলভাবে ২ নোডের মানকে ৪ এ পরিবর্তন করে এবং `true` ফেরত দেয়।
- দ্বিতীয় গেট কল করার সময়, এটি নতুন মান (৪) ফেরত দেয়।

এবং এইভাবে আমাদের সেট (Set) মেথড কার্যকরী হয়েছে!

</details>