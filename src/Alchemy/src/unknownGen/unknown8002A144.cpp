#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igMetaObject_getMeta();
}
extern "C" {
void *igMetaObject_getMetaCall(){return igMetaObject_getMeta();}
}
#pragma pop
