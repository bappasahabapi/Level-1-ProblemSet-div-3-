#   🅐 Singly Linked List:
    
    we have two part 
        1. node (data)
        2. next pointer
        
    1.Insert after a specific value
    2. Reverse order printing
    

**🎧 m-10-Linked-list:**

    01-structure-of-linked-list.cpp
    02-insert-in-head-linked-list.cpp
    03-traverse-linked-list.cpp
    04-searching-in-linked-list.cpp
    05-searching-all-possible-occurrence-linked-list.cpp

**🎧 m-12-Linked-list:**

    06-linkedList-length.cpp
    07-orderOf-1-length.cpp
    08-insert-at-any-index.cpp
    09-delete-at-head.cpp
    10-delete-at-any-node.cpp

**🎧 m-13-Linked-list:**

    
    11-insert-after-a-value.cpp
    12-reverse-print.cpp

**🎧 m-14-Doubly-Linked-list:**
    
    14-structure.cpp
    15-insertion-at-head.cpp
    16-insertion-at-any-index.cpp
    17-deletion.cpp
    18-reverse.cpp

###   Basic Operations(singly linked list):

    1. Insert after a specific value
    2. print reverse order recursively

#   🅑Doubly Linked List:

    1.Structure
    2.Insertion
    3.Deletion 
    4.Reverse 
    
    --> Here we can track our previous memory
        That means backtracking/backward movement is possible
                    --> Implementation easier

Real Example: *Browser navigation*

    we have three part 
        1. Previous node pointer 
        2. node (data)
        3. next pointer
        
**1.Structure of Doubly Linked list:**
   
         
        {[pre_pointer ][data][next_pointer_node]}
        
          memory address   memory address    memory address
     head↘️     ➍⓿                 ➎⓿             ➏⓿
          {[NULL][5][50]}-->{[➍⓿][10][➏⓿]}--> {[ ➎⓿][15][NULL]}
                       ↪️↪️↪️↪️↪️↪️⤴️
    index:      0                1                2
**2.Doubly linked list insertion:**   
   
         
        {[pre_pointer ][data][next_pointer_node]}
        
          memory address   memory address    memory address
     head↘️     ➍⓿                 ➎⓿             ➏⓿
          {[NULL][5][50]}-->{[➍⓿][10][➏⓿]}--> {[ ➎⓿][15][NULL]}
                       ↪️↪️↪️↪️↪️↪️⤴️
    index:      0                1                2

**3.Doubly linked list Deletion:**

