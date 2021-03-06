#ifndef C_PROJ_VALUE_H
#define C_PROJ_VALUE_H

//#include "main.h"

#include "MemoryObject.h"
#include <ostream>

enum types {c,s,i,f}; //character, short, int, float

class Value : public MemoryObject {
    enum valueTag { c , s , i , f , e };

public:
    Value(char v){
        cVal = v;
        tag = c;
    }
    Value(short v){
        sVal = v;
        tag = s;
    }

    Value(float v){
        fVal = v;
        tag = f;
    }
    
    Value(int v){
        iVal = v;
        tag = i;
    }
    valueTag tag;
    char cVal;
    short sVal;
    int iVal;
    float fVal;

    Value& operator=(char v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(short v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(int v){
        Value * newv = new Value(v);
        return *newv;
    }

    Value& operator=(float v){
        Value * newv = new Value(v);
        return *newv;
    }

    bool operator==(const Value& v2){
        if(this->tag != v2.tag){
            return 0;
        }else if(this->tag == 0 && this->cVal == v2.cVal){
            return 1;
        }else if(this->tag == 1 && this->sVal == v2.sVal){
            return 1;
        }else if(this->tag == 2 && this->iVal == v2.iVal){
            return 1;
        }else if(this->tag == 3 && this->fVal == v2.fVal){
            return 1;
        }
        return 0;
    }
    bool operator<(const Value& v2){
        if(this->tag != v2.tag){
            return 0;
        }else if(this->tag == 0 && this->cVal < v2.cVal){
            return 1;
        }else if(this->tag == 1 && this->sVal < v2.sVal){
            return 1;
        }else if(this->tag == 2 && this->iVal < v2.iVal){
            return 1;
        }else if(this->tag == 3 && this->fVal < v2.fVal){
            return 1;
        }
        return 0;
    }
    bool operator>(const Value& v2){
        if(this->tag != v2.tag){
            return 0;
        }else if(this->tag == 0 && this->cVal > v2.cVal){
            return 1;
        }else if(this->tag == 1 && this->sVal > v2.sVal){
            return 1;
        }else if(this->tag == 2 && this->iVal > v2.iVal){
            return 1;
        }else if(this->tag == 3 && this->fVal > v2.fVal){
            return 1;
        }
        return 0;
    }

    friend std::ostream& operator<<(std::ostream& os, const Value& v){
        if(v.tag == 0){
            os << (int)v.cVal;
        }else if(v.tag == 1){
            os << v.sVal;
        }else if(v.tag == 2){
            os << v.iVal;
        }else if(v.tag == 3){
            os << v.fVal;
        }
        return os;
    };
};


#endif //C_PROJ_VALUE_H
