#include "unknown8004B394.h"
#pragma push
#pragma auto_inline off
extern "C" {
Unknown80042DECResult fn_8004DC3C(Unknown8004D6DC *object){
 for(int i=0;i<object->unknown08;++i){
  object->unknown10[i]->unknown0C=i;
  object->unknown10[i]->slot98(object);
 }
 return Unknown80042DECResult(kSuccess__3Gap);
}
}
#pragma pop
