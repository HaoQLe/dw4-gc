#include <unknownGen.h>
#include <meta/igCBBox.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void igCBBox_virtual30(int p0){
 fn_80056378(reinterpret_cast<Meta::igCBBox *>((void *)p0)->_cmin);
 fn_80056378(reinterpret_cast<Meta::igCBBox *>((void *)p0)->_cmax);
}
}
#pragma pop
