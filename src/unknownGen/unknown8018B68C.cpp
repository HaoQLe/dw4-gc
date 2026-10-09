#include <unknownGen.h>
#include <meta/igCBBox.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800561FC(int,int);
}
extern "C" {
void igCBBox_virtual2C(int p0){
 void *value0=fn_800561FC(4,4);
 reinterpret_cast<Meta::igCBBox *>((void *)p0)->_cmin=(void *)value0;
 void *value1=fn_800561FC(4,4);
 reinterpret_cast<Meta::igCBBox *>((void *)p0)->_cmax=(void *)value1;
}
}
#pragma pop
