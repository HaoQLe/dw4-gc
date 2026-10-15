#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igStringMetaField_getMeta();
extern void *igRefMetaField_meta;
}
extern "C" {
void *igStringMetaField_getMetaCall(){return igStringMetaField_getMeta();}
void *fn_80025494(){return igRefMetaField_meta;}
}
#pragma pop
