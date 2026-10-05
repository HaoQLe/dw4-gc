#include "unknown8004577C.h"
#pragma push
#pragma auto_inline off
extern "C" {
int fn_80045BA8(Unknown800442F8Owner *object,Unknown800442F8Stream *stream,void *dest,int fallback){
 if(!stream->unknown0C){if(object->unknown1C==1) return -1;return fallback;}
 Unknown800442F8Reference reference(fn_80024FB4(fn_80068430(object)));
 if(!object->unknown14) unknown8004577CCopy(reference.value,stream);
 else{const char *name=stream->unknown08.textElse();void *table=reinterpret_cast<void *>(reinterpret_cast<unsigned long>(object->unknown14));int key=object->unknown18;Unknown800442F8Reference *out=&reference;const char *other=stream->unknown08.text();if(!fn_8006D674(table,key,name,out,other,0) && object->unknown1C==1) return -1;}
 return fn_8006D2E8(dest,reinterpret_cast<Unknown800442F8Stream *>(reference.value)->unknown08.text(),1);
}
}
#pragma pop
