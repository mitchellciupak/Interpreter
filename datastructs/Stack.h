#ifndef PROJ1_RUNTIMESTACKOBJECT_H
#define PROJ1_RUNTIMESTACKOBJECT_H

/* Description */

/* All operations are executed against values in the runtime stack. All
variables exist on the runtime stack. To make your life easier, each datum takes exactly one position in
the runtime stacks. Since data are of different lengths, this is accomplished by having the stack be
represented by a vector, where each element of the vector points to an object holding the actual data
item. The object should have a field to hold the value of the data item, and a field to hold the type of
the data items. Data items are of type char, short, int or float.
The stack is initially empty.
*/
#include "main.h"

class Stack {
    Stack(){
        sp = -1;
    }

public:
    static vector<Value> stackVect;     //Creates the stack vector as a static vector of value objects
                                            //-Used a vector object for dynamic memory allocation
                                            //-Used static so that any object that needs to access the
                                            // stack can just create a stack object
    // Used to push a Value object onto the stack
    void stack_Push(Value v){
        stackVect[sp++] = v;
    }

    //Used to pull a Value object from the stack
    Value stack_Pull(){
        return stackVect[sp--];
    }

private:
    static void int sp;
};


#endif //PROJ1_RUNTIMESTACKOBJECT_H
