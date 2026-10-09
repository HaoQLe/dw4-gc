#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igMetaField_getMeta();
}
extern "C" {
void *igMetaField_getMetaCall(){return igMetaField_getMeta();}
}
#pragma pop
