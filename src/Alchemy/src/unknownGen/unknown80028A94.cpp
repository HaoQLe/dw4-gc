#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igObjectRefMetaField_getMeta();
}
extern "C" {
void *igObjectRefMetaField_getMetaCall(){return igObjectRefMetaField_getMeta();}
}
#pragma pop
