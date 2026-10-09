#include <unknownGen.h>
#include <meta/igCartoonShader.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
void fn_801EA418(void *,int,int);
}
extern "C" {
void igCartoonShader_virtualA4(int p0,int p1,int p2){
 fn_801EA418((void *)p1,4,1);
 fn_80069128(reinterpret_cast<Meta::igCartoonShader *>((void *)p0)->_geoms,(void *)p1);
 fn_80069128(reinterpret_cast<Meta::igCartoonShader *>((void *)p0)->_mats,(void *)p2);
}
}
#pragma pop
